0x808DF0: push    0FFFFFFFFh
0x808DF2: push    offset SEH_808DF0
0x808DF7: mov     eax, large fs:0
0x808DFD: push    eax
0x808DFE: sub     esp, 8
0x808E01: push    ebx
0x808E02: push    ebp
0x808E03: push    esi
0x808E04: push    edi
0x808E05: mov     eax, ds:0B30AACh
0x808E0A: xor     eax, esp
0x808E0C: push    eax
0x808E0D: lea     eax, [esp+28h+var_C]
0x808E11: mov     large fs:0, eax
0x808E17: mov     edi, ecx
0x808E19: push    1; a1
0x808E1B: call    GetShaderDefinition
0x808E20: mov     ebx, [eax+4]
0x808E23: add     eax, 4
0x808E26: mov     eax, [ebx+2Ch]
0x808E29: add     esp, 4
0x808E2C: test    eax, eax
0x808E2E: mov     [esp+28h+var_14], eax
0x808E32: jz      short loc_808E3E
0x808E34: add     eax, 4
0x808E37: push    eax; lpAddend
0x808E38: call    dword ptr ds:0A28078h
0x808E3E: mov     ebp, [ebx+30h]
0x808E41: test    ebp, ebp
0x808E43: mov     [esp+28h+var_4], 0
0x808E4B: mov     [esp+28h+var_10], ebp
0x808E4F: jz      short loc_808E5B
0x808E51: lea     eax, [ebp+4]
0x808E54: push    eax; lpAddend
0x808E55: call    dword ptr ds:0A28078h
0x808E5B: mov     esi, [edi+30h]
0x808E5E: cmp     esi, ebp
0x808E60: mov     byte ptr [esp+28h+var_4], 1
0x808E65: jz      short loc_808E98
0x808E67: test    esi, esi
0x808E69: jz      short loc_808E87
0x808E6B: lea     ecx, [esi+4]
0x808E6E: push    ecx; lpAddend
0x808E6F: call    dword ptr ds:0A2807Ch
0x808E75: test    eax, eax
0x808E77: jnz     short loc_808E87
0x808E79: test    esi, esi
0x808E7B: jz      short loc_808E87
0x808E7D: mov     edx, [esi]
0x808E7F: mov     eax, [edx]
0x808E81: push    1
0x808E83: mov     ecx, esi
0x808E85: call    eax
0x808E87: test    ebp, ebp
0x808E89: mov     [edi+30h], ebp
0x808E8C: jz      short loc_808E98
0x808E8E: add     ebp, 4
0x808E91: push    ebp; lpAddend
0x808E92: call    dword ptr ds:0A28078h
0x808E98: mov     esi, [edi+2Ch]
0x808E9B: mov     ebp, [esp+28h+var_14]
0x808E9F: cmp     esi, ebp
0x808EA1: jz      short loc_808ED4
0x808EA3: test    esi, esi
0x808EA5: jz      short loc_808EC3
0x808EA7: lea     ecx, [esi+4]
0x808EAA: push    ecx; lpAddend
0x808EAB: call    dword ptr ds:0A2807Ch
0x808EB1: test    eax, eax
0x808EB3: jnz     short loc_808EC3
0x808EB5: test    esi, esi
0x808EB7: jz      short loc_808EC3
0x808EB9: mov     edx, [esi]
0x808EBB: mov     eax, [edx]
0x808EBD: push    1
0x808EBF: mov     ecx, esi
0x808EC1: call    eax
0x808EC3: test    ebp, ebp
0x808EC5: mov     [edi+2Ch], ebp
0x808EC8: jz      short loc_808ED4
0x808ECA: add     ebp, 4
0x808ECD: push    ebp; lpAddend
0x808ECE: call    dword ptr ds:0A28078h
0x808ED4: mov     ebp, [ebx+8Ch]
0x808EDA: mov     esi, [edi+8Ch]
0x808EE0: cmp     esi, ebp
0x808EE2: jz      short loc_808F18
0x808EE4: test    esi, esi
0x808EE6: jz      short loc_808F04
0x808EE8: lea     ecx, [esi+4]
0x808EEB: push    ecx; lpAddend
0x808EEC: call    dword ptr ds:0A2807Ch
0x808EF2: test    eax, eax
0x808EF4: jnz     short loc_808F04
0x808EF6: test    esi, esi
0x808EF8: jz      short loc_808F04
0x808EFA: mov     edx, [esi]
0x808EFC: mov     eax, [edx]
0x808EFE: push    1
0x808F00: mov     ecx, esi
0x808F02: call    eax
0x808F04: test    ebp, ebp
0x808F06: mov     [edi+8Ch], ebp
0x808F0C: jz      short loc_808F18
0x808F0E: add     ebp, 4
0x808F11: push    ebp; lpAddend
0x808F12: call    dword ptr ds:0A28078h
0x808F18: mov     ebp, [ebx+90h]
0x808F1E: mov     esi, [edi+90h]
0x808F24: cmp     esi, ebp
0x808F26: jz      short loc_808F5C
0x808F28: test    esi, esi
0x808F2A: jz      short loc_808F48
0x808F2C: lea     ecx, [esi+4]
0x808F2F: push    ecx; lpAddend
0x808F30: call    dword ptr ds:0A2807Ch
0x808F36: test    eax, eax
0x808F38: jnz     short loc_808F48
0x808F3A: test    esi, esi
0x808F3C: jz      short loc_808F48
0x808F3E: mov     edx, [esi]
0x808F40: mov     eax, [edx]
0x808F42: push    1
0x808F44: mov     ecx, esi
0x808F46: call    eax
0x808F48: test    ebp, ebp
0x808F4A: mov     [edi+90h], ebp
0x808F50: jz      short loc_808F5C
0x808F52: add     ebp, 4
0x808F55: push    ebp; lpAddend
0x808F56: call    dword ptr ds:0A28078h
0x808F5C: mov     ebp, [ebx+94h]
0x808F62: mov     esi, [edi+94h]
0x808F68: cmp     esi, ebp
0x808F6A: jz      short loc_808FA0
0x808F6C: test    esi, esi
0x808F6E: jz      short loc_808F8C
0x808F70: lea     ecx, [esi+4]
0x808F73: push    ecx; lpAddend
0x808F74: call    dword ptr ds:0A2807Ch
0x808F7A: test    eax, eax
0x808F7C: jnz     short loc_808F8C
0x808F7E: test    esi, esi
0x808F80: jz      short loc_808F8C
0x808F82: mov     edx, [esi]
0x808F84: mov     eax, [edx]
0x808F86: push    1
0x808F88: mov     ecx, esi
0x808F8A: call    eax
0x808F8C: test    ebp, ebp
0x808F8E: mov     [edi+94h], ebp
0x808F94: jz      short loc_808FA0
0x808F96: add     ebp, 4
0x808F99: push    ebp; lpAddend
0x808F9A: call    dword ptr ds:0A28078h
0x808FA0: mov     ebp, [ebx+98h]
0x808FA6: mov     esi, [edi+98h]
0x808FAC: cmp     esi, ebp
0x808FAE: jz      short loc_808FE4
0x808FB0: test    esi, esi
0x808FB2: jz      short loc_808FD0
0x808FB4: lea     ecx, [esi+4]
0x808FB7: push    ecx; lpAddend
0x808FB8: call    dword ptr ds:0A2807Ch
0x808FBE: test    eax, eax
0x808FC0: jnz     short loc_808FD0
0x808FC2: test    esi, esi
0x808FC4: jz      short loc_808FD0
0x808FC6: mov     edx, [esi]
0x808FC8: mov     eax, [edx]
0x808FCA: push    1
0x808FCC: mov     ecx, esi
0x808FCE: call    eax
0x808FD0: test    ebp, ebp
0x808FD2: mov     [edi+98h], ebp
0x808FD8: jz      short loc_808FE4
0x808FDA: add     ebp, 4
0x808FDD: push    ebp; lpAddend
0x808FDE: call    dword ptr ds:0A28078h
0x808FE4: mov     esi, [esp+28h+var_10]
0x808FE8: test    esi, esi
0x808FEA: mov     byte ptr [esp+28h+var_4], 0
0x808FEF: jz      short loc_809009
0x808FF1: lea     ecx, [esi+4]
0x808FF4: push    ecx; lpAddend
0x808FF5: call    dword ptr ds:0A2807Ch
0x808FFB: test    eax, eax
0x808FFD: jnz     short loc_809009
0x808FFF: mov     edx, [esi]
0x809001: mov     eax, [edx]
0x809003: push    1
0x809005: mov     ecx, esi
0x809007: call    eax
0x809009: mov     esi, [esp+28h+var_14]
0x80900D: test    esi, esi
0x80900F: mov     [esp+28h+var_4], 0FFFFFFFFh
0x809017: jz      short loc_809031
0x809019: lea     ecx, [esi+4]
0x80901C: push    ecx; lpAddend
0x80901D: call    dword ptr ds:0A2807Ch
0x809023: test    eax, eax
0x809025: jnz     short loc_809031
0x809027: mov     edx, [esi]
0x809029: mov     eax, [edx]
0x80902B: push    1
0x80902D: mov     ecx, esi
0x80902F: call    eax
0x809031: mov     ecx, dword ptr [esp+28h+var_C]
0x809035: mov     large fs:0, ecx
0x80903C: pop     ecx
0x80903D: pop     edi
0x80903E: pop     esi
0x80903F: pop     ebp
0x809040: pop     ebx
0x809041: add     esp, 14h
0x809044: retn
