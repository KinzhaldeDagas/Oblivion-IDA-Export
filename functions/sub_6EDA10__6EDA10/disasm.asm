0x6EDA10: mov     eax, [esp+arg_4]
0x6EDA14: cmp     eax, 1
0x6EDA17: jnz     short loc_6EDA41
0x6EDA19: cmp     dword ptr [ecx+18h], 10h
0x6EDA1D: jb      short loc_6EDA30
0x6EDA1F: mov     ecx, [ecx+4]
0x6EDA22: mov     al, [esp+arg_8]
0x6EDA26: mov     edx, [esp+arg_0]
0x6EDA2A: mov     [ecx+edx], al
0x6EDA2D: retn    0Ch
0x6EDA30: mov     al, [esp+arg_8]
0x6EDA34: mov     edx, [esp+arg_0]
0x6EDA38: add     ecx, 4
0x6EDA3B: mov     [ecx+edx], al
0x6EDA3E: retn    0Ch
0x6EDA41: cmp     dword ptr [ecx+18h], 10h
0x6EDA45: jb      short loc_6EDA4C
0x6EDA47: mov     ecx, [ecx+4]
0x6EDA4A: jmp     short loc_6EDA4F
0x6EDA4C: add     ecx, 4
0x6EDA4F: mov     edx, [esp+arg_0]
0x6EDA53: push    eax
0x6EDA54: movsx   eax, [esp+4+arg_8]
0x6EDA59: push    eax
0x6EDA5A: add     ecx, edx
0x6EDA5C: push    ecx
0x6EDA5D: call    __memset
0x6EDA62: add     esp, 0Ch
0x6EDA65: retn    0Ch
