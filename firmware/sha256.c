/*
 * Author: Xiangfu Liu <xiangfu@openmobilefree.net>
 * Bitcoin:	1CanaaniJzgps8EV6Sfmpb7T8RutpaeyFn
 *
 * This is free and unencumbered software released into the public domain.
 * For details see the UNLICENSE file at the root of the source tree.
 */

#include <stdint.h>
#include "io.h"
#include "minilibc.h"
#include "system_config.h"
#include "defines.h"

#include "sha256.h"

static struct lm32_sha256 *lm_sha256 = (struct lm32_sha256 *)SHA256_BASE;

static void sha256_init()
{
	writel(LM32_SHA256_CMD_INIT, &lm_sha256->cmd);
}

static void sha256_update(const uint8_t *input, unsigned int count)
{
	int i, len_blocks, len_rem;
	uint32_t tmp;
	uint8_t block[64], block1[64];

	len_blocks = count / SHA256_BLOCK_SIZE;
	len_rem = count % SHA256_BLOCK_SIZE;

	memset(block, 0, ARRAY_SIZE(block));
	memset(block1, 0, ARRAY_SIZE(block));

	debug32("xiangfu sha256_update: %d, %d\n", len_blocks, len_rem);
/* #include "hexdump.c" */
/* 	hexdump(input, count); */
	if (len_blocks != 0) {
		for (i = 0; i < len_blocks * SHA256_BLOCK_SIZE; i += 4) {
			memcpy((uint8_t *)(&tmp), input + i, 4);
			writel(tmp, &lm_sha256->in);
			if (!((i + 4) % 64)) /* Every 512bits we wait */
				while (!(readl(&lm_sha256->cmd) & LM32_SHA256_CMD_DONE))
					;
		}
		input += len_blocks * SHA256_BLOCK_SIZE;
	}

	if (len_rem <= 32/* 64 / 8 */) {
		for (i = 0; i < len_rem; i++)
			block[i] = input[i];
		block[i] = 0x80;
		block[60] = ((count*8) & 0xff000000) >> 24;
		block[61] = ((count*8) & 0x00ff0000) >> 16;
		block[62] = ((count*8) & 0x0000ff00) >> 8;
		block[63] = ((count*8) & 0x000000ff);
		for (i = 0; i < 64; i += 4) {
			memcpy((uint8_t *)(&tmp), block + i, 4);
			writel(tmp, &lm_sha256->in);
			if (!((i + 4) % 64)) /* Every 512bits we wait */
				while (!(readl(&lm_sha256->cmd) & LM32_SHA256_CMD_DONE))
					;
		}
	} else {
		for (i = 0; i < len_rem; i++)
			block[i] = input[i];
		block[i] = 0x80;

		block1[60] = ((count*8) & 0xff000000) >> 24;
		block1[61] = ((count*8) & 0x00ff0000) >> 16;
		block1[62] = ((count*8) & 0x0000ff00) >> 8;
		block1[63] = ((count*8) & 0x000000ff);

		for (i = 0; i < 64; i += 4) {
			memcpy((uint8_t *)(&tmp), block + i, 4);
			writel(tmp, &lm_sha256->in);
			if (!((i + 4) % 64)) /* Every 512bits we wait */
				while (!(readl(&lm_sha256->cmd) & LM32_SHA256_CMD_DONE))
					;
		}
		for (i = 0; i < 64; i += 4) {
			memcpy((uint8_t *)(&tmp), block1 + i, 4);
			writel(tmp, &lm_sha256->in);
			if (!((i + 4) % 64)) /* Every 512bits we wait */
				while (!(readl(&lm_sha256->cmd) & LM32_SHA256_CMD_DONE))
					;
		}
	}
}

static void sha256_final(uint8_t *state)
{
	int i;
	uint32_t tmp;

	for (i = 0; i < 32; i += 4) {
		tmp = readl(&lm_sha256->out);
		memcpy(state + i, (uint8_t *)(&tmp), 4);
	}
}

void sha256(const uint8_t *input, unsigned int count, uint8_t *state)
{
	sha256_init();
	sha256_update(input, count);
	sha256_final(state);
}
