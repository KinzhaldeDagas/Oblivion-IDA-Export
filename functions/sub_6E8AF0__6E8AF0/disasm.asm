0x6E8AF0: push    ebx
0x6E8AF1: push    ebp
0x6E8AF2: push    esi
0x6E8AF3: push    edi
0x6E8AF4: mov     edi, [esp+10h+arg_0]
0x6E8AF8: push    edi
0x6E8AF9: mov     esi, ecx
0x6E8AFB: call    nullsub_returnvVoid_1arg
0x6E8B00: mov     eax, [edi+220h]
0x6E8B06: mov     edx, [eax+8]
0x6E8B09: push    1
0x6E8B0B: lea     ecx, [esp+14h+arg_0]
0x6E8B0F: push    ecx
0x6E8B10: mov     ebp, 4
0x6E8B15: push    ebp
0x6E8B16: lea     ebx, [esi+8]
0x6E8B19: push    ebx
0x6E8B1A: push    eax
0x6E8B1B: mov     [esp+24h+arg_0], ebp
0x6E8B1F: call    edx
0x6E8B21: add     esp, 14h
0x6E8B24: cmp     dword ptr [ebx], 0
0x6E8B27: jbe     short loc_6E8B5D
0x6E8B29: mov     eax, [edi+220h]
0x6E8B2F: mov     edx, [eax+8]
0x6E8B32: push    1
0x6E8B34: lea     ecx, [esp+14h+arg_0]
0x6E8B38: push    ecx
0x6E8B39: mov     [esp+18h+arg_0], ebp
0x6E8B3D: push    4
0x6E8B3F: lea     ebp, [esi+10h]
0x6E8B42: push    ebp
0x6E8B43: push    eax
0x6E8B44: call    edx
0x6E8B46: mov     ecx, [ebx]
0x6E8B48: mov     edx, [esi+0Ch]
0x6E8B4B: mov     eax, [ebp+0]
0x6E8B4E: mov     eax, ds:0B3D638h[eax*4]
0x6E8B55: push    ecx
0x6E8B56: push    edx
0x6E8B57: push    edi
0x6E8B58: call    eax ; dword_B3D638
0x6E8B5A: add     esp, 20h
0x6E8B5D: pop     edi
0x6E8B5E: pop     esi
0x6E8B5F: pop     ebp
0x6E8B60: pop     ebx
0x6E8B61: retn    4
