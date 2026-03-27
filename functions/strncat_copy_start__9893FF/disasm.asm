0x9893FF: mov     esi, [esp+arg_10]
0x989403: test    esi, 3
0x989409: jnz     short _strncat___back_misaligned
0x98940B: mov     ebx, ecx
0x98940D: shr     ecx, 2
0x989410: jnz     short _strncat___main_loop_entrance_0
0x989412: jmp     short _strncat___tail_loop_start_0
