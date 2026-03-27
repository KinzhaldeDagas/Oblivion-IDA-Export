0x8C56E0: push    ecx
0x8C56E1: push    ebx
0x8C56E2: push    esi
0x8C56E3: mov     esi, ecx
0x8C56E5: mov     eax, [esi]
0x8C56E7: mov     edx, [eax+74h]
0x8C56EA: push    edi
0x8C56EB: lea     ecx, [esp+10h+var_1]
0x8C56EF: push    ecx
0x8C56F0: mov     ecx, esi
0x8C56F2: call    edx
0x8C56F4: mov     ebx, [esp+10h+arg_0]
0x8C56F8: mov     edi, eax
0x8C56FA: test    edi, edi
0x8C56FC: jz      short loc_8C570E
0x8C56FE: mov     ecx, ebx
0x8C5700: call    sub_7124A0
0x8C5705: push    eax; a2
0x8C5706: lea     ecx, [edi+4]; this
0x8C5709: call    NiSmartPointer_Set??
0x8C570E: push    ebx
0x8C570F: mov     ecx, esi
0x8C5711: call    sub_8A2600
0x8C5716: pop     edi
0x8C5717: pop     esi
0x8C5718: pop     ebx
0x8C5719: pop     ecx
0x8C571A: retn    4
