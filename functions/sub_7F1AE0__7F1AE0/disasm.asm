0x7F1AE0: push    ebx
0x7F1AE1: push    esi
0x7F1AE2: mov     ebx, ecx
0x7F1AE4: mov     esi, [ebx+9Ch]
0x7F1AEA: push    edi
0x7F1AEB: mov     edi, [esp+0Ch+arg_0]
0x7F1AEF: cmp     esi, edi
0x7F1AF1: jz      short loc_7F1B27
0x7F1AF3: test    esi, esi
0x7F1AF5: jz      short loc_7F1B13
0x7F1AF7: lea     eax, [esi+4]
0x7F1AFA: push    eax; lpAddend
0x7F1AFB: call    dword ptr ds:0A2807Ch
0x7F1B01: test    eax, eax
0x7F1B03: jnz     short loc_7F1B13
0x7F1B05: test    esi, esi
0x7F1B07: jz      short loc_7F1B13
0x7F1B09: mov     edx, [esi]
0x7F1B0B: mov     eax, [edx]
0x7F1B0D: push    1
0x7F1B0F: mov     ecx, esi
0x7F1B11: call    eax
0x7F1B13: test    edi, edi
0x7F1B15: mov     [ebx+9Ch], edi
0x7F1B1B: jz      short loc_7F1B27
0x7F1B1D: add     edi, 4
0x7F1B20: push    edi; lpAddend
0x7F1B21: call    dword ptr ds:0A28078h
0x7F1B27: pop     edi
0x7F1B28: pop     esi
0x7F1B29: pop     ebx
0x7F1B2A: retn    4
