0x988FDB: mov     cl, [edx]
0x988FDD: add     edx, 1
0x988FE0: xor     cl, bl
0x988FE2: jz      short _memchr___found
0x988FE4: sub     eax, 1
0x988FE7: jz      short _memchr___retnull_0
0x988FE9: test    edx, 3
0x988FEF: jnz     short _memchr___str_misaligned_0
