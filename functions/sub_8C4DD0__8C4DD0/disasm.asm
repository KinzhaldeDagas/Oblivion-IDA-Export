0x8C4DD0: push    ebx
0x8C4DD1: push    esi
0x8C4DD2: push    edi
0x8C4DD3: mov     edi, [esp+0Ch+arg_0]
0x8C4DD7: mov     eax, [edi+220h]
0x8C4DDD: mov     edx, [eax+8]
0x8C4DE0: mov     esi, ecx
0x8C4DE2: push    1
0x8C4DE4: lea     ecx, [esp+10h+arg_0]
0x8C4DE8: push    ecx
0x8C4DE9: push    4
0x8C4DEB: lea     ebx, [esi+8]
0x8C4DEE: push    ebx
0x8C4DEF: push    eax
0x8C4DF0: mov     [esp+20h+arg_0], 4
0x8C4DF8: call    edx
0x8C4DFA: mov     ebx, [ebx]
0x8C4DFC: mov     eax, [edi+220h]
0x8C4E02: push    1
0x8C4E04: lea     edx, [ebx+ebx*4]
0x8C4E07: add     edx, edx
0x8C4E09: lea     ecx, [esp+24h+arg_0]
0x8C4E0D: push    ecx
0x8C4E0E: mov     ecx, [esi+14h]
0x8C4E11: add     edx, edx
0x8C4E13: push    edx
0x8C4E14: mov     edx, [eax+8]
0x8C4E17: push    ecx
0x8C4E18: push    eax
0x8C4E19: mov     [esp+34h+arg_0], 14h
0x8C4E21: call    edx
0x8C4E23: mov     eax, [edi+220h]
0x8C4E29: mov     edx, [eax+8]
0x8C4E2C: push    1
0x8C4E2E: lea     ecx, [esp+38h+arg_0]
0x8C4E32: push    ecx
0x8C4E33: push    4
0x8C4E35: lea     ebx, [esi+0Ch]
0x8C4E38: push    ebx
0x8C4E39: push    eax
0x8C4E3A: mov     [esp+48h+arg_0], 4
0x8C4E42: call    edx
0x8C4E44: mov     ebx, [ebx]
0x8C4E46: mov     eax, [edi+220h]
0x8C4E4C: push    1
0x8C4E4E: lea     edx, [ebx+ebx*2]
0x8C4E51: add     edx, edx
0x8C4E53: lea     ecx, [esp+4Ch+arg_0]
0x8C4E57: push    ecx
0x8C4E58: mov     ecx, [esi+18h]
0x8C4E5B: add     edx, edx
0x8C4E5D: push    edx
0x8C4E5E: mov     edx, [eax+8]
0x8C4E61: push    ecx
0x8C4E62: push    eax
0x8C4E63: mov     [esp+5Ch+arg_0], 0Ch
0x8C4E6B: call    edx
0x8C4E6D: mov     eax, [edi+220h]
0x8C4E73: mov     edx, [eax+8]
0x8C4E76: add     esp, 50h
0x8C4E79: push    1
0x8C4E7B: lea     ecx, [esp+10h+arg_0]
0x8C4E7F: push    ecx
0x8C4E80: push    2
0x8C4E82: lea     ebx, [esi+10h]
0x8C4E85: push    ebx
0x8C4E86: push    eax
0x8C4E87: mov     [esp+20h+arg_0], 2
0x8C4E8F: call    edx
0x8C4E91: mov     edx, [esi+1Ch]
0x8C4E94: mov     edi, [edi+220h]
0x8C4E9A: push    1
0x8C4E9C: lea     eax, [esp+24h+arg_0]
0x8C4EA0: push    eax
0x8C4EA1: movzx   eax, word ptr [ebx]
0x8C4EA4: lea     ecx, [eax+eax*2]
0x8C4EA7: add     ecx, ecx
0x8C4EA9: add     ecx, ecx
0x8C4EAB: push    ecx
0x8C4EAC: mov     [esp+2Ch+arg_0], 0Ch
0x8C4EB4: push    edx
0x8C4EB5: mov     eax, [edi+8]
0x8C4EB8: push    edi
0x8C4EB9: call    eax
0x8C4EBB: add     esp, 28h
0x8C4EBE: pop     edi
0x8C4EBF: pop     esi
0x8C4EC0: pop     ebx
0x8C4EC1: retn    4
