0x608AE0: push    ebx
0x608AE1: push    esi
0x608AE2: mov     ebx, ecx
0x608AE4: mov     esi, [ebx+8Ch]
0x608AEA: push    edi
0x608AEB: mov     edi, [esp+0Ch+arg_0]
0x608AEF: cmp     esi, edi
0x608AF1: jz      short loc_608B27
0x608AF3: test    esi, esi
0x608AF5: jz      short loc_608B13
0x608AF7: lea     eax, [esi+4]
0x608AFA: push    eax; lpAddend
0x608AFB: call    dword ptr ds:0A2807Ch
0x608B01: test    eax, eax
0x608B03: jnz     short loc_608B13
0x608B05: test    esi, esi
0x608B07: jz      short loc_608B13
0x608B09: mov     edx, [esi]
0x608B0B: mov     eax, [edx]
0x608B0D: push    1
0x608B0F: mov     ecx, esi
0x608B11: call    eax
0x608B13: test    edi, edi
0x608B15: mov     [ebx+8Ch], edi
0x608B1B: jz      short loc_608B27
0x608B1D: add     edi, 4
0x608B20: push    edi; lpAddend
0x608B21: call    dword ptr ds:0A28078h
0x608B27: pop     edi
0x608B28: pop     esi
0x608B29: pop     ebx
0x608B2A: retn    4
