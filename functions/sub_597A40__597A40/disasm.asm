0x597A40: mov     eax, [esp+arg_0]
0x597A44: cmp     eax, 80h ; '€'
0x597A49: jnb     short locret_597A54
0x597A4B: mov     dl, [ecx]
0x597A4D: and     dl, 80h
0x597A50: or      dl, al
0x597A52: mov     [ecx], dl
0x597A54: retn    4
