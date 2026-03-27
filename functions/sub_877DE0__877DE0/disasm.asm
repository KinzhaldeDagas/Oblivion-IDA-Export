0x877DE0: push    0FFFFFFFFh
0x877DE2: push    offset SEH_882120
0x877DE7: mov     eax, large fs:0
0x877DED: push    eax
0x877DEE: push    ebx
0x877DEF: push    ebp
0x877DF0: push    esi
0x877DF1: push    edi
0x877DF2: mov     eax, ds:0B30AACh
0x877DF7: xor     eax, esp
0x877DF9: push    eax
0x877DFA: lea     eax, [esp+20h+var_C]
0x877DFE: mov     large fs:0, eax
0x877E04: mov     esi, ecx
0x877E06: mov     ebp, [esp+20h+arg_8]
0x877E0A: mov     ebx, [ebp+0Ch]
0x877E0D: mov     edi, ds:0B476ACh
0x877E13: push    ebx
0x877E14: call    sub_848E50
0x877E19: mov     ebp, [ebp+10h]
0x877E1C: mov     ecx, [esp+20h+arg_0]
0x877E20: mov     eax, [esi]
0x877E22: mov     edx, [eax+0BCh]
0x877E28: push    ebp
0x877E29: push    ebx
0x877E2A: push    ecx
0x877E2B: mov     ecx, esi
0x877E2D: call    edx
0x877E2F: mov     eax, [edi+24h]
0x877E32: mov     ebp, [esp+20h+arg_C]
0x877E36: mov     ebx, [eax]
0x877E38: mov     edx, [ebp+0]
0x877E3B: mov     eax, [edx+88h]
0x877E41: push    0
0x877E43: mov     ecx, ebp
0x877E45: mov     [esp+24h+arg_8], ebx
0x877E49: call    eax
0x877E4B: mov     ebx, [ebx+4]
0x877E4E: cmp     ebx, eax
0x877E50: mov     [esp+20h+arg_0], eax
0x877E54: jz      short loc_877E8F
0x877E56: test    ebx, ebx
0x877E58: jz      short loc_877E7A
0x877E5A: lea     ecx, [ebx+4]
0x877E5D: push    ecx; lpAddend
0x877E5E: call    dword ptr ds:0A2807Ch
0x877E64: test    eax, eax
0x877E66: jnz     short loc_877E76
0x877E68: test    ebx, ebx
0x877E6A: jz      short loc_877E76
0x877E6C: mov     edx, [ebx]
0x877E6E: mov     eax, [edx]
0x877E70: push    1
0x877E72: mov     ecx, ebx
0x877E74: call    eax
0x877E76: mov     eax, [esp+20h+arg_0]
0x877E7A: test    eax, eax
0x877E7C: mov     ecx, [esp+20h+arg_8]
0x877E80: mov     [ecx+4], eax
0x877E83: jz      short loc_877E8F
0x877E85: add     eax, 4
0x877E88: push    eax; lpAddend
0x877E89: call    dword ptr ds:0A28078h
0x877E8F: mov     edx, [edi+24h]
0x877E92: mov     ebx, [edx+4]
0x877E95: push    0
0x877E97: push    ebp
0x877E98: mov     ecx, esi
0x877E9A: mov     [esp+28h+arg_8], ebx
0x877E9E: call    sub_848FD0
0x877EA3: mov     ebx, [ebx+4]
0x877EA6: cmp     ebx, eax
0x877EA8: mov     [esp+20h+arg_0], eax
0x877EAC: jz      short loc_877EE7
0x877EAE: test    ebx, ebx
0x877EB0: jz      short loc_877ED2
0x877EB2: lea     eax, [ebx+4]
0x877EB5: push    eax; lpAddend
0x877EB6: call    dword ptr ds:0A2807Ch
0x877EBC: test    eax, eax
0x877EBE: jnz     short loc_877ECE
0x877EC0: test    ebx, ebx
0x877EC2: jz      short loc_877ECE
0x877EC4: mov     edx, [ebx]
0x877EC6: mov     eax, [edx]
0x877EC8: push    1
0x877ECA: mov     ecx, ebx
0x877ECC: call    eax
0x877ECE: mov     eax, [esp+20h+arg_0]
0x877ED2: test    eax, eax
0x877ED4: mov     ecx, [esp+20h+arg_8]
0x877ED8: mov     [ecx+4], eax
0x877EDB: jz      short loc_877EE7
0x877EDD: add     eax, 4
0x877EE0: push    eax; lpAddend
0x877EE1: call    dword ptr ds:0A28078h
0x877EE7: mov     edx, [edi+24h]
0x877EEA: mov     eax, [edx+10h]
0x877EED: mov     edx, [ebp+0]
0x877EF0: mov     [esp+20h+arg_8], eax
0x877EF4: mov     eax, [edx+90h]
0x877EFA: push    0
0x877EFC: mov     ecx, ebp
0x877EFE: call    eax
0x877F00: mov     ecx, [esp+20h+arg_8]
0x877F04: mov     ebp, [ecx+4]
0x877F07: mov     ebx, eax
0x877F09: cmp     ebp, ebx
0x877F0B: jz      short loc_877F43
0x877F0D: test    ebp, ebp
0x877F0F: jz      short loc_877F2E
0x877F11: lea     edx, [ebp+4]
0x877F14: push    edx; lpAddend
0x877F15: call    dword ptr ds:0A2807Ch
0x877F1B: test    eax, eax
0x877F1D: jnz     short loc_877F2E
0x877F1F: test    ebp, ebp
0x877F21: jz      short loc_877F2E
0x877F23: mov     eax, [ebp+0]
0x877F26: mov     edx, [eax]
0x877F28: push    1
0x877F2A: mov     ecx, ebp
0x877F2C: call    edx
0x877F2E: test    ebx, ebx
0x877F30: mov     eax, [esp+20h+arg_8]
0x877F34: mov     [eax+4], ebx
0x877F37: jz      short loc_877F43
0x877F39: add     ebx, 4
0x877F3C: push    ebx; lpAddend
0x877F3D: call    dword ptr ds:0A28078h
0x877F43: mov     ecx, [edi+24h]
0x877F46: mov     ebp, [ecx+14h]
0x877F49: mov     eax, ds:0B43110h
0x877F4E: mov     ebx, [ebp+4]
0x877F51: cmp     ebx, eax
0x877F53: mov     ecx, eax
0x877F55: mov     [esp+20h+arg_8], ecx
0x877F59: jz      short loc_877F90
0x877F5B: test    ebx, ebx
0x877F5D: jz      short loc_877F7F
0x877F5F: lea     edx, [ebx+4]
0x877F62: push    edx; lpAddend
0x877F63: call    dword ptr ds:0A2807Ch
0x877F69: test    eax, eax
0x877F6B: jnz     short loc_877F7B
0x877F6D: test    ebx, ebx
0x877F6F: jz      short loc_877F7B
0x877F71: mov     eax, [ebx]
0x877F73: mov     edx, [eax]
0x877F75: push    1
0x877F77: mov     ecx, ebx
0x877F79: call    edx
0x877F7B: mov     ecx, [esp+20h+arg_8]
0x877F7F: test    ecx, ecx
0x877F81: mov     [ebp+4], ecx
0x877F84: jz      short loc_877F90
0x877F86: add     ecx, 4
0x877F89: push    ecx; lpAddend
0x877F8A: call    dword ptr ds:0A28078h
0x877F90: mov     ebx, 1
0x877F95: add     [edi+60h], ebx
0x877F98: mov     [esp+20h+arg_8], edi
0x877F9C: mov     ecx, [esi+38h]
0x877F9F: lea     eax, [esp+20h+arg_8]
0x877FA3: push    eax
0x877FA4: push    ecx
0x877FA5: lea     ecx, [esi+40h]
0x877FA8: mov     [esp+28h+var_4], 0
0x877FB0: call    sub_76CE40
0x877FB5: or      eax, 0FFFFFFFFh
0x877FB8: add     [edi+60h], eax
0x877FBB: mov     [esp+20h+var_4], eax
0x877FBF: jnz     short loc_877FC8
0x877FC1: mov     ecx, edi
0x877FC3: call    sub_7604D0
0x877FC8: add     [esi+38h], ebx
0x877FCB: mov     ecx, [esp+20h+var_C]
0x877FCF: mov     large fs:0, ecx
0x877FD6: pop     ecx
0x877FD7: pop     edi
0x877FD8: pop     esi
0x877FD9: pop     ebp
0x877FDA: pop     ebx
0x877FDB: add     esp, 0Ch
0x877FDE: retn    10h
