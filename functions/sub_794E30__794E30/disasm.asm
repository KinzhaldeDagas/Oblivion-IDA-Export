0x794E30: mov     eax, [esp+first]; OBLIVION AUTHORITY (2026-08-30): Assigns one unsigned-short value across [first,last) and returns the advanced destination.
0x794E34: mov     ecx, [esp+last]
0x794E38: cmp     eax, ecx
0x794E3A: jz      short locret_794E4F
0x794E3C: mov     edx, [esp+value]
0x794E40: push    esi
0x794E41: mov     si, [edx]
0x794E44: mov     [eax], si
0x794E47: add     eax, 2
0x794E4A: cmp     eax, ecx
0x794E4C: jnz     short loc_794E41
0x794E4E: pop     esi
0x794E4F: retn
