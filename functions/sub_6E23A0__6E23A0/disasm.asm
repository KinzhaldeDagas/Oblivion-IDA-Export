0x6E23A0: push    ecx
0x6E23A1: push    ebx
0x6E23A2: push    ebp
0x6E23A3: push    esi
0x6E23A4: push    edi
0x6E23A5: mov     edi, [esp+14h+arg_0]
0x6E23A9: push    edi
0x6E23AA: mov     esi, ecx
0x6E23AC: call    nullsub_returnvVoid_1arg
0x6E23B1: movzx   eax, word ptr [esi+8]
0x6E23B5: push    1
0x6E23B7: lea     ecx, [esp+18h+var_4]
0x6E23BB: push    ecx
0x6E23BC: mov     ebp, 4
0x6E23C1: mov     [esp+1Ch+arg_0], eax
0x6E23C5: mov     eax, [edi+220h]
0x6E23CB: push    ebp
0x6E23CC: lea     edx, [esp+20h+arg_0]
0x6E23D0: push    edx
0x6E23D1: push    eax
0x6E23D2: mov     eax, [eax+8]
0x6E23D5: mov     [esp+28h+var_4], ebp
0x6E23D9: call    eax
0x6E23DB: add     esp, 14h
0x6E23DE: cmp     word ptr [esi+8], 0
0x6E23E3: jbe     short loc_6E241D
0x6E23E5: mov     eax, [edi+220h]
0x6E23EB: mov     edx, [eax+8]
0x6E23EE: push    1
0x6E23F0: lea     ecx, [esp+18h+var_4]
0x6E23F4: push    ecx
0x6E23F5: push    ebp
0x6E23F6: lea     ebx, [esi+10h]
0x6E23F9: push    ebx
0x6E23FA: push    eax
0x6E23FB: mov     [esp+28h+var_4], ebp
0x6E23FF: call    edx
0x6E2401: movzx   eax, word ptr [esi+8]
0x6E2405: mov     edx, [esi+20h]
0x6E2408: mov     ecx, [ebx]
0x6E240A: push    eax
0x6E240B: push    edx
0x6E240C: mov     [esp+30h+arg_0], eax
0x6E2410: mov     eax, ds:0B3D5F0h[ecx*4]
0x6E2417: push    edi
0x6E2418: call    eax ; dword_B3D5F0
0x6E241A: add     esp, 20h
0x6E241D: movzx   ecx, word ptr [esi+0Ah]
0x6E2421: mov     eax, [edi+220h]
0x6E2427: push    1
0x6E2429: lea     edx, [esp+18h+var_4]
0x6E242D: push    edx
0x6E242E: mov     [esp+1Ch+arg_0], ecx
0x6E2432: mov     edx, [eax+8]
0x6E2435: push    ebp
0x6E2436: lea     ecx, [esp+20h+arg_0]
0x6E243A: push    ecx
0x6E243B: push    eax
0x6E243C: mov     [esp+28h+var_4], ebp
0x6E2440: call    edx
0x6E2442: add     esp, 14h
0x6E2445: cmp     word ptr [esi+0Ah], 0
0x6E244A: jbe     short loc_6E2484
0x6E244C: mov     eax, [edi+220h]
0x6E2452: mov     edx, [eax+8]
0x6E2455: push    1
0x6E2457: lea     ecx, [esp+18h+var_4]
0x6E245B: push    ecx
0x6E245C: push    ebp
0x6E245D: lea     ebx, [esi+14h]
0x6E2460: push    ebx
0x6E2461: push    eax
0x6E2462: mov     [esp+28h+var_4], ebp
0x6E2466: call    edx
0x6E2468: movzx   eax, word ptr [esi+0Ah]
0x6E246C: mov     edx, [esi+24h]
0x6E246F: mov     ecx, [ebx]
0x6E2471: push    eax
0x6E2472: push    edx
0x6E2473: mov     [esp+30h+arg_0], eax
0x6E2477: mov     eax, ds:0B3D5D8h[ecx*4]
0x6E247E: push    edi
0x6E247F: call    eax ; dword_B3D5D8
0x6E2481: add     esp, 20h
0x6E2484: movzx   ecx, word ptr [esi+0Ch]
0x6E2488: mov     eax, [edi+220h]
0x6E248E: push    1
0x6E2490: lea     edx, [esp+18h+var_4]
0x6E2494: push    edx
0x6E2495: mov     [esp+1Ch+arg_0], ecx
0x6E2499: mov     edx, [eax+8]
0x6E249C: push    ebp
0x6E249D: lea     ecx, [esp+20h+arg_0]
0x6E24A1: push    ecx
0x6E24A2: push    eax
0x6E24A3: mov     [esp+28h+var_4], ebp
0x6E24A7: call    edx
0x6E24A9: add     esp, 14h
0x6E24AC: cmp     word ptr [esi+0Ch], 0
0x6E24B1: jbe     short loc_6E24EB
0x6E24B3: mov     eax, [edi+220h]
0x6E24B9: mov     edx, [eax+8]
0x6E24BC: push    1
0x6E24BE: lea     ecx, [esp+18h+var_4]
0x6E24C2: push    ecx
0x6E24C3: push    ebp
0x6E24C4: lea     ebx, [esi+18h]
0x6E24C7: push    ebx
0x6E24C8: push    eax
0x6E24C9: mov     [esp+28h+var_4], ebp
0x6E24CD: call    edx
0x6E24CF: movzx   eax, word ptr [esi+0Ch]
0x6E24D3: mov     edx, [esi+28h]
0x6E24D6: mov     ecx, [ebx]
0x6E24D8: push    eax
0x6E24D9: push    edx
0x6E24DA: mov     [esp+30h+arg_0], eax
0x6E24DE: mov     eax, ds:0B3D5C0h[ecx*4]
0x6E24E5: push    edi
0x6E24E6: call    eax ; dword_B3D5C0
0x6E24E8: add     esp, 20h
0x6E24EB: pop     edi
0x6E24EC: pop     esi
0x6E24ED: pop     ebp
0x6E24EE: pop     ebx
0x6E24EF: pop     ecx
0x6E24F0: retn    4
