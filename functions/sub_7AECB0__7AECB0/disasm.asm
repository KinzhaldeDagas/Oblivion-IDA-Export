0x7AECB0: push    ebx
0x7AECB1: push    esi
0x7AECB2: mov     ebx, ecx
0x7AECB4: mov     esi, [ebx+58h]
0x7AECB7: push    edi
0x7AECB8: mov     edi, [esp+0Ch+a2]
0x7AECBC: cmp     esi, edi
0x7AECBE: jz      short loc_7AECF1
0x7AECC0: test    esi, esi
0x7AECC2: jz      short loc_7AECE0
0x7AECC4: lea     eax, [esi+4]
0x7AECC7: push    eax; lpAddend
0x7AECC8: call    dword ptr ds:0A2807Ch
0x7AECCE: test    eax, eax
0x7AECD0: jnz     short loc_7AECE0
0x7AECD2: test    esi, esi
0x7AECD4: jz      short loc_7AECE0
0x7AECD6: mov     edx, [esi]
0x7AECD8: mov     eax, [edx]
0x7AECDA: push    1
0x7AECDC: mov     ecx, esi
0x7AECDE: call    eax
0x7AECE0: test    edi, edi
0x7AECE2: mov     [ebx+58h], edi
0x7AECE5: jz      short loc_7AECF1
0x7AECE7: add     edi, 4
0x7AECEA: push    edi; lpAddend
0x7AECEB: call    dword ptr ds:0A28078h
0x7AECF1: pop     edi
0x7AECF2: pop     esi
0x7AECF3: pop     ebx
0x7AECF4: retn    4
