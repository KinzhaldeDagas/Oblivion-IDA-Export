0x41DF70: mov     eax, [esp+arg_0]
0x41DF74: test    eax, eax
0x41DF76: jnz     short loc_41DF7D
0x41DF78: mov     al, 1
0x41DF7A: retn    4
0x41DF7D: mov     cl, [ecx+4]
0x41DF80: cmp     cl, [eax+4]
0x41DF83: setnz   al
0x41DF86: retn    4
