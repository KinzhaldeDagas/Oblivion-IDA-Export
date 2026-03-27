0x703670: push    ebx
0x703671: push    ebp
0x703672: push    esi
0x703673: push    edi
0x703674: mov     edi, [esp+10h+arg_0]
0x703678: push    edi
0x703679: mov     esi, ecx
0x70367B: call    sub_7201B0
0x703680: mov     eax, [edi+220h]
0x703686: mov     edx, [eax+8]
0x703689: push    1
0x70368B: lea     ecx, [esp+14h+arg_0]
0x70368F: push    ecx
0x703690: mov     ebx, 2
0x703695: push    ebx
0x703696: lea     ebp, [esi+60h]
0x703699: push    ebp
0x70369A: push    eax
0x70369B: mov     [esp+24h+arg_0], ebx
0x70369F: call    edx
0x7036A1: movzx   ebp, word ptr [ebp+0]
0x7036A5: mov     eax, [edi+220h]
0x7036AB: push    1
0x7036AD: lea     ecx, [esp+28h+arg_0]
0x7036B1: push    ecx
0x7036B2: mov     ecx, [esi+58h]
0x7036B5: lea     edx, ds:0[ebp*8]
0x7036BC: push    edx
0x7036BD: mov     edx, [eax+8]
0x7036C0: push    ecx
0x7036C1: push    eax
0x7036C2: mov     [esp+38h+arg_0], 8
0x7036CA: call    edx
0x7036CC: mov     eax, [edi+220h]
0x7036D2: push    1
0x7036D4: lea     ecx, [esp+3Ch+arg_0]
0x7036D8: push    ecx
0x7036D9: mov     ecx, [esi+5Ch]
0x7036DC: lea     edx, [ebp+ebp+0]
0x7036E0: push    edx
0x7036E1: mov     edx, [eax+8]
0x7036E4: push    ecx
0x7036E5: push    eax
0x7036E6: mov     [esp+4Ch+arg_0], ebx
0x7036EA: call    edx
0x7036EC: mov     eax, [edi+220h]
0x7036F2: push    1
0x7036F4: lea     ecx, [esp+50h+arg_0]
0x7036F8: push    ecx
0x7036F9: push    ebx
0x7036FA: lea     edx, [esi+62h]
0x7036FD: push    edx
0x7036FE: push    eax
0x7036FF: mov     eax, [eax+8]
0x703702: mov     [esp+60h+arg_0], ebx
0x703706: call    eax
0x703708: mov     eax, [edi+220h]
0x70370E: add     esp, 50h
0x703711: push    1
0x703713: lea     ecx, [esp+14h+arg_0]
0x703717: push    ecx
0x703718: push    ebx
0x703719: lea     edx, [esi+64h]
0x70371C: push    edx
0x70371D: push    eax
0x70371E: mov     eax, [eax+8]
0x703721: mov     [esp+24h+arg_0], ebx
0x703725: call    eax
0x703727: mov     eax, [edi+220h]
0x70372D: push    1
0x70372F: lea     ecx, [esp+28h+arg_0]
0x703733: push    ecx
0x703734: push    ebx
0x703735: lea     edx, [esi+66h]
0x703738: push    edx
0x703739: push    eax
0x70373A: mov     eax, [eax+8]
0x70373D: mov     [esp+38h+arg_0], ebx
0x703741: call    eax
0x703743: mov     eax, [edi+220h]
0x703749: mov     [esp+38h+arg_0], ebx
0x70374D: push    1
0x70374F: lea     ecx, [esp+3Ch+arg_0]
0x703753: push    ecx
0x703754: push    ebx
0x703755: lea     edx, [esi+68h]
0x703758: push    edx
0x703759: push    eax
0x70375A: mov     eax, [eax+8]
0x70375D: call    eax
0x70375F: mov     eax, [edi+220h]
0x703765: push    1
0x703767: lea     ecx, [esp+50h+arg_0]
0x70376B: push    ecx
0x70376C: push    ebx
0x70376D: lea     edx, [esi+6Ah]
0x703770: push    edx
0x703771: push    eax
0x703772: mov     eax, [eax+8]
0x703775: mov     [esp+60h+arg_0], ebx
0x703779: call    eax
0x70377B: mov     edi, [edi+220h]
0x703781: mov     edx, [edi+8]
0x703784: add     esp, 50h
0x703787: push    1
0x703789: lea     ecx, [esp+14h+arg_0]
0x70378D: push    ecx
0x70378E: push    ebx
0x70378F: add     esi, 6Ch ; 'l'
0x703792: push    esi
0x703793: push    edi
0x703794: mov     [esp+24h+arg_0], ebx
0x703798: call    edx
0x70379A: add     esp, 14h
0x70379D: pop     edi
0x70379E: pop     esi
0x70379F: pop     ebp
0x7037A0: pop     ebx
0x7037A1: retn    4
