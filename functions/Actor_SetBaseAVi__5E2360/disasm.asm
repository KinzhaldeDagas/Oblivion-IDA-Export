0x5E2360: push    ebx
0x5E2361: push    ebp
0x5E2362: push    esi
0x5E2363: mov     esi, ecx
0x5E2365: mov     ebp, [esi+58h]
0x5E2368: test    ebp, ebp
0x5E236A: mov     eax, [esi]
0x5E236C: mov     edx, [eax+170h]
0x5E2372: push    edi
0x5E2373: jz      short loc_5E23AB
0x5E2375: xor     ebx, ebx
0x5E2377: call    edx
0x5E2379: mov     edi, eax
0x5E237B: test    edi, edi
0x5E237D: jz      short loc_5E2391
0x5E237F: mov     eax, [esi]
0x5E2381: mov     edx, [eax+190h]
0x5E2387: mov     ecx, esi
0x5E2389: call    edx
0x5E238B: test    al, al
0x5E238D: jz      short loc_5E2391
0x5E238F: mov     ebx, edi
0x5E2391: mov     ecx, [esp+10h+arg_4]
0x5E2395: mov     edi, [esp+10h+arg_0]
0x5E2399: mov     eax, [ebp+0]
0x5E239C: mov     edx, [eax+274h]
0x5E23A2: push    ecx
0x5E23A3: push    edi
0x5E23A4: push    ebx
0x5E23A5: mov     ecx, ebp
0x5E23A7: call    edx
0x5E23A9: jmp     short loc_5E23E1
0x5E23AB: xor     edi, edi
0x5E23AD: call    edx
0x5E23AF: mov     ebx, eax
0x5E23B1: test    ebx, ebx
0x5E23B3: jz      short loc_5E23C7
0x5E23B5: mov     eax, [esi]
0x5E23B7: mov     edx, [eax+190h]
0x5E23BD: mov     ecx, esi
0x5E23BF: call    edx
0x5E23C1: test    al, al
0x5E23C3: jz      short loc_5E23C7
0x5E23C5: mov     edi, ebx
0x5E23C7: mov     ecx, [esp+10h+arg_4]
0x5E23CB: mov     eax, [edi]
0x5E23CD: mov     edx, [esp+10h+arg_0]
0x5E23D1: mov     eax, [eax+134h]
0x5E23D7: push    ecx
0x5E23D8: push    edx
0x5E23D9: mov     ecx, edi
0x5E23DB: call    eax
0x5E23DD: mov     edi, [esp+10h+arg_0]
0x5E23E1: cmp     edi, 1Bh; switch 28 cases
0x5E23E4: ja      short Actor_SetBaseAVi___def_5E23ED; jumptable 005E23ED default case, cases 1-6,8-17,19-26
0x5E23E6: movzx   ecx, ds:byte_5E2410[edi]
0x5E23ED: jmp     ds:jpt_5E23ED[ecx*4]; switch jump
0x5E23F4: mov     edx, [esi]; jumptable 005E23ED cases 0,7,18,27
0x5E23F6: mov     eax, [edx+2C0h]
0x5E23FC: mov     ecx, esi
0x5E23FE: call    eax
0x5E2400: pop     edi; jumptable 005E23ED default case, cases 1-6,8-17,19-26
0x5E2401: pop     esi
0x5E2402: pop     ebp
0x5E2403: pop     ebx
0x5E2404: retn    8
