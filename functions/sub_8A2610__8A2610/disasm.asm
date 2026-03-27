0x8A2610: push    ecx
0x8A2611: push    esi
0x8A2612: mov     esi, ecx
0x8A2614: mov     eax, [esi]
0x8A2616: mov     edx, [eax+74h]
0x8A2619: lea     ecx, [esp+8+var_4]
0x8A261D: push    ecx
0x8A261E: mov     ecx, esi
0x8A2620: call    edx
0x8A2622: mov     ecx, [esi+10h]
0x8A2625: mov     edx, [esp+8+arg_0]
0x8A2629: mov     [eax], ecx
0x8A262B: push    edx
0x8A262C: mov     ecx, esi
0x8A262E: call    sub_89D7B0
0x8A2633: mov     ecx, dword ptr [esp+8+var_4]
0x8A2637: mov     eax, [esi]
0x8A2639: mov     edx, [eax+64h]
0x8A263C: push    ecx
0x8A263D: mov     ecx, esi
0x8A263F: call    edx
0x8A2641: pop     esi
0x8A2642: pop     ecx
0x8A2643: retn    4
