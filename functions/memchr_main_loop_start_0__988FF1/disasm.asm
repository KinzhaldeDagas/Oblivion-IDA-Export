0x988FF1: sub     eax, 4
0x988FF4: jb      short _memchr___tail_less_then_4
0x988FF6: push    edi
0x988FF7: mov     edi, ebx
0x988FF9: shl     ebx, 8
0x988FFC: add     ebx, edi
0x988FFE: mov     edi, ebx
0x989000: shl     ebx, 10h
0x989003: add     ebx, edi
0x989005: jmp     short _memchr___main_loop_entry
