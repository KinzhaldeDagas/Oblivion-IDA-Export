0x723350: push    ebx
0x723351: push    ebp
0x723352: mov     ebp, [esp+8+arg_0]
0x723356: push    esi
0x723357: push    edi
0x723358: push    ebp
0x723359: mov     edi, ecx
0x72335B: call    sub_7081B0
0x723360: mov     ecx, ebp
0x723362: call    sub_7124A0
0x723367: mov     esi, [edi+0B4h]
0x72336D: mov     ebx, eax
0x72336F: cmp     esi, ebx
0x723371: jz      short loc_7233A7
0x723373: test    esi, esi
0x723375: jz      short loc_723393
0x723377: lea     eax, [esi+4]
0x72337A: push    eax; lpAddend
0x72337B: call    dword ptr ds:0A2807Ch
0x723381: test    eax, eax
0x723383: jnz     short loc_723393
0x723385: test    esi, esi
0x723387: jz      short loc_723393
0x723389: mov     edx, [esi]
0x72338B: mov     eax, [edx]
0x72338D: push    1
0x72338F: mov     ecx, esi
0x723391: call    eax
0x723393: test    ebx, ebx
0x723395: mov     [edi+0B4h], ebx
0x72339B: jz      short loc_7233A7
0x72339D: add     ebx, 4
0x7233A0: push    ebx; lpAddend
0x7233A1: call    dword ptr ds:0A28078h
0x7233A7: mov     ecx, ebp
0x7233A9: call    sub_7124A0
0x7233AE: mov     esi, [edi+0B8h]
0x7233B4: mov     ebx, eax
0x7233B6: cmp     esi, ebx
0x7233B8: jz      short loc_7233EE
0x7233BA: test    esi, esi
0x7233BC: jz      short loc_7233DA
0x7233BE: lea     ecx, [esi+4]
0x7233C1: push    ecx; lpAddend
0x7233C2: call    dword ptr ds:0A2807Ch
0x7233C8: test    eax, eax
0x7233CA: jnz     short loc_7233DA
0x7233CC: test    esi, esi
0x7233CE: jz      short loc_7233DA
0x7233D0: mov     edx, [esi]
0x7233D2: mov     eax, [edx]
0x7233D4: push    1
0x7233D6: mov     ecx, esi
0x7233D8: call    eax
0x7233DA: test    ebx, ebx
0x7233DC: mov     [edi+0B8h], ebx
0x7233E2: jz      short loc_7233EE
0x7233E4: add     ebx, 4
0x7233E7: push    ebx; lpAddend
0x7233E8: call    dword ptr ds:0A28078h
0x7233EE: pop     edi
0x7233EF: pop     esi
0x7233F0: pop     ebp
0x7233F1: pop     ebx
0x7233F2: retn    4
