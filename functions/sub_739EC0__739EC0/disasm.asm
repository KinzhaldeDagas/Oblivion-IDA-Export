0x739EC0: sub     esp, 0Ch
0x739EC3: push    ebx
0x739EC4: push    ebp
0x739EC5: push    esi
0x739EC6: mov     esi, [esp+18h+arg_0]
0x739ECA: push    edi
0x739ECB: push    esi
0x739ECC: mov     edi, ecx
0x739ECE: call    nullsub_returnvVoid_1arg
0x739ED3: mov     eax, [esi+220h]
0x739ED9: mov     edx, [eax+8]
0x739EDC: push    1
0x739EDE: lea     ecx, [esp+20h+var_4]
0x739EE2: push    ecx
0x739EE3: push    2
0x739EE5: lea     ebx, [edi+0Ch]
0x739EE8: push    ebx
0x739EE9: push    eax
0x739EEA: mov     [esp+30h+var_4], 2
0x739EF2: call    edx
0x739EF4: xor     ebp, ebp
0x739EF6: add     esp, 14h
0x739EF9: cmp     [ebx], bp
0x739EFC: jbe     short loc_739F1A
0x739EFE: mov     edi, edi
0x739F00: mov     ecx, [edi+10h]
0x739F03: movzx   eax, bp
0x739F06: lea     eax, [eax+eax*2]
0x739F09: push    esi
0x739F0A: lea     ecx, [ecx+eax*4]
0x739F0D: call    sub_7094A0
0x739F12: add     ebp, 1
0x739F15: cmp     bp, [ebx]
0x739F18: jb      short loc_739F00
0x739F1A: cmp     dword ptr [edi+14h], 0
0x739F1E: mov     eax, [esi+220h]
0x739F24: push    1
0x739F26: setnz   dl
0x739F29: lea     ecx, [esp+20h+var_4]
0x739F2D: push    ecx
0x739F2E: mov     byte ptr [esp+24h+arg_0], dl
0x739F32: push    1
0x739F34: lea     edx, [esp+28h+arg_0]
0x739F38: push    edx
0x739F39: push    eax
0x739F3A: mov     eax, [eax+8]
0x739F3D: mov     [esp+30h+var_4], 1
0x739F45: call    eax
0x739F47: add     esp, 14h
0x739F4A: cmp     byte ptr [esp+1Ch+arg_0], 0
0x739F4F: jz      short loc_739F6F
0x739F51: xor     ebp, ebp
0x739F53: cmp     [ebx], bp
0x739F56: jbe     short loc_739F6F
0x739F58: mov     edx, [edi+14h]
0x739F5B: movzx   ecx, bp
0x739F5E: push    esi
0x739F5F: lea     ecx, [edx+ecx*8]
0x739F62: call    sub_714BF0
0x739F67: add     ebp, 1
0x739F6A: cmp     bp, [ebx]
0x739F6D: jb      short loc_739F58
0x739F6F: cmp     dword ptr [edi+18h], 0
0x739F73: push    1
0x739F75: lea     ecx, [esp+20h+var_4]
0x739F79: push    ecx
0x739F7A: setnz   al
0x739F7D: mov     [esp+24h+var_9], al
0x739F81: mov     eax, [esi+220h]
0x739F87: push    1
0x739F89: lea     edx, [esp+28h+var_9]
0x739F8D: push    edx
0x739F8E: push    eax
0x739F8F: mov     eax, [eax+8]
0x739F92: mov     [esp+30h+var_4], 1
0x739F9A: call    eax
0x739F9C: add     esp, 14h
0x739F9F: cmp     [esp+1Ch+var_9], 0
0x739FA4: jz      short loc_739FC7
0x739FA6: xor     ebp, ebp
0x739FA8: cmp     [ebx], bp
0x739FAB: jbe     short loc_739FC7
0x739FAD: lea     ecx, [ecx+0]
0x739FB0: movzx   ecx, bp
0x739FB3: shl     ecx, 4
0x739FB6: add     ecx, [edi+18h]
0x739FB9: push    esi
0x739FBA: call    sub_709510
0x739FBF: add     ebp, 1
0x739FC2: cmp     bp, [ebx]
0x739FC5: jb      short loc_739FB0
0x739FC7: mov     eax, [esi+220h]
0x739FCD: push    1
0x739FCF: lea     ecx, [esp+20h+var_4]
0x739FD3: push    ecx
0x739FD4: push    4
0x739FD6: lea     edx, [esp+28h+var_8]
0x739FDA: push    edx
0x739FDB: mov     [esp+2Ch+var_8], 0Ah
0x739FE3: push    eax
0x739FE4: mov     eax, [eax+8]
0x739FE7: mov     [esp+30h+var_4], 4
0x739FEF: call    eax
0x739FF1: mov     eax, [esp+30h+var_8]
0x739FF5: add     esp, 14h
0x739FF8: test    eax, eax
0x739FFA: jbe     short loc_73A021
0x739FFC: xor     ebx, ebx
0x739FFE: test    eax, eax
0x73A000: jbe     short loc_73A021
0x73A002: xor     eax, eax
0x73A004: mov     ecx, [edi+8]
0x73A007: mov     eax, [ecx+eax*4+8]
0x73A00B: mov     edx, [esi]
0x73A00D: mov     edx, [edx+2Ch]
0x73A010: push    eax
0x73A011: mov     ecx, esi
0x73A013: call    edx
0x73A015: add     ebx, 1
0x73A018: movzx   eax, bx
0x73A01B: cmp     eax, [esp+1Ch+var_8]
0x73A01F: jb      short loc_73A004
0x73A021: pop     edi
0x73A022: pop     esi
0x73A023: pop     ebp
0x73A024: pop     ebx
0x73A025: add     esp, 0Ch
0x73A028: retn    4
