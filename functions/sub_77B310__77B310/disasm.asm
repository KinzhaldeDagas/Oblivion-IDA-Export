0x77B310: mov     al, [esp+arg_0]; DX10OBSE runtime log pass 2026-05-24: internal render-state byte flag setter is hot and often writes the existing value. Plugin now keeps the call counter but only marks DX10 constants dirty and logs when the byte value actually changes.
0x77B314: mov     [ecx+0FF4h], al
0x77B31A: retn    4
