0x73C9E0: push    ebx
0x73C9E1: push    ebp
0x73C9E2: mov     ebp, [esp+8+arg_0]
0x73C9E6: push    esi
0x73C9E7: push    edi
0x73C9E8: push    ebp
0x73C9E9: mov     esi, ecx
0x73C9EB: call    sub_6FE000
0x73C9F0: mov     eax, [ebp+220h]
0x73C9F6: mov     edx, [eax+8]
0x73C9F9: push    1
0x73C9FB: lea     ecx, [esp+14h+arg_0]
0x73C9FF: push    ecx
0x73CA00: push    4
0x73CA02: lea     ebx, [esi+0Ch]
0x73CA05: push    ebx
0x73CA06: push    eax
0x73CA07: mov     [esp+24h+arg_0], 4
0x73CA0F: call    edx
0x73CA11: xor     edi, edi
0x73CA13: add     esp, 14h
0x73CA16: cmp     [ebx], edi
0x73CA18: jbe     short loc_73CA35
0x73CA1A: lea     ebx, [ebx+0]
0x73CA20: mov     eax, [esi+10h]
0x73CA23: mov     ecx, [eax+edi*4]
0x73CA26: push    ecx
0x73CA27: mov     ecx, ebp
0x73CA29: call    sub_713720
0x73CA2E: add     edi, 1
0x73CA31: cmp     edi, [ebx]
0x73CA33: jb      short loc_73CA20
0x73CA35: mov     ebp, [ebp+220h]
0x73CA3B: mov     eax, [ebp+8]
0x73CA3E: push    1
0x73CA40: lea     edx, [esp+14h+arg_0]
0x73CA44: push    edx
0x73CA45: push    4
0x73CA47: add     esi, 14h
0x73CA4A: push    esi
0x73CA4B: push    ebp
0x73CA4C: mov     [esp+24h+arg_0], 4
0x73CA54: call    eax
0x73CA56: add     esp, 14h
0x73CA59: pop     edi
0x73CA5A: pop     esi
0x73CA5B: pop     ebp
0x73CA5C: pop     ebx
0x73CA5D: retn    4
