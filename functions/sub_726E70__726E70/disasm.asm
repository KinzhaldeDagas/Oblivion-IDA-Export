0x726E70: sub     esp, 8
0x726E73: push    ebx
0x726E74: push    ebp
0x726E75: push    esi
0x726E76: push    edi
0x726E77: mov     edi, [esp+18h+arg_0]
0x726E7B: push    edi
0x726E7C: mov     esi, ecx
0x726E7E: call    nullsub_returnvVoid_1arg
0x726E83: mov     eax, [edi+220h]
0x726E89: push    1
0x726E8B: lea     edx, [esp+1Ch+arg_0]
0x726E8F: push    edx
0x726E90: lea     ecx, [esi+0Ch]
0x726E93: push    2
0x726E95: push    ecx
0x726E96: push    eax
0x726E97: mov     eax, [eax+8]
0x726E9A: mov     [esp+2Ch+arg_0], 2
0x726EA2: call    eax
0x726EA4: mov     eax, [edi+220h]
0x726EAA: mov     edx, [eax+8]
0x726EAD: push    1
0x726EAF: lea     ecx, [esp+30h+arg_0]
0x726EB3: push    ecx
0x726EB4: push    4
0x726EB6: lea     ebp, [esi+10h]
0x726EB9: push    ebp
0x726EBA: push    eax
0x726EBB: mov     [esp+40h+arg_0], 4
0x726EC3: call    edx
0x726EC5: xor     ebx, ebx
0x726EC7: add     esp, 28h
0x726ECA: cmp     [ebp+0], ebx
0x726ECD: jbe     short loc_726EED
0x726ECF: mov     [esp+18h+arg_0], ebx
0x726ED3: mov     ecx, [esi+14h]
0x726ED6: add     ecx, [esp+18h+arg_0]
0x726EDA: push    edi
0x726EDB: call    sub_7265F0
0x726EE0: add     [esp+18h+arg_0], 1Ch
0x726EE5: add     ebx, 1
0x726EE8: cmp     ebx, [ebp+0]
0x726EEB: jb      short loc_726ED3
0x726EED: movzx   eax, word ptr [esi+26h]
0x726EF1: push    1
0x726EF3: lea     ecx, [esp+1Ch+arg_0]
0x726EF7: push    ecx
0x726EF8: mov     [esp+20h+var_8], eax
0x726EFC: mov     eax, [edi+220h]
0x726F02: push    4
0x726F04: lea     edx, [esp+24h+var_8]
0x726F08: push    edx
0x726F09: push    eax
0x726F0A: mov     eax, [eax+8]
0x726F0D: mov     [esp+2Ch+arg_0], 4
0x726F15: call    eax
0x726F17: xor     ebx, ebx
0x726F19: add     esp, 14h
0x726F1C: cmp     [esi+26h], bx
0x726F20: jbe     short loc_726F84
0x726F22: mov     ecx, [esi+20h]
0x726F25: mov     eax, [ecx+ebx*4]
0x726F28: test    eax, eax
0x726F2A: push    1
0x726F2C: setnz   dl
0x726F2F: lea     ecx, [esp+1Ch+var_8]
0x726F33: push    ecx
0x726F34: mov     byte ptr [esp+20h+arg_0], dl
0x726F38: mov     [esp+20h+var_4], eax
0x726F3C: mov     eax, [edi+220h]
0x726F42: push    1
0x726F44: lea     edx, [esp+24h+arg_0]
0x726F48: push    edx
0x726F49: push    eax
0x726F4A: mov     eax, [eax+8]
0x726F4D: mov     [esp+2Ch+var_8], 1
0x726F55: call    eax
0x726F57: add     esp, 14h
0x726F5A: cmp     byte ptr [esp+18h+arg_0], 0
0x726F5F: jz      short loc_726F79
0x726F61: movzx   ecx, word ptr [esi+0Ch]
0x726F65: mov     edx, [ebp+0]
0x726F68: mov     eax, [esi+14h]
0x726F6B: push    ecx
0x726F6C: mov     ecx, [esp+1Ch+var_4]
0x726F70: push    edx
0x726F71: push    eax
0x726F72: push    ebx
0x726F73: push    edi
0x726F74: call    sub_726850
0x726F79: movzx   ecx, word ptr [esi+26h]
0x726F7D: add     ebx, 1
0x726F80: cmp     ebx, ecx
0x726F82: jb      short loc_726F22
0x726F84: pop     edi
0x726F85: pop     esi
0x726F86: pop     ebp
0x726F87: pop     ebx
0x726F88: add     esp, 8
0x726F8B: retn    4
