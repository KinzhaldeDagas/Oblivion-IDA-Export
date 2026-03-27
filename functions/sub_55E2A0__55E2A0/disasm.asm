0x55E2A0: push    ebx
0x55E2A1: mov     ebx, [esp+4+arg_0]
0x55E2A5: push    esi
0x55E2A6: push    edi
0x55E2A7: mov     edi, ecx
0x55E2A9: mov     esi, [edi]
0x55E2AB: cmp     esi, [ebx]
0x55E2AD: jz      short loc_55E2E1
0x55E2AF: test    esi, esi
0x55E2B1: jz      short loc_55E2CF
0x55E2B3: lea     eax, [esi+4]
0x55E2B6: push    eax; lpAddend
0x55E2B7: call    dword ptr ds:0A2807Ch
0x55E2BD: test    eax, eax
0x55E2BF: jnz     short loc_55E2CF
0x55E2C1: test    esi, esi
0x55E2C3: jz      short loc_55E2CF
0x55E2C5: mov     edx, [esi]
0x55E2C7: mov     eax, [edx]
0x55E2C9: push    1
0x55E2CB: mov     ecx, esi
0x55E2CD: call    eax
0x55E2CF: mov     eax, [ebx]
0x55E2D1: test    eax, eax
0x55E2D3: mov     [edi], eax
0x55E2D5: jz      short loc_55E2E1
0x55E2D7: add     eax, 4
0x55E2DA: push    eax; lpAddend
0x55E2DB: call    dword ptr ds:0A28078h
0x55E2E1: mov     eax, edi
0x55E2E3: pop     edi
0x55E2E4: pop     esi
0x55E2E5: pop     ebx
0x55E2E6: retn    4
