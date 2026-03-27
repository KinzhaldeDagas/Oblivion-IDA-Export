0x751A00: push    ebx
0x751A01: push    esi
0x751A02: push    edi
0x751A03: mov     edi, [esp+0Ch+arg_0]
0x751A07: push    edi
0x751A08: mov     esi, ecx
0x751A0A: call    sub_752E40
0x751A0F: mov     ecx, [esi+18h]
0x751A12: mov     eax, [edi]
0x751A14: mov     edx, [eax+2Ch]
0x751A17: push    ecx
0x751A18: mov     ecx, edi
0x751A1A: call    edx
0x751A1C: push    edi
0x751A1D: lea     ecx, [esi+1Ch]
0x751A20: call    sub_7094A0
0x751A25: mov     eax, [edi+220h]
0x751A2B: push    1
0x751A2D: lea     ecx, [esp+10h+arg_0]
0x751A31: push    ecx
0x751A32: mov     ebx, 4
0x751A37: push    ebx
0x751A38: lea     edx, [esi+28h]
0x751A3B: push    edx
0x751A3C: push    eax
0x751A3D: mov     eax, [eax+8]
0x751A40: mov     [esp+20h+arg_0], ebx
0x751A44: call    eax
0x751A46: mov     eax, [edi+220h]
0x751A4C: push    1
0x751A4E: lea     ecx, [esp+24h+arg_0]
0x751A52: push    ecx
0x751A53: push    ebx
0x751A54: lea     edx, [esi+2Ch]
0x751A57: push    edx
0x751A58: push    eax
0x751A59: mov     eax, [eax+8]
0x751A5C: mov     [esp+34h+arg_0], ebx
0x751A60: call    eax
0x751A62: mov     eax, [edi+220h]
0x751A68: push    1
0x751A6A: lea     ecx, [esp+38h+arg_0]
0x751A6E: push    ecx
0x751A6F: push    ebx
0x751A70: lea     edx, [esi+30h]
0x751A73: push    edx
0x751A74: push    eax
0x751A75: mov     eax, [eax+8]
0x751A78: mov     [esp+48h+arg_0], ebx
0x751A7C: call    eax
0x751A7E: mov     eax, [edi+220h]
0x751A84: push    1
0x751A86: lea     ecx, [esp+4Ch+arg_0]
0x751A8A: push    ecx
0x751A8B: push    ebx
0x751A8C: lea     edx, [esi+34h]
0x751A8F: push    edx
0x751A90: push    eax
0x751A91: mov     eax, [eax+8]
0x751A94: mov     [esp+5Ch+arg_0], ebx
0x751A98: call    eax
0x751A9A: mov     edi, [edi+220h]
0x751AA0: mov     edx, [edi+8]
0x751AA3: add     esp, 50h
0x751AA6: push    1
0x751AA8: lea     ecx, [esp+10h+arg_0]
0x751AAC: push    ecx
0x751AAD: push    ebx
0x751AAE: add     esi, 38h ; '8'
0x751AB1: push    esi
0x751AB2: push    edi
0x751AB3: mov     [esp+20h+arg_0], ebx
0x751AB7: call    edx
0x751AB9: add     esp, 14h
0x751ABC: pop     edi
0x751ABD: pop     esi
0x751ABE: pop     ebx
0x751ABF: retn    4
