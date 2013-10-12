uint8_t cb[] = {
	/* 000: coinbase1 */
	0x01, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x2a, 0x03, 0x9b, 0x03, 0x04, 0x06, 0x2f,
	0x50, 0x32, 0x53, 0x48, 0x2f, 0x04, 0xf2, 0xe6, 0x58, 0x52, 0x08, 

	/* 59: extranonce1 */
	0xf8, 0x05, 0x8f, 0x47,

	/* 63: extranonce2 */
	0x00, 0x00, 0x00, 0x00,

	/* 67: coinbase2 */
	0x10, 0x2f, 0x6f, 0x7a, 0x63, 0x6f, 0x69, 0x6e, 0x2f, 0x73, 0x74, 0x72, 0x61, 0x74, 0x75, 0x6d,
	0x2f, 0x00, 0x00, 0x00, 0x00, 0x01, 0x05, 0x78, 0x3e, 0x95, 0x00, 0x00, 0x00, 0x00, 0x19, 0x76,
	0xa9, 0x14, 0xda, 0xff, 0x48, 0x0d, 0x12, 0x91, 0x00, 0xda, 0xff, 0x3f, 0x97, 0xa9, 0x9a, 0xfc,
	0x71, 0x2b, 0x85, 0xc2, 0xf7, 0x6f, 0x88, 0xac, 0x00, 0x00, 0x00, 0x00
	/* 127 */
};

uint8_t m0[] = {
	0x5c, 0x5b, 0xad, 0x1a, 0x9a, 0x71, 0x46, 0x47, 0xc6, 0x0a, 0xdd, 0xff, 0x34, 0xa8, 0x33, 0x5f, 0xdf, 0xec, 0xd3, 0x09, 0x95, 0xb0, 0x82, 0x71, 0x79, 0x01, 0xf9, 0x75, 0x14, 0x5b, 0x43, 0x83};

uint8_t m1[] = {
	0xb0, 0x4b, 0xcb, 0xfe, 0x5b, 0x98, 0x0d, 0x5f, 0xbb, 0x72, 0xb1, 0x95, 0x5e, 0x13, 0x9c, 0xe6, 0x7a, 0xab, 0xf0, 0x58, 0x06, 0x20, 0xf6, 0xeb, 0x5c, 0x96, 0x87, 0x49, 0x7a, 0x84, 0xb5, 0x7c};

uint8_t m2[] = {
	0x10, 0xc6, 0xa6, 0x1c, 0x1e, 0x03, 0xa4, 0xc4, 0xf2, 0x9a, 0x79, 0x7f, 0x86, 0xfa, 0x14, 0xe2, 0x96, 0xbf, 0xe8, 0xaa, 0x85, 0x51, 0x9d, 0x1e, 0x4a, 0x9b, 0x54, 0x0a, 0x49, 0x50, 0xb5, 0x4d};

uint8_t m3[] = {
	0x3f, 0xb0, 0xbf, 0x03, 0xcf, 0x6c, 0x16, 0x6a, 0xdd, 0xfd, 0xe6, 0xb3, 0x12, 0x2c, 0xc9, 0x7e, 0x55, 0x18, 0xfc, 0x03, 0xd0, 0x9c, 0x7c, 0xb8, 0x3c, 0x98, 0x57, 0xf9, 0x8b, 0x2b, 0x75, 0x8c};

uint8_t m4[] = {
	0x91, 0x96, 0xb4, 0xd1, 0x8f, 0x3b, 0x49, 0x54, 0x6a, 0xc9, 0x44, 0xc1, 0x40, 0xc8, 0xe0, 0xe0, 0xd4, 0x77, 0x71, 0x56, 0x1d, 0x01, 0xf7, 0x55, 0xee, 0x08, 0x82, 0xf1, 0xc9, 0x3c, 0x7d, 0x4b};

uint8_t m5[] = {
	0x7f, 0x5c, 0x4d, 0xbd, 0x64, 0xd1, 0x3e, 0x72, 0x37, 0x54, 0x96, 0x7e, 0x4a, 0x31, 0xa3, 0x46, 0x45, 0x64, 0xff, 0x54, 0xb1, 0x79, 0xa1, 0xa2, 0x51, 0xa0, 0x7e, 0xfe, 0x21, 0x1a, 0x3d, 0xc1};

uint8_t m6[] = {
	0x6c, 0x6c, 0x86, 0xc0, 0x6c, 0x3c, 0x73, 0xb6, 0x9c, 0x0c, 0x03, 0x89, 0x3b, 0xdd, 0x20, 0xd5, 0x8f, 0xc2, 0x3a, 0x2e, 0xb3, 0x48, 0x46, 0x7b, 0xa6, 0x25, 0x44, 0x74, 0xb9, 0x60, 0xa5, 0xf7};

uint8_t m7[] = {
	0x79, 0x11, 0xeb, 0x26, 0xa0, 0x65, 0x0f, 0x5f, 0xc9, 0x52, 0x6d, 0xc1, 0x29, 0x6c, 0x67, 0xc4, 0x27, 0xfd, 0xb6, 0xcc, 0x45, 0x11, 0x6f, 0xa4, 0x19, 0xb9, 0xc4, 0x46, 0xad, 0xc3, 0x44, 0x37};

uint8_t h[] = {
	/* bbversion */
	0x00, 0x00, 0x00, 0x02,

	/* prev_hash */
	0x38, 0xf2, 0x98, 0x66, 0x87, 0xb0, 0xb6, 0x37, 0xb3, 0x93, 0x99, 0x25, 0x6b, 0x24, 0xd3, 0xb1,
	0x5b, 0x1c, 0x72, 0xe8, 0x11, 0x7d, 0x77, 0x0f, 0x00, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00, 0x00, 

	/* blank_merkel */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,

	/* ntime */
	0x52, 0x58, 0xe6, 0xf1,

	/* nbit */
	0x19, 0x16, 0xb0, 0xca,

	/* nonce */
	0x00, 0x00, 0x00, 0x00,

	/* workpadding */
	0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x02, 0x00, 0x00
};

	mm_work.coinbase = cb;
	mm_work.coinbase_len = ARRAY_SIZE(cb);
	mm_work.nmerkles = 8;
	mm_work.merkles[0] = m0;
	mm_work.merkles[1] = m1;
	mm_work.merkles[2] = m2;
	mm_work.merkles[3] = m3;
	mm_work.merkles[4] = m4;
	mm_work.merkles[5] = m5;
	mm_work.merkles[6] = m6;
	mm_work.merkles[7] = m7;
	mm_work.header = h;

	mm_work.nonce2_size = 4;
	mm_work.nonce2 = 0;

	mm_work.nonce2_offset = 63;


/*
 [2013-10-12 14:06:43] Xiangfu ----
 [2013-10-12 14:06:43] 00000000   01 00 00 00 01 00 00 00  00 00 00 00 00 00 00 00 |................|
 [2013-10-12 14:06:43] 00000010   00 00 00 00 00 00 00 00  00 00 00 00 00 00 00 00 |................|
 [2013-10-12 14:06:43] 00000020   00 00 00 00 00 ff ff ff  ff 2a 03 9b 03 04 06 2f |.........*...../|
 [2013-10-12 14:06:43] 00000030   50 32 53 48 2f 04 f2 e6  58 52 08 f8 05 8f 47 00 |P2SH/...XR....G.|
 [2013-10-12 14:06:43] 00000040   00 00 00 10 2f 6f 7a 63  6f 69 6e 2f 73 74 72 61 |..../ozcoin/stra|
 [2013-10-12 14:06:43] 00000050   74 75 6d 2f 00 00 00 00  01 05 78 3e 95 00 00 00 |tum/......x>....|
 [2013-10-12 14:06:43] 00000060   00 19 76 a9 14 da ff 48  0d 12 91 00 da ff 3f 97 |..v....H......?.|
 [2013-10-12 14:06:43] 00000070   a9 9a fc 71 2b 85 c2 f7  6f 88 ac 00 00 00 00    |...q+...o...... |
 [2013-10-12 14:06:43] 00000000   fa c9 a8 36 e3 73 d3 d1  34 76 dd 12 d4 cc d8 d6 |...6.s..4v......|
 [2013-10-12 14:06:43] 00000010   ab aa dc f7 dd 21 29 2d  ed 1c 38 1e 28 18 96 0f |.....!)-..8.(...|
 [2013-10-12 14:06:43] 00000000   a5 3a 91 17 20 51 50 6b  f9 6f 90 48 be 09 af 41 |.:.. QPk.o.H...A|
 [2013-10-12 14:06:43] 00000010   00 b5 57 1e dc 13 b1 8b  05 ec e6 1c 28 bd d4 f5 |..W.........(...|
 [2013-10-12 14:06:43] Xiangfu ----
 [2013-10-12 14:06:43] Xiangfu ----
 [2013-10-12 14:06:43] 00000000   a5 3a 91 17 20 51 50 6b  f9 6f 90 48 be 09 af 41 |.:.. QPk.o.H...A|
 [2013-10-12 14:06:43] 00000010   00 b5 57 1e dc 13 b1 8b  05 ec e6 1c 28 bd d4 f5 |..W.........(...|
 [2013-10-12 14:06:43] 00000020   5c 5b ad 1a 9a 71 46 47  c6 0a dd ff 34 a8 33 5f |\[...qFG....4.3_|
 [2013-10-12 14:06:43] 00000030   df ec d3 09 95 b0 82 71  79 01 f9 75 14 5b 43 83 |.......qy..u.[C.|
 [2013-10-12 14:06:43] 00000000   fd 24 4a 30 0a 90 60 f6  60 08 ee 21 0a 08 39 9f |.$J0..`.`..!..9.|
 [2013-10-12 14:06:43] 00000010   32 5c 60 3d 10 42 ad 17  45 38 f5 70 01 86 44 56 |2\`=.B..E8.p..DV|
 [2013-10-12 14:06:43] 00000000   49 cd 88 82 99 46 8b aa  b5 a9 e9 e5 e7 14 f7 71 |I....F.........q|
 [2013-10-12 14:06:43] 00000010   1c ee 74 a4 95 35 7d 4f  43 90 97 6c 7d 8b bc 21 |..t..5}OC..l}..!|
 [2013-10-12 14:06:43] Xiangfu ----
 [2013-10-12 14:06:43] Xiangfu gen_stratum_work ----
 [2013-10-12 14:06:43] 00000000   49 cd 88 82 99 46 8b aa  b5 a9 e9 e5 e7 14 f7 71 |I....F.........q|
 [2013-10-12 14:06:43] 00000010   1c ee 74 a4 95 35 7d 4f  43 90 97 6c 7d 8b bc 21 |..t..5}OC..l}..!|
 [2013-10-12 14:06:43] 00000020   5c 5b ad 1a 9a 71 46 47  c6 0a dd ff 34 a8 33 5f |\[...qFG....4.3_|
 [2013-10-12 14:06:43] 00000030   df ec d3 09 95 b0 82 71  79 01 f9 75 14 5b 43 83 |.......qy..u.[C.|
 [2013-10-12 14:06:43] 00000000   49 cd 88 82 99 46 8b aa  b5 a9 e9 e5 e7 14 f7 71 |I....F.........q|
 [2013-10-12 14:06:43] 00000010   1c ee 74 a4 95 35 7d 4f  43 90 97 6c 7d 8b bc 21 |..t..5}OC..l}..!|
 [2013-10-12 14:06:43] 00000000   49 cd 88 82 99 46 8b aa  b5 a9 e9 e5 e7 14 f7 71 |I....F.........q|
 [2013-10-12 14:06:43] 00000010   1c ee 74 a4 95 35 7d 4f  43 90 97 6c 7d 8b bc 21 |..t..5}OC..l}..!|
 [2013-10-12 14:06:43] 00000020   5c 5b ad 1a 9a 71 46 47  c6 0a dd ff 34 a8 33 5f |\[...qFG....4.3_|
 [2013-10-12 14:06:43] 00000030   df ec d3 09 95 b0 82 71  79 01 f9 75 14 5b 43 83 |.......qy..u.[C.|
 [2013-10-12 14:06:43] Xiangfu ----
 [2013-10-12 14:06:43] Xiangfu ----
 [2013-10-12 14:06:43] 00000000   49 cd 88 82 99 46 8b aa  b5 a9 e9 e5 e7 14 f7 71 |I....F.........q|
 [2013-10-12 14:06:43] 00000010   1c ee 74 a4 95 35 7d 4f  43 90 97 6c 7d 8b bc 21 |..t..5}OC..l}..!|
 [2013-10-12 14:06:43] 00000020   b0 4b cb fe 5b 98 0d 5f  bb 72 b1 95 5e 13 9c e6 |.K..[.._.r..^...|
 [2013-10-12 14:06:43] 00000030   7a ab f0 58 06 20 f6 eb  5c 96 87 49 7a 84 b5 7c |z..X. ..\..Iz..||
 [2013-10-12 14:06:43] 00000000   98 14 3d 0b fe d9 d1 a2  12 9e 02 6e a1 f9 80 32 |..=........n...2|
 [2013-10-12 14:06:43] 00000010   cd 68 fd 65 34 3f 0f d6  70 19 c7 b6 6d a0 9a 38 |.h.e4?..p...m..8|
 [2013-10-12 14:06:43] 00000000   36 e0 4c 52 47 4a c9 65  ef 27 a7 a7 1a 95 82 02 |6.LRGJ.e.'......|
 [2013-10-12 14:06:43] 00000010   96 91 af 15 15 f6 6b 7c  af c0 0a de 96 68 be 7e |......k|.....h.~|
 [2013-10-12 14:06:43] Xiangfu ----
 [2013-10-12 14:06:43] Xiangfu gen_stratum_work ----
 [2013-10-12 14:06:43] 00000000   36 e0 4c 52 47 4a c9 65  ef 27 a7 a7 1a 95 82 02 |6.LRGJ.e.'......|
 [2013-10-12 14:06:43] 00000010   96 91 af 15 15 f6 6b 7c  af c0 0a de 96 68 be 7e |......k|.....h.~|
 [2013-10-12 14:06:43] 00000020   b0 4b cb fe 5b 98 0d 5f  bb 72 b1 95 5e 13 9c e6 |.K..[.._.r..^...|
 [2013-10-12 14:06:43] 00000030   7a ab f0 58 06 20 f6 eb  5c 96 87 49 7a 84 b5 7c |z..X. ..\..Iz..||
 [2013-10-12 14:06:43] 00000000   36 e0 4c 52 47 4a c9 65  ef 27 a7 a7 1a 95 82 02 |6.LRGJ.e.'......|
 [2013-10-12 14:06:43] 00000010   96 91 af 15 15 f6 6b 7c  af c0 0a de 96 68 be 7e |......k|.....h.~|
 [2013-10-12 14:06:43] 00000000   36 e0 4c 52 47 4a c9 65  ef 27 a7 a7 1a 95 82 02 |6.LRGJ.e.'......|
 [2013-10-12 14:06:43] 00000010   96 91 af 15 15 f6 6b 7c  af c0 0a de 96 68 be 7e |......k|.....h.~|
 [2013-10-12 14:06:43] 00000020   b0 4b cb fe 5b 98 0d 5f  bb 72 b1 95 5e 13 9c e6 |.K..[.._.r..^...|
 [2013-10-12 14:06:43] 00000030   7a ab f0 58 06 20 f6 eb  5c 96 87 49 7a 84 b5 7c |z..X. ..\..Iz..||
 [2013-10-12 14:06:43] Xiangfu ----
 [2013-10-12 14:06:43] Xiangfu ----
 [2013-10-12 14:06:43] 00000000   36 e0 4c 52 47 4a c9 65  ef 27 a7 a7 1a 95 82 02 |6.LRGJ.e.'......|
 [2013-10-12 14:06:43] 00000010   96 91 af 15 15 f6 6b 7c  af c0 0a de 96 68 be 7e |......k|.....h.~|
 [2013-10-12 14:06:43] 00000020   10 c6 a6 1c 1e 03 a4 c4  f2 9a 79 7f 86 fa 14 e2 |..........y.....|
 [2013-10-12 14:06:43] 00000030   96 bf e8 aa 85 51 9d 1e  4a 9b 54 0a 49 50 b5 4d |.....Q..J.T.IP.M|
 [2013-10-12 14:06:43] 00000000   43 55 83 f1 2a 34 3f 9a  cd 2f 8c 69 9b e9 df ad |CU..*4?../.i....|
 [2013-10-12 14:06:43] 00000010   ae d0 cd 05 82 e8 7b 76  0c 07 51 09 42 a4 1d 3e |......{v..Q.B..>|
 [2013-10-12 14:06:43] 00000000   f0 1d de bc 75 70 12 80  dc 65 52 eb fb d6 97 4d |....up...eR....M|
 [2013-10-12 14:06:43] 00000010   03 59 57 12 9f 0d 33 cb  27 8d ab 52 31 b9 4f ce |.YW...3.'..R1.O.|
 [2013-10-12 14:06:43] Xiangfu ----
 [2013-10-12 14:06:43] Xiangfu gen_stratum_work ----
 [2013-10-12 14:06:43] 00000000   f0 1d de bc 75 70 12 80  dc 65 52 eb fb d6 97 4d |....up...eR....M|
 [2013-10-12 14:06:43] 00000010   03 59 57 12 9f 0d 33 cb  27 8d ab 52 31 b9 4f ce |.YW...3.'..R1.O.|
 [2013-10-12 14:06:43] 00000020   10 c6 a6 1c 1e 03 a4 c4  f2 9a 79 7f 86 fa 14 e2 |..........y.....|
 [2013-10-12 14:06:43] 00000030   96 bf e8 aa 85 51 9d 1e  4a 9b 54 0a 49 50 b5 4d |.....Q..J.T.IP.M|
 [2013-10-12 14:06:43] 00000000   f0 1d de bc 75 70 12 80  dc 65 52 eb fb d6 97 4d |....up...eR....M|
 [2013-10-12 14:06:43] 00000010   03 59 57 12 9f 0d 33 cb  27 8d ab 52 31 b9 4f ce |.YW...3.'..R1.O.|
 [2013-10-12 14:06:43] 00000000   f0 1d de bc 75 70 12 80  dc 65 52 eb fb d6 97 4d |....up...eR....M|
 [2013-10-12 14:06:43] 00000010   03 59 57 12 9f 0d 33 cb  27 8d ab 52 31 b9 4f ce |.YW...3.'..R1.O.|
 [2013-10-12 14:06:43] 00000020   10 c6 a6 1c 1e 03 a4 c4  f2 9a 79 7f 86 fa 14 e2 |..........y.....|
 [2013-10-12 14:06:43] 00000030   96 bf e8 aa 85 51 9d 1e  4a 9b 54 0a 49 50 b5 4d |.....Q..J.T.IP.M|
 [2013-10-12 14:06:43] Xiangfu ----
 [2013-10-12 14:06:43] Xiangfu ----
 [2013-10-12 14:06:43] 00000000   f0 1d de bc 75 70 12 80  dc 65 52 eb fb d6 97 4d |....up...eR....M|
 [2013-10-12 14:06:43] 00000010   03 59 57 12 9f 0d 33 cb  27 8d ab 52 31 b9 4f ce |.YW...3.'..R1.O.|
 [2013-10-12 14:06:43] 00000020   3f b0 bf 03 cf 6c 16 6a  dd fd e6 b3 12 2c c9 7e |?....l.j.....,.~|
 [2013-10-12 14:06:43] 00000030   55 18 fc 03 d0 9c 7c b8  3c 98 57 f9 8b 2b 75 8c |U.....|.<.W..+u.|
 [2013-10-12 14:06:43] 00000000   c8 22 0d f2 61 a7 46 df  53 1e 14 ce 39 3d 0a 6b |."..a.F.S...9=.k|
 [2013-10-12 14:06:43] 00000010   f5 0c bc 3c dc 6c 07 a2  5b fa fc 60 29 b4 5b 26 |...<.l..[..`).[&|
 [2013-10-12 14:06:43] 00000000   79 ab 60 00 64 18 76 c7  9d 03 7f 09 0b c5 c0 c3 |y.`.d.v.........|
 [2013-10-12 14:06:43] 00000010   dc af c9 d3 6e 4a 5b d0  6f e0 d1 86 9c 88 f7 d4 |....nJ[.o.......|
 [2013-10-12 14:06:43] Xiangfu ----
 [2013-10-12 14:06:43] Xiangfu gen_stratum_work ----
 [2013-10-12 14:06:43] 00000000   79 ab 60 00 64 18 76 c7  9d 03 7f 09 0b c5 c0 c3 |y.`.d.v.........|
 [2013-10-12 14:06:43] 00000010   dc af c9 d3 6e 4a 5b d0  6f e0 d1 86 9c 88 f7 d4 |....nJ[.o.......|
 [2013-10-12 14:06:43] 00000020   3f b0 bf 03 cf 6c 16 6a  dd fd e6 b3 12 2c c9 7e |?....l.j.....,.~|
 [2013-10-12 14:06:43] 00000030   55 18 fc 03 d0 9c 7c b8  3c 98 57 f9 8b 2b 75 8c |U.....|.<.W..+u.|
 [2013-10-12 14:06:43] 00000000   79 ab 60 00 64 18 76 c7  9d 03 7f 09 0b c5 c0 c3 |y.`.d.v.........|
 [2013-10-12 14:06:43] 00000010   dc af c9 d3 6e 4a 5b d0  6f e0 d1 86 9c 88 f7 d4 |....nJ[.o.......|
 [2013-10-12 14:06:43] 00000000   79 ab 60 00 64 18 76 c7  9d 03 7f 09 0b c5 c0 c3 |y.`.d.v.........|
 [2013-10-12 14:06:43] 00000010   dc af c9 d3 6e 4a 5b d0  6f e0 d1 86 9c 88 f7 d4 |....nJ[.o.......|
 [2013-10-12 14:06:43] 00000020   3f b0 bf 03 cf 6c 16 6a  dd fd e6 b3 12 2c c9 7e |?....l.j.....,.~|
 [2013-10-12 14:06:43] 00000030   55 18 fc 03 d0 9c 7c b8  3c 98 57 f9 8b 2b 75 8c |U.....|.<.W..+u.|
 [2013-10-12 14:06:43] Xiangfu ----
 [2013-10-12 14:06:43] Xiangfu ----
 [2013-10-12 14:06:43] 00000000   79 ab 60 00 64 18 76 c7  9d 03 7f 09 0b c5 c0 c3 |y.`.d.v.........|
 [2013-10-12 14:06:43] 00000010   dc af c9 d3 6e 4a 5b d0  6f e0 d1 86 9c 88 f7 d4 |....nJ[.o.......|
 [2013-10-12 14:06:43] 00000020   91 96 b4 d1 8f 3b 49 54  6a c9 44 c1 40 c8 e0 e0 |.....;ITj.D.@...|
 [2013-10-12 14:06:43] 00000030   d4 77 71 56 1d 01 f7 55  ee 08 82 f1 c9 3c 7d 4b |.wqV...U.....<}K|
 [2013-10-12 14:06:43] 00000000   bb f6 72 87 b8 fd f2 1e  74 9f 54 90 29 34 b1 a6 |..r.....t.T.)4..|
 [2013-10-12 14:06:43] 00000010   04 02 b6 dc a8 3c 3e 08  00 87 dc 7a 50 bc 00 a8 |.....<>....zP...|
 [2013-10-12 14:06:43] 00000000   fc f5 49 0e 30 40 a9 3b  ad 71 48 76 39 70 8e 45 |..I.0@.;.qHv9p.E|
 [2013-10-12 14:06:43] 00000010   10 69 c0 2f 06 73 04 36  1c 93 b7 17 3a d6 eb 37 |.i./.s.6....:..7|
 [2013-10-12 14:06:43] Xiangfu ----
 [2013-10-12 14:06:43] Xiangfu gen_stratum_work ----
 [2013-10-12 14:06:43] 00000000   fc f5 49 0e 30 40 a9 3b  ad 71 48 76 39 70 8e 45 |..I.0@.;.qHv9p.E|
 [2013-10-12 14:06:43] 00000010   10 69 c0 2f 06 73 04 36  1c 93 b7 17 3a d6 eb 37 |.i./.s.6....:..7|
 [2013-10-12 14:06:43] 00000020   91 96 b4 d1 8f 3b 49 54  6a c9 44 c1 40 c8 e0 e0 |.....;ITj.D.@...|
 [2013-10-12 14:06:43] 00000030   d4 77 71 56 1d 01 f7 55  ee 08 82 f1 c9 3c 7d 4b |.wqV...U.....<}K|
 [2013-10-12 14:06:43] 00000000   fc f5 49 0e 30 40 a9 3b  ad 71 48 76 39 70 8e 45 |..I.0@.;.qHv9p.E|
 [2013-10-12 14:06:43] 00000010   10 69 c0 2f 06 73 04 36  1c 93 b7 17 3a d6 eb 37 |.i./.s.6....:..7|
 [2013-10-12 14:06:43] 00000000   fc f5 49 0e 30 40 a9 3b  ad 71 48 76 39 70 8e 45 |..I.0@.;.qHv9p.E|
 [2013-10-12 14:06:43] 00000010   10 69 c0 2f 06 73 04 36  1c 93 b7 17 3a d6 eb 37 |.i./.s.6....:..7|
 [2013-10-12 14:06:43] 00000020   91 96 b4 d1 8f 3b 49 54  6a c9 44 c1 40 c8 e0 e0 |.....;ITj.D.@...|
 [2013-10-12 14:06:43] 00000030   d4 77 71 56 1d 01 f7 55  ee 08 82 f1 c9 3c 7d 4b |.wqV...U.....<}K|
 [2013-10-12 14:06:43] Xiangfu ----
 [2013-10-12 14:06:43] Xiangfu ----
 [2013-10-12 14:06:43] 00000000   fc f5 49 0e 30 40 a9 3b  ad 71 48 76 39 70 8e 45 |..I.0@.;.qHv9p.E|
 [2013-10-12 14:06:43] 00000010   10 69 c0 2f 06 73 04 36  1c 93 b7 17 3a d6 eb 37 |.i./.s.6....:..7|
 [2013-10-12 14:06:43] 00000020   7f 5c 4d bd 64 d1 3e 72  37 54 96 7e 4a 31 a3 46 |.\M.d.>r7T.~J1.F|
 [2013-10-12 14:06:43] 00000030   45 64 ff 54 b1 79 a1 a2  51 a0 7e fe 21 1a 3d c1 |Ed.T.y..Q.~.!.=.|
 [2013-10-12 14:06:44] 00000000   ab 63 7e 12 df a7 d8 1a  1b a3 4c f8 57 28 e9 98 |.c~.......L.W(..|
 [2013-10-12 14:06:44] 00000010   d3 57 5d fe c3 46 f8 21  e9 b8 6f 1e e4 fd 5f f4 |.W]..F.!..o..._.|
 [2013-10-12 14:06:44] 00000000   5a 50 40 40 08 77 9f 2f  5c be 2d b0 4b 9b a0 cd |ZP@@.w./\.-.K...|
 [2013-10-12 14:06:44] 00000010   68 21 e7 2c 09 3f 82 96  fb 00 78 ad 47 01 07 98 |h!.,.?....x.G...|
 [2013-10-12 14:06:44] Xiangfu ----
 [2013-10-12 14:06:44] Xiangfu gen_stratum_work ----
 [2013-10-12 14:06:44] 00000000   5a 50 40 40 08 77 9f 2f  5c be 2d b0 4b 9b a0 cd |ZP@@.w./\.-.K...|
 [2013-10-12 14:06:44] 00000010   68 21 e7 2c 09 3f 82 96  fb 00 78 ad 47 01 07 98 |h!.,.?....x.G...|
 [2013-10-12 14:06:44] 00000020   7f 5c 4d bd 64 d1 3e 72  37 54 96 7e 4a 31 a3 46 |.\M.d.>r7T.~J1.F|
 [2013-10-12 14:06:44] 00000030   45 64 ff 54 b1 79 a1 a2  51 a0 7e fe 21 1a 3d c1 |Ed.T.y..Q.~.!.=.|
 [2013-10-12 14:06:44] 00000000   5a 50 40 40 08 77 9f 2f  5c be 2d b0 4b 9b a0 cd |ZP@@.w./\.-.K...|
 [2013-10-12 14:06:44] 00000010   68 21 e7 2c 09 3f 82 96  fb 00 78 ad 47 01 07 98 |h!.,.?....x.G...|
 [2013-10-12 14:06:44] 00000000   5a 50 40 40 08 77 9f 2f  5c be 2d b0 4b 9b a0 cd |ZP@@.w./\.-.K...|
 [2013-10-12 14:06:44] 00000010   68 21 e7 2c 09 3f 82 96  fb 00 78 ad 47 01 07 98 |h!.,.?....x.G...|
 [2013-10-12 14:06:44] 00000020   7f 5c 4d bd 64 d1 3e 72  37 54 96 7e 4a 31 a3 46 |.\M.d.>r7T.~J1.F|
 [2013-10-12 14:06:44] 00000030   45 64 ff 54 b1 79 a1 a2  51 a0 7e fe 21 1a 3d c1 |Ed.T.y..Q.~.!.=.|
 [2013-10-12 14:06:44] Xiangfu ----
 [2013-10-12 14:06:44] Xiangfu ----
 [2013-10-12 14:06:44] 00000000   5a 50 40 40 08 77 9f 2f  5c be 2d b0 4b 9b a0 cd |ZP@@.w./\.-.K...|
 [2013-10-12 14:06:44] 00000010   68 21 e7 2c 09 3f 82 96  fb 00 78 ad 47 01 07 98 |h!.,.?....x.G...|
 [2013-10-12 14:06:44] 00000020   6c 6c 86 c0 6c 3c 73 b6  9c 0c 03 89 3b dd 20 d5 |ll..l<s.....;. .|
 [2013-10-12 14:06:44] 00000030   8f c2 3a 2e b3 48 46 7b  a6 25 44 74 b9 60 a5 f7 |..:..HF{.%Dt.`..|
 [2013-10-12 14:06:44] 00000000   1a f1 4e e3 3e fa 6f 1d  ca 67 5f df 23 08 4c 2f |..N.>.o..g_.#.L/|
 [2013-10-12 14:06:44] 00000010   15 8d 29 02 68 c8 ac 9b  20 79 69 53 b0 1e 9c e8 |..).h... yiS....|
 [2013-10-12 14:06:44] 00000000   6c 0b 57 ca 8e f8 da 3c  c3 dc 0c a2 6d 7a 81 7b |l.W....<....mz.{|
 [2013-10-12 14:06:44] 00000010   cb 11 56 c7 13 cf 5c 64  eb ff b1 69 88 0b a0 c8 |..V...\d...i....|
 [2013-10-12 14:06:44] Xiangfu ----
 [2013-10-12 14:06:44] Xiangfu gen_stratum_work ----
 [2013-10-12 14:06:44] 00000000   6c 0b 57 ca 8e f8 da 3c  c3 dc 0c a2 6d 7a 81 7b |l.W....<....mz.{|
 [2013-10-12 14:06:44] 00000010   cb 11 56 c7 13 cf 5c 64  eb ff b1 69 88 0b a0 c8 |..V...\d...i....|
 [2013-10-12 14:06:44] 00000020   6c 6c 86 c0 6c 3c 73 b6  9c 0c 03 89 3b dd 20 d5 |ll..l<s.....;. .|
 [2013-10-12 14:06:44] 00000030   8f c2 3a 2e b3 48 46 7b  a6 25 44 74 b9 60 a5 f7 |..:..HF{.%Dt.`..|
 [2013-10-12 14:06:44] 00000000   6c 0b 57 ca 8e f8 da 3c  c3 dc 0c a2 6d 7a 81 7b |l.W....<....mz.{|
 [2013-10-12 14:06:44] 00000010   cb 11 56 c7 13 cf 5c 64  eb ff b1 69 88 0b a0 c8 |..V...\d...i....|
 [2013-10-12 14:06:44] 00000000   6c 0b 57 ca 8e f8 da 3c  c3 dc 0c a2 6d 7a 81 7b |l.W....<....mz.{|
 [2013-10-12 14:06:44] 00000010   cb 11 56 c7 13 cf 5c 64  eb ff b1 69 88 0b a0 c8 |..V...\d...i....|
 [2013-10-12 14:06:44] 00000020   6c 6c 86 c0 6c 3c 73 b6  9c 0c 03 89 3b dd 20 d5 |ll..l<s.....;. .|
 [2013-10-12 14:06:44] 00000030   8f c2 3a 2e b3 48 46 7b  a6 25 44 74 b9 60 a5 f7 |..:..HF{.%Dt.`..|
 [2013-10-12 14:06:44] Xiangfu ----
 [2013-10-12 14:06:44] Xiangfu ----
 [2013-10-12 14:06:44] 00000000   6c 0b 57 ca 8e f8 da 3c  c3 dc 0c a2 6d 7a 81 7b |l.W....<....mz.{|
 [2013-10-12 14:06:44] 00000010   cb 11 56 c7 13 cf 5c 64  eb ff b1 69 88 0b a0 c8 |..V...\d...i....|
 [2013-10-12 14:06:44] 00000020   79 11 eb 26 a0 65 0f 5f  c9 52 6d c1 29 6c 67 c4 |y..&.e._.Rm.)lg.|
 [2013-10-12 14:06:44] 00000030   27 fd b6 cc 45 11 6f a4  19 b9 c4 46 ad c3 44 37 |'...E.o....F..D7|
 [2013-10-12 14:06:44] 00000000   34 75 62 dd c2 3b 13 c8  a5 80 f5 86 a9 0f d3 a1 |4ub..;..........|
 [2013-10-12 14:06:44] 00000010   65 7c 46 4c 85 e0 69 ff  55 c4 2b d3 74 c0 36 32 |e|FL..i.U.+.t.62|
 [2013-10-12 14:06:44] 00000000   a2 18 8a 75 79 cb 77 0a  a8 c9 0a 2a 57 a6 66 d4 |...uy.w....*W.f.|
 [2013-10-12 14:06:44] 00000010   db 4f d5 df 65 d4 f5 7d  e4 e9 00 73 10 76 d1 ef |.O..e..}...s.v..|
 [2013-10-12 14:06:44] Xiangfu ----
 [2013-10-12 14:06:44] Xiangfu gen_stratum_work ----
 [2013-10-12 14:06:44] 00000000   a2 18 8a 75 79 cb 77 0a  a8 c9 0a 2a 57 a6 66 d4 |...uy.w....*W.f.|
 [2013-10-12 14:06:44] 00000010   db 4f d5 df 65 d4 f5 7d  e4 e9 00 73 10 76 d1 ef |.O..e..}...s.v..|
 [2013-10-12 14:06:44] 00000020   79 11 eb 26 a0 65 0f 5f  c9 52 6d c1 29 6c 67 c4 |y..&.e._.Rm.)lg.|
 [2013-10-12 14:06:44] 00000030   27 fd b6 cc 45 11 6f a4  19 b9 c4 46 ad c3 44 37 |'...E.o....F..D7|
 [2013-10-12 14:06:44] 00000000   a2 18 8a 75 79 cb 77 0a  a8 c9 0a 2a 57 a6 66 d4 |...uy.w....*W.f.|
 [2013-10-12 14:06:44] 00000010   db 4f d5 df 65 d4 f5 7d  e4 e9 00 73 10 76 d1 ef |.O..e..}...s.v..|
 [2013-10-12 14:06:44] 00000000   a2 18 8a 75 79 cb 77 0a  a8 c9 0a 2a 57 a6 66 d4 |...uy.w....*W.f.|
 [2013-10-12 14:06:44] 00000010   db 4f d5 df 65 d4 f5 7d  e4 e9 00 73 10 76 d1 ef |.O..e..}...s.v..|
 [2013-10-12 14:06:44] 00000020   79 11 eb 26 a0 65 0f 5f  c9 52 6d c1 29 6c 67 c4 |y..&.e._.Rm.)lg.|
 [2013-10-12 14:06:44] 00000030   27 fd b6 cc 45 11 6f a4  19 b9 c4 46 ad c3 44 37 |'...E.o....F..D7|
 [2013-10-12 14:06:44] Xiangfu ----
 [2013-10-12 14:06:44] Generated stratum merkle 758a18a2 0a77cb79 2a0ac9a8 d466a657 dfd54fdb 7df5d465 7300e9e4 efd17610
 [2013-10-12 14:06:44] Generated stratum header 0000000238f2986687b0b637b39399256b24d3b15b1c72e8117d770f0000000900000000758a18a20a77cb792a0ac9a8d466a657dfd54fdb7df5d4657300e9e4efd176105258e6f11916b0ca00000000000000800000000000000000000000000000000000000000000000000000000000000000000000000000000080020000
 [2013-10-12 14:06:44] Work job_id 6f47 nonce2 0 ntime 5258e6f1
 [2013-10-12 14:06:44] Generated target 0000000000000000000000000000000000000000000000000000ffff00000000
 [2013-10-12 14:06:44] Generated stratum work

*/
