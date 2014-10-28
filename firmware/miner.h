/*
 * Author: Xiangfu Liu <xiangfu@openmobilefree.net>
 * Bitcoin:	1CanaaniJzgps8EV6Sfmpb7T8RutpaeyFn
 *
 * This is free and unencumbered software released into the public domain.
 * For details see the UNLICENSE file at the root of the source tree.
 */

#ifndef __MINER_H__
#define __MINER_H__

#include <stdbool.h>
#include <stdint.h>

#include "protocol.h"

#define NONCE_HW	0
#define NONCE_VALID	1
#define NONCE_DIFF	2

struct work {
	uint32_t memo;
	uint32_t nonce2;

	uint8_t a2[4];
	uint8_t e0[4];
	uint8_t e1[4];
	uint8_t e2[4];
	uint8_t a0[4];
	uint8_t a1[4];
	uint8_t data[44]; 	/* midstate[32] + data[12] */

	uint8_t header[128]; 	/* Block header */
};

struct result {
	uint8_t miner_id[4];
	uint8_t	pool_no[4];

	uint8_t nonce2[4];
	uint8_t	ntime[4];
	uint8_t nonce[4];
};

struct mm_work {
	uint32_t job_id;
	size_t coinbase_len;
	uint8_t coinbase[AVA4_P_COINBASE_SIZE];

	uint32_t nonce2;
	int nonce2_offset;
	int nonce2_size; /* only 4 is support atm. */

	int merkle_offset;
	int nmerkles;
	uint8_t merkles[AVA4_P_MERKLES_COUNT][32];

	uint8_t header[128];

	uint32_t diff;
	uint32_t pool_no;

	uint8_t	target[32];
};

void miner_gen_nonce2_work(struct mm_work *mw, uint32_t nonce2, struct work *work);
void roll_work(struct work *work, int ntime_offset);

int test_nonce(struct mm_work *mw, uint32_t nonce2, uint32_t nonce, int ntime_offset);

#endif /* __MINER_H__ */
