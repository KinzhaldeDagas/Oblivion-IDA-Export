0x6A24B0: push    ecx
0x6A24B1: push    ebx
0x6A24B2: mov     ebx, ecx
0x6A24B4: mov     eax, [ebx]
0x6A24B6: mov     edx, [eax+8]
0x6A24B9: push    ebp
0x6A24BA: push    edi
0x6A24BB: call    edx
0x6A24BD: mov     ebp, eax
0x6A24BF: test    ebp, ebp
0x6A24C1: mov     edi, ebp
0x6A24C3: jz      short loc_6A2541
0x6A24C5: push    esi
0x6A24C6: mov     ecx, [edi+4]
0x6A24C9: test    ecx, ecx
0x6A24CB: jnz     short loc_6A24D1
0x6A24CD: cmp     [edi], ecx
0x6A24CF: jz      short loc_6A2540
0x6A24D1: mov     eax, [esp+14h+arg_4]
0x6A24D5: test    eax, eax
0x6A24D7: mov     esi, [edi]
0x6A24D9: jz      short loc_6A24E3
0x6A24DB: cmp     eax, [esi+24h]
0x6A24DE: setz    al
0x6A24E1: jmp     short loc_6A24E5
0x6A24E3: mov     al, 1
0x6A24E5: test    esi, esi
0x6A24E7: jz      short loc_6A2538
0x6A24E9: cmp     byte ptr [esi+11h], 0
0x6A24ED: jnz     short loc_6A2538
0x6A24EF: mov     ecx, [esi+0Ch]
0x6A24F2: mov     edx, [esp+14h+arg_0]
0x6A24F6: cmp     [ecx], edx
0x6A24F8: jnz     short loc_6A2535
0x6A24FA: test    al, al
0x6A24FC: jz      short loc_6A2535
0x6A24FE: push    1
0x6A2500: mov     ecx, esi
0x6A2502: call    ActiveEffect_Base_Remove
0x6A2507: mov     eax, [ebx]
0x6A2509: mov     edx, [eax+8]
0x6A250C: push    esi
0x6A250D: mov     ecx, ebx
0x6A250F: call    edx
0x6A2511: mov     ecx, eax
0x6A2513: call    BSSimpleList_Remove
0x6A2518: mov     eax, [ebx]
0x6A251A: mov     edx, [eax+14h]
0x6A251D: push    esi
0x6A251E: mov     ecx, ebx
0x6A2520: call    edx
0x6A2522: mov     eax, [esi]
0x6A2524: mov     edx, [eax]
0x6A2526: push    1
0x6A2528: mov     ecx, esi
0x6A252A: call    edx
0x6A252C: cmp     edi, ebp
0x6A252E: jz      short loc_6A253C
0x6A2530: mov     edi, [ebp+4]
0x6A2533: jmp     short loc_6A253C
0x6A2535: mov     ecx, [edi+4]
0x6A2538: mov     ebp, edi
0x6A253A: mov     edi, ecx
0x6A253C: test    edi, edi
0x6A253E: jnz     short loc_6A24C6
0x6A2540: pop     esi
0x6A2541: pop     edi
0x6A2542: pop     ebp
0x6A2543: pop     ebx
0x6A2544: pop     ecx
0x6A2545: retn    8
