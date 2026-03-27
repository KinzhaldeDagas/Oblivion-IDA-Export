0x94DFA0: push    ebp
0x94DFA1: push    esi
0x94DFA2: push    edi
0x94DFA3: mov     esi, ecx
0x94DFA5: mov     ecx, ds:0BA7D98h
0x94DFAB: mov     eax, [ecx]
0x94DFAD: push    24h ; '$'
0x94DFAF: push    18h
0x94DFB1: call    dword ptr [eax+10h]
0x94DFB4: xor     ebp, ebp
0x94DFB6: cmp     eax, ebp
0x94DFB8: jz      short loc_94DFD2
0x94DFBA: mov     ecx, 80000000h
0x94DFBF: mov     [eax], ebp
0x94DFC1: mov     [eax+4], ebp
0x94DFC4: mov     [eax+8], ecx
0x94DFC7: mov     [eax+0Ch], ebp
0x94DFCA: mov     [eax+10h], ebp
0x94DFCD: mov     [eax+14h], ecx
0x94DFD0: jmp     short loc_94DFD4
0x94DFD2: xor     eax, eax
0x94DFD4: push    eax
0x94DFD5: mov     ecx, esi
0x94DFD7: mov     [esi+50h], eax
0x94DFDA: call    sub_94DB40
0x94DFDF: mov     edi, [esi+50h]
0x94DFE2: mov     ecx, [edi+8]
0x94DFE5: mov     eax, [edi+4]
0x94DFE8: and     ecx, 3FFFFFFFh
0x94DFEE: cmp     eax, ecx
0x94DFF0: jnz     short loc_94DFFD
0x94DFF2: push    10h
0x94DFF4: push    edi
0x94DFF5: call    sub_8A6EE0
0x94DFFA: add     esp, 8
0x94DFFD: mov     ecx, [edi+4]
0x94E000: mov     edx, [edi]
0x94E002: mov     eax, ecx
0x94E004: shl     eax, 4
0x94E007: add     eax, edx
0x94E009: inc     ecx
0x94E00A: mov     [edi+4], ecx
0x94E00D: movaps  xmm0, xmmword ptr [esi+60h]
0x94E011: movaps  xmmword ptr [eax], xmm0
0x94E014: mov     edi, [esi+50h]
0x94E017: mov     eax, [edi+14h]
0x94E01A: add     edi, 0Ch
0x94E01D: push    ebx
0x94E01E: mov     ebx, [esi+80h]
0x94E024: and     eax, 3FFFFFFFh
0x94E029: cmp     eax, ebx
0x94E02B: jge     short loc_94E041
0x94E02D: add     eax, eax
0x94E02F: cmp     ebx, eax
0x94E031: jl      short loc_94E035
0x94E033: mov     eax, ebx
0x94E035: push    0Ch
0x94E037: push    eax
0x94E038: push    edi
0x94E039: call    sub_8A6E40
0x94E03E: add     esp, 0Ch
0x94E041: mov     [edi+4], ebx
0x94E044: mov     edx, [esi+80h]
0x94E04A: xor     ecx, ecx
0x94E04C: dec     edx
0x94E04D: test    edx, edx
0x94E04F: pop     ebx
0x94E050: jle     short loc_94E07D
0x94E052: xor     edi, edi
0x94E054: mov     eax, [esi+50h]
0x94E057: mov     eax, [eax+0Ch]
0x94E05A: mov     edx, [esi+80h]
0x94E060: add     eax, edi
0x94E062: mov     [eax], edx
0x94E064: lea     edx, [ecx+1]
0x94E067: mov     [eax+8], ecx
0x94E06A: mov     [eax+4], edx
0x94E06D: mov     eax, [esi+80h]
0x94E073: add     edi, 0Ch
0x94E076: mov     ecx, edx
0x94E078: dec     eax
0x94E079: cmp     ecx, eax
0x94E07B: jl      short loc_94E054
0x94E07D: mov     edx, [esi+50h]
0x94E080: mov     edx, [edx+0Ch]
0x94E083: lea     eax, [ecx+ecx*2]
0x94E086: lea     eax, [edx+eax*4]
0x94E089: mov     edx, [esi+80h]
0x94E08F: pop     edi
0x94E090: pop     esi
0x94E091: mov     [eax+4], ebp
0x94E094: mov     [eax], edx
0x94E096: mov     [eax+8], ecx
0x94E099: pop     ebp
0x94E09A: retn
