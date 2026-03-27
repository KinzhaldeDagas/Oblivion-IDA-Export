0x70F7B0: push    ecx
0x70F7B1: push    ebx
0x70F7B2: push    ebp
0x70F7B3: push    esi
0x70F7B4: mov     esi, [esp+10h+arg_0]
0x70F7B8: mov     eax, [esi+220h]
0x70F7BE: push    edi
0x70F7BF: mov     edi, ecx
0x70F7C1: mov     ebp, 1
0x70F7C6: push    ebp
0x70F7C7: lea     ecx, [esp+18h+arg_0]
0x70F7CB: push    ecx
0x70F7CC: mov     ebx, 4
0x70F7D1: push    ebx
0x70F7D2: lea     edx, [edi+4]
0x70F7D5: push    edx
0x70F7D6: push    eax
0x70F7D7: mov     eax, [eax+8]
0x70F7DA: mov     [esp+28h+arg_0], ebx
0x70F7DE: call    eax
0x70F7E0: mov     eax, [esi+220h]
0x70F7E6: push    ebp
0x70F7E7: lea     ecx, [esp+2Ch+arg_0]
0x70F7EB: push    ecx
0x70F7EC: push    ebp
0x70F7ED: lea     edx, [edi+1]
0x70F7F0: push    edx
0x70F7F1: push    eax
0x70F7F2: mov     eax, [eax+8]
0x70F7F5: mov     [esp+3Ch+arg_0], ebp
0x70F7F9: call    eax
0x70F7FB: mov     eax, [esi+220h]
0x70F801: push    ebp
0x70F802: lea     ecx, [esp+40h+arg_0]
0x70F806: push    ecx
0x70F807: push    ebx
0x70F808: lea     edx, [edi+0Ch]
0x70F80B: push    edx
0x70F80C: push    eax
0x70F80D: mov     eax, [eax+8]
0x70F810: mov     [esp+50h+arg_0], ebx
0x70F814: call    eax
0x70F816: mov     eax, [esi+220h]
0x70F81C: push    ebp
0x70F81D: lea     ecx, [esp+54h+arg_0]
0x70F821: push    ecx
0x70F822: push    ebx
0x70F823: lea     edx, [edi+10h]
0x70F826: push    edx
0x70F827: push    eax
0x70F828: mov     eax, [eax+8]
0x70F82B: mov     [esp+64h+arg_0], ebx
0x70F82F: call    eax
0x70F831: mov     eax, [esi+220h]
0x70F837: mov     edx, [eax+8]
0x70F83A: add     esp, 50h
0x70F83D: push    ebp
0x70F83E: lea     ecx, [esp+18h+arg_0]
0x70F842: push    ecx
0x70F843: push    ebp
0x70F844: push    edi
0x70F845: push    eax
0x70F846: mov     [esp+28h+arg_0], ebp
0x70F84A: call    edx
0x70F84C: mov     eax, [esi+220h]
0x70F852: push    ebp
0x70F853: lea     ecx, [esp+2Ch+arg_0]
0x70F857: push    ecx
0x70F858: push    ebx
0x70F859: lea     edx, [edi+8]
0x70F85C: push    edx
0x70F85D: push    eax
0x70F85E: mov     eax, [eax+8]
0x70F861: mov     [esp+3Ch+arg_0], ebx
0x70F865: call    eax
0x70F867: add     esp, 28h
0x70F86A: add     edi, 18h
0x70F86D: mov     ebp, ebx
0x70F86F: nop
0x70F870: mov     eax, [esi+220h]
0x70F876: push    1
0x70F878: lea     ecx, [esp+18h+var_4]
0x70F87C: push    ecx
0x70F87D: push    ebx
0x70F87E: lea     edx, [edi-4]
0x70F881: push    edx
0x70F882: push    eax
0x70F883: mov     eax, [eax+8]
0x70F886: mov     [esp+28h+var_4], ebx
0x70F88A: call    eax
0x70F88C: mov     eax, [esi+220h]
0x70F892: mov     edx, [eax+8]
0x70F895: push    1
0x70F897: lea     ecx, [esp+2Ch+var_4]
0x70F89B: push    ecx
0x70F89C: push    ebx
0x70F89D: push    edi
0x70F89E: push    eax
0x70F89F: mov     [esp+3Ch+var_4], ebx
0x70F8A3: call    edx
0x70F8A5: mov     eax, [esi+220h]
0x70F8AB: push    1
0x70F8AD: lea     ecx, [esp+40h+var_4]
0x70F8B1: push    ecx
0x70F8B2: push    1
0x70F8B4: lea     edx, [edi+4]
0x70F8B7: push    edx
0x70F8B8: push    eax
0x70F8B9: mov     eax, [eax+8]
0x70F8BC: mov     [esp+50h+var_4], 1
0x70F8C4: call    eax
0x70F8C6: mov     cl, [edi+5]
0x70F8C9: mov     eax, [esi+220h]
0x70F8CF: push    1
0x70F8D1: lea     edx, [esp+54h+var_4]
0x70F8D5: push    edx
0x70F8D6: mov     byte ptr [esp+58h+arg_0], cl
0x70F8DA: mov     edx, [eax+8]
0x70F8DD: push    1
0x70F8DF: lea     ecx, [esp+5Ch+arg_0]
0x70F8E3: push    ecx
0x70F8E4: push    eax
0x70F8E5: mov     [esp+64h+var_4], 1
0x70F8ED: call    edx
0x70F8EF: add     esp, 50h
0x70F8F2: add     edi, 0Ch
0x70F8F5: sub     ebp, 1
0x70F8F8: jnz     loc_70F870
0x70F8FE: pop     edi
0x70F8FF: pop     esi
0x70F900: pop     ebp
0x70F901: pop     ebx
0x70F902: pop     ecx
0x70F903: retn    4
