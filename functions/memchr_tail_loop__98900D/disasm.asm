0x98900D: mov     cl, [edx]
0x98900F: add     edx, 1
0x989012: xor     cl, bl
0x989014: jz      short _memchr___found
0x989016: sub     eax, 1
0x989019: jnz     short _memchr___tail_loop
