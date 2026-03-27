0x7309A0: mov     eax, [esp+arg_0]
0x7309A4: test    eax, eax
0x7309A6: jnz     short loc_7309AD
0x7309A8: xor     al, al
0x7309AA: retn    4
0x7309AD: mov     ecx, [ecx+0Ch]
0x7309B0: cmp     ecx, [eax+0Ch]
0x7309B3: setz    al
0x7309B6: retn    4
