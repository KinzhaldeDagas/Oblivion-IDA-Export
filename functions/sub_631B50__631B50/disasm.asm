0x631B50: mov     ax, [esp+arg_0]
0x631B55: test    al, 30h
0x631B57: jz      short loc_631B83
0x631B59: mov     edx, ds:0B333C4h
0x631B5F: cmp     ecx, [edx+58h]
0x631B62: jnz     short loc_631B6C
0x631B64: fld     dword ptr ds:0B36C00h
0x631B6A: jmp     short loc_631B72
0x631B6C: fld     dword ptr ds:0B36C08h
0x631B72: mov     dl, al
0x631B74: fstp    dword ptr [ecx+1E0h]
0x631B7A: and     dl, 30h
0x631B7D: mov     [ecx+1E4h], dl
0x631B83: mov     [ecx+1FCh], ax
0x631B8A: retn    4
