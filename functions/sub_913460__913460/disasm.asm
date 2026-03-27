0x913460: push    ebx
0x913461: push    ebp
0x913462: push    esi
0x913463: push    edi
0x913464: mov     edi, ecx
0x913466: mov     esi, [edi+4]
0x913469: mov     eax, [esi+24h]
0x91346C: mov     ecx, [esi+20h]
0x91346F: add     esi, 1Ch
0x913472: and     eax, 3FFFFFFFh
0x913477: cmp     ecx, eax
0x913479: jnz     short loc_913486
0x91347B: push    4
0x91347D: push    esi
0x91347E: call    sub_8A6EE0
0x913483: add     esp, 8
0x913486: mov     ecx, [esi+4]
0x913489: mov     edx, [esi]
0x91348B: mov     dword ptr [edx+ecx*4], 9
0x913492: inc     dword ptr [esi+4]
0x913495: mov     eax, [edi+4]
0x913498: mov     ebp, [eax+14h]
0x91349B: mov     ecx, [eax+14h]
0x91349E: lea     esi, [eax+10h]
0x9134A1: mov     eax, [esi+8]
0x9134A4: and     eax, 3FFFFFFFh
0x9134A9: cmp     ecx, eax
0x9134AB: jnz     short loc_9134B8
0x9134AD: push    10h
0x9134AF: push    esi
0x9134B0: call    sub_8A6EE0
0x9134B5: add     esp, 8
0x9134B8: mov     ecx, [esi+4]
0x9134BB: mov     edx, [esi]
0x9134BD: mov     ebx, [esp+10h+arg_0]
0x9134C1: mov     eax, ecx
0x9134C3: shl     eax, 4
0x9134C6: add     eax, edx
0x9134C8: inc     ecx
0x9134C9: mov     [esi+4], ecx
0x9134CC: movaps  xmm0, xmmword ptr [ebx]
0x9134CF: movaps  xmmword ptr [eax], xmm0
0x9134D2: mov     esi, [edi+4]
0x9134D5: mov     ecx, [esi+18h]
0x9134D8: mov     eax, [esi+14h]
0x9134DB: add     esi, 10h
0x9134DE: and     ecx, 3FFFFFFFh
0x9134E4: cmp     eax, ecx
0x9134E6: jnz     short loc_9134F3
0x9134E8: push    10h
0x9134EA: push    esi
0x9134EB: call    sub_8A6EE0
0x9134F0: add     esp, 8
0x9134F3: mov     ecx, [esi+4]
0x9134F6: mov     edx, [esi]
0x9134F8: mov     eax, ecx
0x9134FA: shl     eax, 4
0x9134FD: add     eax, edx
0x9134FF: inc     ecx
0x913500: mov     [esi+4], ecx
0x913503: movaps  xmm0, xmmword ptr [ebx+10h]
0x913507: movaps  xmmword ptr [eax], xmm0
0x91350A: mov     esi, [edi+4]
0x91350D: mov     edx, [esi+18h]
0x913510: mov     eax, [esi+14h]
0x913513: add     esi, 10h
0x913516: and     edx, 3FFFFFFFh
0x91351C: cmp     eax, edx
0x91351E: jnz     short loc_91352B
0x913520: push    10h
0x913522: push    esi
0x913523: call    sub_8A6EE0
0x913528: add     esp, 8
0x91352B: mov     ecx, [esi+4]
0x91352E: mov     edx, [esi]
0x913530: mov     eax, ecx
0x913532: shl     eax, 4
0x913535: add     eax, edx
0x913537: inc     ecx
0x913538: mov     [esi+4], ecx
0x91353B: movaps  xmm0, xmmword ptr [ebx+20h]
0x91353F: movaps  xmmword ptr [eax], xmm0
0x913542: mov     byte ptr [edi+17h], 1
0x913546: pop     edi
0x913547: pop     esi
0x913548: mov     eax, ebp
0x91354A: pop     ebp
0x91354B: pop     ebx
0x91354C: retn    4
