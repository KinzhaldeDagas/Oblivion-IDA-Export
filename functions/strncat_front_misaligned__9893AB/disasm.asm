0x9893AB: mov     al, [edi]
0x9893AD: add     edi, 1
0x9893B0: test    al, al
0x9893B2: jz      short _strncat___start_byte_3
0x9893B4: test    edi, 3
0x9893BA: jnz     short _strncat___front_misaligned
