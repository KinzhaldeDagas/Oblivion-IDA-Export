0x727CC0: mov     eax, [esp+arg_0]
0x727CC4: test    eax, eax
0x727CC6: jnz     short loc_727CD0
0x727CC8: cmp     [ecx+0Ch], al
0x727CCB: jz      short loc_727CD0
0x727CCD: mov     eax, [ecx+8]
0x727CD0: mov     ecx, ds:0B3F928h
0x727CD6: mov     edx, [ecx]
0x727CD8: mov     [esp+arg_0], eax
0x727CDC: mov     eax, [edx+0FCh]
0x727CE2: jmp     eax
