0x89D7B0: push    ecx
0x89D7B1: push    ebx
0x89D7B2: push    esi
0x89D7B3: mov     esi, ecx
0x89D7B5: mov     eax, [esi]
0x89D7B7: mov     edx, [eax+74h]
0x89D7BA: push    edi
0x89D7BB: lea     ecx, [esp+10h+var_4]
0x89D7BF: push    ecx
0x89D7C0: mov     ecx, esi
0x89D7C2: call    edx
0x89D7C4: mov     ebx, [esp+10h+arg_0]
0x89D7C8: push    ebx
0x89D7C9: mov     ecx, esi
0x89D7CB: mov     edi, eax
0x89D7CD: call    nullsub_returnvVoid_1arg
0x89D7D2: test    edi, edi
0x89D7D4: jz      short loc_89D80D
0x89D7D6: mov     eax, [esi]
0x89D7D8: mov     edx, [eax+68h]
0x89D7DB: mov     ecx, esi
0x89D7DD: call    edx
0x89D7DF: mov     ecx, [ebx+220h]
0x89D7E5: push    1
0x89D7E7: lea     edx, [esp+14h+arg_0]
0x89D7EB: push    edx
0x89D7EC: push    eax
0x89D7ED: mov     eax, [ecx+8]
0x89D7F0: push    edi
0x89D7F1: push    ecx
0x89D7F2: mov     [esp+24h+arg_0], 1
0x89D7FA: call    eax
0x89D7FC: mov     edx, [esi]
0x89D7FE: mov     eax, dword ptr [esp+24h+var_4]
0x89D802: mov     edx, [edx+64h]
0x89D805: add     esp, 14h
0x89D808: push    eax
0x89D809: mov     ecx, esi
0x89D80B: call    edx
0x89D80D: pop     edi
0x89D80E: pop     esi
0x89D80F: pop     ebx
0x89D810: pop     ecx
0x89D811: retn    4
