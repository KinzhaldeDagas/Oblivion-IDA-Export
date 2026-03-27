0x677280: push    ebx
0x677281: push    ebp
0x677282: push    esi
0x677283: push    edi
0x677284: lea     ebx, [ecx+28h]
0x677287: mov     ebp, 6
0x67728C: lea     esp, [esp+0]
0x677290: mov     esi, [ebx]
0x677292: test    esi, esi
0x677294: jz      short loc_6772D0
0x677296: mov     edi, [esi]
0x677298: test    edi, edi
0x67729A: jz      short loc_6772D0
0x67729C: mov     ecx, edi
0x67729E: call    sub_605E80
0x6772A3: push    edi
0x6772A4: call    FormHeapFree
0x6772A9: mov     eax, [esi+4]
0x6772AC: add     esp, 4
0x6772AF: test    eax, eax
0x6772B1: jz      short loc_6772C8
0x6772B3: mov     ecx, [eax+4]
0x6772B6: mov     [esi+4], ecx
0x6772B9: mov     edx, [eax]
0x6772BB: push    eax
0x6772BC: mov     [esi], edx
0x6772BE: call    FormHeapFree
0x6772C3: add     esp, 4
0x6772C6: jmp     short loc_677296
0x6772C8: mov     dword ptr [esi], 0
0x6772CE: jmp     short loc_677296
0x6772D0: add     ebx, 4
0x6772D3: sub     ebp, 1
0x6772D6: jnz     short loc_677290
0x6772D8: pop     edi
0x6772D9: pop     esi
0x6772DA: pop     ebp
0x6772DB: pop     ebx
0x6772DC: retn
