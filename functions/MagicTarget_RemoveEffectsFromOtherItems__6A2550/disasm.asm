0x6A2550: push    ebx
0x6A2551: mov     ebx, ecx
0x6A2553: mov     eax, [ebx]
0x6A2555: mov     edx, [eax+8]
0x6A2558: push    ebp
0x6A2559: push    edi
0x6A255A: call    edx
0x6A255C: mov     ebp, eax
0x6A255E: test    ebp, ebp
0x6A2560: mov     edi, ebp
0x6A2562: jz      short loc_6A25D0
0x6A2564: push    esi
0x6A2565: mov     eax, [edi+4]
0x6A2568: test    eax, eax
0x6A256A: jnz     short loc_6A2570
0x6A256C: cmp     [edi], eax
0x6A256E: jz      short loc_6A25CF
0x6A2570: mov     esi, [edi]
0x6A2572: test    esi, esi
0x6A2574: jz      short loc_6A25C7
0x6A2576: cmp     byte ptr [esi+11h], 0
0x6A257A: jnz     short loc_6A25C7
0x6A257C: mov     ecx, [esi+0Ch]
0x6A257F: mov     edx, [esp+10h+arg_0]
0x6A2583: cmp     [ecx], edx
0x6A2585: jnz     short loc_6A25C7
0x6A2587: mov     ecx, [esp+10h+arg_4]
0x6A258B: cmp     [esi+8], ecx
0x6A258E: jz      short loc_6A25C7
0x6A2590: push    1
0x6A2592: mov     ecx, esi
0x6A2594: call    ActiveEffect_Base_Remove
0x6A2599: mov     edx, [ebx]
0x6A259B: mov     eax, [edx+8]
0x6A259E: push    esi
0x6A259F: mov     ecx, ebx
0x6A25A1: call    eax
0x6A25A3: mov     ecx, eax
0x6A25A5: call    BSSimpleList_Remove
0x6A25AA: mov     edx, [ebx]
0x6A25AC: mov     eax, [edx+14h]
0x6A25AF: push    esi
0x6A25B0: mov     ecx, ebx
0x6A25B2: call    eax
0x6A25B4: mov     edx, [esi]
0x6A25B6: mov     eax, [edx]
0x6A25B8: push    1
0x6A25BA: mov     ecx, esi
0x6A25BC: call    eax
0x6A25BE: cmp     edi, ebp
0x6A25C0: jz      short loc_6A25CB
0x6A25C2: mov     edi, [ebp+4]
0x6A25C5: jmp     short loc_6A25CB
0x6A25C7: mov     ebp, edi
0x6A25C9: mov     edi, eax
0x6A25CB: test    edi, edi
0x6A25CD: jnz     short loc_6A2565
0x6A25CF: pop     esi
0x6A25D0: pop     edi
0x6A25D1: pop     ebp
0x6A25D2: pop     ebx
0x6A25D3: retn    8
