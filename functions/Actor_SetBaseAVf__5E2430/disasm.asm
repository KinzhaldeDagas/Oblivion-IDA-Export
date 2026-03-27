0x5E2430: push    ebx
0x5E2431: push    ebp
0x5E2432: push    esi
0x5E2433: mov     esi, ecx
0x5E2435: mov     ebp, [esi+58h]
0x5E2438: test    ebp, ebp
0x5E243A: mov     eax, [esi]
0x5E243C: mov     edx, [eax+170h]
0x5E2442: push    edi
0x5E2443: jz      short loc_5E247E
0x5E2445: xor     ebx, ebx
0x5E2447: call    edx
0x5E2449: mov     edi, eax
0x5E244B: test    edi, edi
0x5E244D: jz      short loc_5E2461
0x5E244F: mov     eax, [esi]
0x5E2451: mov     edx, [eax+190h]
0x5E2457: mov     ecx, esi
0x5E2459: call    edx
0x5E245B: test    al, al
0x5E245D: jz      short loc_5E2461
0x5E245F: mov     ebx, edi
0x5E2461: fld     [esp+10h+arg_4]
0x5E2465: mov     edi, [esp+10h+arg_0]
0x5E2469: mov     eax, [ebp+0]
0x5E246C: mov     edx, [eax+270h]
0x5E2472: push    ecx
0x5E2473: fstp    [esp+14h+var_14]
0x5E2476: push    edi
0x5E2477: push    ebx
0x5E2478: mov     ecx, ebp
0x5E247A: call    edx
0x5E247C: jmp     short loc_5E24B7
0x5E247E: xor     edi, edi
0x5E2480: call    edx
0x5E2482: mov     ebx, eax
0x5E2484: test    ebx, ebx
0x5E2486: jz      short loc_5E249A
0x5E2488: mov     eax, [esi]
0x5E248A: mov     edx, [eax+190h]
0x5E2490: mov     ecx, esi
0x5E2492: call    edx
0x5E2494: test    al, al
0x5E2496: jz      short loc_5E249A
0x5E2498: mov     edi, ebx
0x5E249A: fld     [esp+10h+arg_4]
0x5E249E: mov     eax, [edi]
0x5E24A0: mov     edx, [eax+130h]
0x5E24A6: push    ecx
0x5E24A7: mov     ecx, [esp+14h+arg_0]
0x5E24AB: fstp    [esp+14h+var_14]
0x5E24AE: push    ecx
0x5E24AF: mov     ecx, edi
0x5E24B1: call    edx
0x5E24B3: mov     edi, [esp+10h+arg_0]
0x5E24B7: cmp     edi, 1Bh; switch 28 cases
0x5E24BA: ja      short Actor_SetBaseAVf___def_5E24C3; jumptable 005E24C3 default case, cases 1-6,8-17,19-26
0x5E24BC: movzx   eax, ds:byte_5E24E8[edi]
0x5E24C3: jmp     ds:jpt_5E24C3[eax*4]; switch jump
0x5E24CA: mov     edx, [esi]; jumptable 005E24C3 cases 0,7,18,27
0x5E24CC: mov     eax, [edx+2C0h]
0x5E24D2: mov     ecx, esi
0x5E24D4: call    eax
0x5E24D6: pop     edi; jumptable 005E24C3 default case, cases 1-6,8-17,19-26
0x5E24D7: pop     esi
0x5E24D8: pop     ebp
0x5E24D9: pop     ebx
0x5E24DA: retn    8
