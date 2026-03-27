0x8C8E70: push    0FFFFFFFFh
0x8C8E72: push    offset SEH_8C8E70
0x8C8E77: mov     eax, large fs:0
0x8C8E7D: push    eax
0x8C8E7E: sub     esp, 1Ch
0x8C8E81: push    ebx
0x8C8E82: push    ebp
0x8C8E83: push    esi
0x8C8E84: push    edi
0x8C8E85: mov     eax, ds:0B30AACh
0x8C8E8A: xor     eax, esp
0x8C8E8C: push    eax
0x8C8E8D: lea     eax, [esp+3Ch+var_C]
0x8C8E91: mov     large fs:0, eax
0x8C8E97: mov     edi, ecx
0x8C8E99: mov     eax, [edi]
0x8C8E9B: mov     edx, [eax+74h]
0x8C8E9E: lea     ecx, [esp+3Ch+var_28]
0x8C8EA2: push    ecx
0x8C8EA3: mov     ecx, edi
0x8C8EA5: call    edx
0x8C8EA7: mov     esi, eax
0x8C8EA9: xor     ebx, ebx
0x8C8EAB: mov     eax, 80000000h
0x8C8EB0: mov     [esp+3Ch+var_18], ebx
0x8C8EB4: mov     [esp+3Ch+var_14], ebx
0x8C8EB8: mov     [esp+3Ch+var_10], eax
0x8C8EBC: mov     [esp+3Ch+var_4], ebx
0x8C8EC0: mov     [esp+3Ch+var_24], ebx
0x8C8EC4: mov     [esp+3Ch+var_20], ebx
0x8C8EC8: mov     [esp+3Ch+var_1C], eax
0x8C8ECC: cmp     esi, ebx
0x8C8ECE: mov     byte ptr [esp+3Ch+var_4], 1
0x8C8ED3: jz      short loc_8C8F25
0x8C8ED5: mov     eax, [esi+8]
0x8C8ED8: mov     [esp+3Ch+var_18], eax
0x8C8EDC: mov     ecx, [esi+0Ch]
0x8C8EDF: mov     [esi+8], ebx
0x8C8EE2: mov     eax, [esp+3Ch+var_14]
0x8C8EE6: mov     [esp+3Ch+var_14], ecx
0x8C8EEA: mov     edx, [esi+10h]
0x8C8EED: mov     [esi+0Ch], eax
0x8C8EF0: mov     eax, [esp+3Ch+var_10]
0x8C8EF4: mov     [esp+3Ch+var_10], edx
0x8C8EF8: mov     [esi+10h], eax
0x8C8EFB: mov     ecx, [esi+14h]
0x8C8EFE: mov     eax, [esp+3Ch+var_24]
0x8C8F02: mov     [esp+3Ch+var_24], ecx
0x8C8F06: mov     edx, [esi+18h]
0x8C8F09: mov     [esi+14h], eax
0x8C8F0C: mov     eax, [esp+3Ch+var_20]
0x8C8F10: mov     [esp+3Ch+var_20], edx
0x8C8F14: mov     ecx, [esi+1Ch]
0x8C8F17: mov     [esi+18h], eax
0x8C8F1A: mov     eax, [esp+3Ch+var_1C]
0x8C8F1E: mov     [esp+3Ch+var_1C], ecx
0x8C8F22: mov     [esi+1Ch], eax
0x8C8F25: mov     ebp, [esp+3Ch+arg_0]
0x8C8F29: push    ebp
0x8C8F2A: mov     ecx, edi
0x8C8F2C: call    sub_8A2610
0x8C8F31: cmp     esi, ebx
0x8C8F33: jz      short loc_8C8F5C
0x8C8F35: lea     edx, [esp+3Ch+var_18]
0x8C8F39: push    edx
0x8C8F3A: push    ebp
0x8C8F3B: call    sub_8E81B0
0x8C8F40: lea     eax, [esp+44h+var_24]
0x8C8F44: push    eax
0x8C8F45: push    ebp
0x8C8F46: call    sub_8E81B0
0x8C8F4B: mov     edx, [edi]
0x8C8F4D: mov     eax, [esp+4Ch+var_28]
0x8C8F51: mov     edx, [edx+64h]
0x8C8F54: add     esp, 10h
0x8C8F57: push    eax
0x8C8F58: mov     ecx, edi
0x8C8F5A: call    edx
0x8C8F5C: mov     eax, [esp+3Ch+var_1C]
0x8C8F60: test    eax, eax
0x8C8F62: mov     esi, ds:0BA9DE4h
0x8C8F68: mov     edi, large fs:2Ch
0x8C8F6F: mov     byte ptr [esp+3Ch+var_4], bl
0x8C8F73: js      short loc_8C8F9D
0x8C8F75: mov     ecx, [edi+esi*4]
0x8C8F78: mov     ecx, [ecx+19Ch]
0x8C8F7E: cmp     ecx, ebx
0x8C8F80: jnz     short loc_8C8F88
0x8C8F82: mov     ecx, ds:0BA7D9Ch
0x8C8F88: mov     edx, [esp+3Ch+var_24]
0x8C8F8C: and     eax, 3FFFFFFFh
0x8C8F91: push    14h
0x8C8F93: shl     eax, 4
0x8C8F96: push    eax
0x8C8F97: push    edx
0x8C8F98: call    sub_8A75D0
0x8C8F9D: mov     eax, [esp+3Ch+var_10]
0x8C8FA1: test    eax, eax
0x8C8FA3: mov     [esp+3Ch+var_4], 0FFFFFFFFh
0x8C8FAB: js      short loc_8C8FD5
0x8C8FAD: mov     ecx, [edi+esi*4]
0x8C8FB0: mov     ecx, [ecx+19Ch]
0x8C8FB6: cmp     ecx, ebx
0x8C8FB8: jnz     short loc_8C8FC0
0x8C8FBA: mov     ecx, ds:0BA7D9Ch
0x8C8FC0: mov     edx, [esp+3Ch+var_18]
0x8C8FC4: and     eax, 3FFFFFFFh
0x8C8FC9: push    14h
0x8C8FCB: shl     eax, 4
0x8C8FCE: push    eax
0x8C8FCF: push    edx
0x8C8FD0: call    sub_8A75D0
0x8C8FD5: mov     ecx, [esp+3Ch+var_C]
0x8C8FD9: mov     large fs:0, ecx
0x8C8FE0: pop     ecx
0x8C8FE1: pop     edi
0x8C8FE2: pop     esi
0x8C8FE3: pop     ebp
0x8C8FE4: pop     ebx
0x8C8FE5: add     esp, 28h
0x8C8FE8: retn    4
