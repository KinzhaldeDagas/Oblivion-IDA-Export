0x9826D3: mov     al, [esi]
0x9826D5: add     esi, 1
0x9826D8: mov     [edi], al
0x9826DA: add     edi, 1
0x9826DD: test    al, al
0x9826DF: jz      short _strncpy___fill_tail_zero_bytes
0x9826E1: sub     ebx, 1
0x9826E4: jnz     short _strncpy___copy_tail_loop
