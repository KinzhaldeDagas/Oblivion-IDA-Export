0x6EC7C0: push    ebx
0x6EC7C1: push    esi
0x6EC7C2: mov     ebx, ecx
0x6EC7C4: mov     esi, [ebx+40h]
0x6EC7C7: push    edi
0x6EC7C8: mov     edi, [esp+0Ch+arg_0]
0x6EC7CC: cmp     esi, edi
0x6EC7CE: jz      short loc_6EC801
0x6EC7D0: test    esi, esi
0x6EC7D2: jz      short loc_6EC7F0
0x6EC7D4: lea     eax, [esi+4]
0x6EC7D7: push    eax; lpAddend
0x6EC7D8: call    dword ptr ds:0A2807Ch
0x6EC7DE: test    eax, eax
0x6EC7E0: jnz     short loc_6EC7F0
0x6EC7E2: test    esi, esi
0x6EC7E4: jz      short loc_6EC7F0
0x6EC7E6: mov     edx, [esi]
0x6EC7E8: mov     eax, [edx]
0x6EC7EA: push    1
0x6EC7EC: mov     ecx, esi
0x6EC7EE: call    eax
0x6EC7F0: test    edi, edi
0x6EC7F2: mov     [ebx+40h], edi
0x6EC7F5: jz      short loc_6EC801
0x6EC7F7: add     edi, 4
0x6EC7FA: push    edi; lpAddend
0x6EC7FB: call    dword ptr ds:0A28078h
0x6EC801: pop     edi
0x6EC802: pop     esi
0x6EC803: pop     ebx
0x6EC804: retn    4
