0x982ED8: mov     cl, [edx]
0x982EDA: add     edx, 1
0x982EDD: cmp     cl, bl
0x982EDF: jz      short _strchr___found_bx
0x982EE1: test    cl, cl
0x982EE3: jz      short _strchr___retnull_bx
0x982EE5: test    edx, 3
0x982EEB: jnz     short _strchr___str_misaligned
