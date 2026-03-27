0x873E50: push    0FFFFFFFFh
0x873E52: push    offset SEH_880560
0x873E57: mov     eax, large fs:0
0x873E5D: push    eax
0x873E5E: push    ebx
0x873E5F: push    ebp
0x873E60: push    esi
0x873E61: push    edi
0x873E62: mov     eax, ds:0B30AACh
0x873E67: xor     eax, esp
0x873E69: push    eax
0x873E6A: lea     eax, [esp+20h+var_C]
0x873E6E: mov     large fs:0, eax
0x873E74: mov     esi, ecx
0x873E76: mov     ebx, [esp+20h+arg_8]
0x873E7A: mov     eax, [ebx+10h]
0x873E7D: mov     edi, ds:0B47630h
0x873E83: push    eax
0x873E84: call    sub_848C40
0x873E89: mov     ebx, [ebx+0Ch]
0x873E8C: push    ebx
0x873E8D: mov     ecx, esi
0x873E8F: call    sub_848E50
0x873E94: mov     ecx, [esp+20h+arg_0]
0x873E98: mov     eax, [esi]
0x873E9A: mov     edx, [eax+0BCh]
0x873EA0: push    0
0x873EA2: push    ebx
0x873EA3: push    ecx
0x873EA4: mov     ecx, esi
0x873EA6: call    edx
0x873EA8: mov     eax, [edi+24h]
0x873EAB: mov     ecx, [esp+20h+arg_C]
0x873EAF: mov     ebx, [eax]
0x873EB1: mov     edx, [ecx]
0x873EB3: mov     eax, [edx+88h]
0x873EB9: push    0
0x873EBB: mov     [esp+24h+arg_8], ebx
0x873EBF: call    eax
0x873EC1: mov     ebx, [ebx+4]
0x873EC4: mov     ebp, eax
0x873EC6: cmp     ebx, ebp
0x873EC8: jz      short loc_873EFF
0x873ECA: test    ebx, ebx
0x873ECC: jz      short loc_873EEA
0x873ECE: lea     ecx, [ebx+4]
0x873ED1: push    ecx; lpAddend
0x873ED2: call    dword ptr ds:0A2807Ch
0x873ED8: test    eax, eax
0x873EDA: jnz     short loc_873EEA
0x873EDC: test    ebx, ebx
0x873EDE: jz      short loc_873EEA
0x873EE0: mov     edx, [ebx]
0x873EE2: mov     eax, [edx]
0x873EE4: push    1
0x873EE6: mov     ecx, ebx
0x873EE8: call    eax
0x873EEA: test    ebp, ebp
0x873EEC: mov     ecx, [esp+20h+arg_8]
0x873EF0: mov     [ecx+4], ebp
0x873EF3: jz      short loc_873EFF
0x873EF5: add     ebp, 4
0x873EF8: push    ebp; lpAddend
0x873EF9: call    dword ptr ds:0A28078h
0x873EFF: mov     edx, [edi+24h]
0x873F02: mov     eax, [esp+20h+arg_C]
0x873F06: mov     ebx, [edx+4]
0x873F09: push    0
0x873F0B: push    eax
0x873F0C: mov     ecx, esi
0x873F0E: mov     [esp+28h+arg_8], ebx
0x873F12: call    sub_848FD0
0x873F17: mov     ebx, [ebx+4]
0x873F1A: mov     ebp, eax
0x873F1C: cmp     ebx, ebp
0x873F1E: jz      short loc_873F55
0x873F20: test    ebx, ebx
0x873F22: jz      short loc_873F40
0x873F24: lea     ecx, [ebx+4]
0x873F27: push    ecx; lpAddend
0x873F28: call    dword ptr ds:0A2807Ch
0x873F2E: test    eax, eax
0x873F30: jnz     short loc_873F40
0x873F32: test    ebx, ebx
0x873F34: jz      short loc_873F40
0x873F36: mov     edx, [ebx]
0x873F38: mov     eax, [edx]
0x873F3A: push    1
0x873F3C: mov     ecx, ebx
0x873F3E: call    eax
0x873F40: test    ebp, ebp
0x873F42: mov     ecx, [esp+20h+arg_8]
0x873F46: mov     [ecx+4], ebp
0x873F49: jz      short loc_873F55
0x873F4B: add     ebp, 4
0x873F4E: push    ebp; lpAddend
0x873F4F: call    dword ptr ds:0A28078h
0x873F55: mov     edx, [edi+24h]
0x873F58: mov     ebx, [edx+10h]
0x873F5B: mov     eax, ds:0B43110h
0x873F60: mov     ebp, [ebx+4]
0x873F63: add     ebx, 4
0x873F66: cmp     ebp, eax
0x873F68: mov     [esp+20h+arg_C], eax
0x873F6C: jz      short loc_873FA3
0x873F6E: test    ebp, ebp
0x873F70: jz      short loc_873F93
0x873F72: lea     eax, [ebp+4]
0x873F75: push    eax; lpAddend
0x873F76: call    dword ptr ds:0A2807Ch
0x873F7C: test    eax, eax
0x873F7E: jnz     short loc_873F8F
0x873F80: test    ebp, ebp
0x873F82: jz      short loc_873F8F
0x873F84: mov     edx, [ebp+0]
0x873F87: mov     eax, [edx]
0x873F89: push    1
0x873F8B: mov     ecx, ebp
0x873F8D: call    eax
0x873F8F: mov     eax, [esp+20h+arg_C]
0x873F93: test    eax, eax
0x873F95: mov     [ebx], eax
0x873F97: jz      short loc_873FA3
0x873F99: add     eax, 4
0x873F9C: push    eax; lpAddend
0x873F9D: call    dword ptr ds:0A28078h
0x873FA3: mov     ecx, [edi+24h]
0x873FA6: mov     ebx, [ecx+14h]
0x873FA9: mov     eax, ds:0B43108h
0x873FAE: mov     ebp, [ebx+4]
0x873FB1: add     ebx, 4
0x873FB4: cmp     ebp, eax
0x873FB6: mov     [esp+20h+arg_C], eax
0x873FBA: jz      short loc_873FF1
0x873FBC: test    ebp, ebp
0x873FBE: jz      short loc_873FE1
0x873FC0: lea     edx, [ebp+4]
0x873FC3: push    edx; lpAddend
0x873FC4: call    dword ptr ds:0A2807Ch
0x873FCA: test    eax, eax
0x873FCC: jnz     short loc_873FDD
0x873FCE: test    ebp, ebp
0x873FD0: jz      short loc_873FDD
0x873FD2: mov     eax, [ebp+0]
0x873FD5: mov     edx, [eax]
0x873FD7: push    1
0x873FD9: mov     ecx, ebp
0x873FDB: call    edx
0x873FDD: mov     eax, [esp+20h+arg_C]
0x873FE1: test    eax, eax
0x873FE3: mov     [ebx], eax
0x873FE5: jz      short loc_873FF1
0x873FE7: add     eax, 4
0x873FEA: push    eax; lpAddend
0x873FEB: call    dword ptr ds:0A28078h
0x873FF1: mov     eax, [edi+24h]
0x873FF4: mov     ebp, [eax+18h]
0x873FF7: mov     eax, ds:0B4310Ch
0x873FFC: mov     ebx, [ebp+4]
0x873FFF: cmp     ebx, eax
0x874001: mov     ecx, eax
0x874003: mov     [esp+20h+arg_C], ecx
0x874007: jz      short loc_87403E
0x874009: test    ebx, ebx
0x87400B: jz      short loc_87402D
0x87400D: lea     ecx, [ebx+4]
0x874010: push    ecx; lpAddend
0x874011: call    dword ptr ds:0A2807Ch
0x874017: test    eax, eax
0x874019: jnz     short loc_874029
0x87401B: test    ebx, ebx
0x87401D: jz      short loc_874029
0x87401F: mov     edx, [ebx]
0x874021: mov     eax, [edx]
0x874023: push    1
0x874025: mov     ecx, ebx
0x874027: call    eax
0x874029: mov     ecx, [esp+20h+arg_C]
0x87402D: test    ecx, ecx
0x87402F: mov     [ebp+4], ecx
0x874032: jz      short loc_87403E
0x874034: add     ecx, 4
0x874037: push    ecx; lpAddend
0x874038: call    dword ptr ds:0A28078h
0x87403E: mov     ebx, 1
0x874043: add     [edi+60h], ebx
0x874046: mov     [esp+20h+arg_C], edi
0x87404A: mov     edx, [esi+38h]
0x87404D: lea     ecx, [esp+20h+arg_C]
0x874051: push    ecx
0x874052: push    edx
0x874053: lea     ecx, [esi+40h]
0x874056: mov     [esp+28h+var_4], 0
0x87405E: call    sub_76CE40
0x874063: or      eax, 0FFFFFFFFh
0x874066: add     [edi+60h], eax
0x874069: mov     [esp+20h+var_4], eax
0x87406D: jnz     short loc_874076
0x87406F: mov     ecx, edi
0x874071: call    sub_7604D0
0x874076: add     [esi+38h], ebx
0x874079: mov     ecx, [esp+20h+var_C]
0x87407D: mov     large fs:0, ecx
0x874084: pop     ecx
0x874085: pop     edi
0x874086: pop     esi
0x874087: pop     ebp
0x874088: pop     ebx
0x874089: add     esp, 0Ch
0x87408C: retn    10h
