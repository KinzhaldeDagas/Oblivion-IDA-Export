0x631B90: cmp     [esp+arg_4], 0
0x631B95: mov     eax, [esp+arg_0]
0x631B99: jz      short loc_631BD3
0x631B9B: test    al, 30h
0x631B9D: jz      short loc_631BC9
0x631B9F: mov     edx, ds:0B333C4h
0x631BA5: cmp     ecx, [edx+58h]
0x631BA8: jnz     short loc_631BB2
0x631BAA: fld     dword ptr ds:0B36C00h
0x631BB0: jmp     short loc_631BB8
0x631BB2: fld     dword ptr ds:0B36C08h
0x631BB8: mov     dl, al
0x631BBA: fstp    dword ptr [ecx+1E0h]
0x631BC0: and     dl, 30h
0x631BC3: mov     [ecx+1E4h], dl
0x631BC9: or      [ecx+1FCh], ax
0x631BD0: retn    8
0x631BD3: not     eax
0x631BD5: and     [ecx+1FCh], ax
0x631BDC: retn    8
