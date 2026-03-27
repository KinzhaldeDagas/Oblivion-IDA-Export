0x98943D: mov     dl, [esi]
0x98943F: add     esi, 1
0x989442: mov     [edi], dl
0x989444: add     edi, 1
0x989447: test    dl, dl
0x989449: jz      short _strncat___finish1
0x98944B: sub     ecx, 1
0x98944E: jnz     short _strncat___tail_loop_0
