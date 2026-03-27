0x946D90: sub     esp, 40h
0x946D93: push    ebx
0x946D94: push    ebp
0x946D95: push    esi
0x946D96: mov     esi, ecx
0x946D98: xor     ebp, ebp
0x946D9A: mov     ebx, 1
0x946D9F: mov     [esi+6], bx
0x946DA3: mov     dword ptr [esi+8], offset off_A9D1C0
0x946DAA: mov     [esi+0Ch], bl
0x946DAD: mov     dword ptr [esi], offset off_AA297C
0x946DB3: mov     dword ptr [esi+8], offset off_AA2964
0x946DBA: mov     [esi+20h], ebp
0x946DBD: mov     [esi+24h], ebp
0x946DC0: mov     eax, 80000000h
0x946DC5: mov     [esi+28h], eax
0x946DC8: push    edi
0x946DC9: lea     edi, [esi+2Ch]
0x946DCC: mov     [edi], ebp
0x946DCE: mov     [edi+4], ebp
0x946DD1: mov     [edi+8], eax
0x946DD4: lea     ecx, [esp+50h+var_18]
0x946DD8: mov     [esi+38h], ebp
0x946DDB: mov     [esi+3Ch], ebp
0x946DDE: mov     [esi+40h], eax
0x946DE1: call    sub_9584C0
0x946DE6: mov     [esp+50h+var_18], ebp
0x946DEA: mov     [esp+50h+var_C], ebp
0x946DEE: mov     [esp+50h+var_14], ebp
0x946DF2: mov     [esp+50h+var_10], ebx
0x946DF6: call    sub_917FD0
0x946DFB: mov     dword ptr [esp+50h+var_40], eax
0x946DFF: mov     eax, edx
0x946E01: and     edx, 7FFFFFFFh
0x946E07: mov     dword ptr [esp+50h+var_40+4], edx
0x946E0B: fild    [esp+50h+var_40]
0x946E0F: and     eax, 80000000h
0x946E14: mov     dword ptr [esp+50h+var_40+4], eax
0x946E18: mov     dword ptr [esp+50h+var_40], ebp
0x946E1C: fild    [esp+50h+var_40]
0x946E20: push    ebx
0x946E21: push    edi
0x946E22: fchs
0x946E24: lea     ecx, [esp+58h+var_2C]
0x946E28: faddp   st(1), st
0x946E2A: mov     [esp+58h+var_4], 3F800000h
0x946E32: mov     [esp+58h+var_38], ebp
0x946E36: mov     [esp+58h+var_34], ebp
0x946E3A: fdivr   dword ptr ds:0A342A4h
0x946E40: mov     [esp+58h+var_30], 80000000h
0x946E48: fstp    [esp+58h+var_8]
0x946E4C: call    sub_8BC030
0x946E51: push    offset dword_A9C288
0x946E56: lea     ecx, [esp+54h+var_40]
0x946E5A: call    sub_90BBA0
0x946E5F: lea     eax, [esp+50h+var_38]
0x946E63: push    eax
0x946E64: push    offset unk_BA99F8
0x946E69: lea     ecx, [esp+58h+var_18]
0x946E6D: push    ecx
0x946E6E: push    ebp
0x946E6F: push    ebx
0x946E70: lea     edx, [esp+64h+var_40]
0x946E74: push    edx
0x946E75: lea     eax, [esp+68h+var_2C]
0x946E79: push    eax
0x946E7A: call    sub_9582E0
0x946E7F: add     esp, 1Ch
0x946E82: lea     ecx, [esp+50h+var_2C]
0x946E86: call    sub_8BC2E0
0x946E8B: mov     eax, [esp+50h+var_30]
0x946E8F: test    eax, eax
0x946E91: mov     ebx, ds:0BA9DE4h
0x946E97: js      short loc_946ECB
0x946E99: mov     ecx, large fs:2Ch
0x946EA0: mov     edx, [ecx+ebx*4]
0x946EA3: mov     ecx, [edx+19Ch]
0x946EA9: cmp     ecx, ebp
0x946EAB: jnz     short loc_946EB3
0x946EAD: mov     ecx, ds:0BA7D9Ch
0x946EB3: mov     edx, [esp+50h+var_38]
0x946EB7: and     eax, 3FFFFFFFh
0x946EBC: lea     eax, [eax+eax*2]
0x946EBF: push    14h
0x946EC1: shl     eax, 3
0x946EC4: push    eax
0x946EC5: push    edx
0x946EC6: call    sub_8A75D0
0x946ECB: mov     ecx, [esi+28h]
0x946ECE: mov     edi, [esp+50h+arg_0]
0x946ED2: mov     edx, [edi+4]
0x946ED5: mov     eax, ecx
0x946ED7: and     eax, 3FFFFFFFh
0x946EDC: cmp     eax, edx
0x946EDE: jge     short loc_946F48
0x946EE0: test    ecx, ecx
0x946EE2: js      short loc_946F0D
0x946EE4: mov     ecx, large fs:2Ch
0x946EEB: mov     edx, [ecx+ebx*4]
0x946EEE: mov     ecx, [edx+19Ch]
0x946EF4: cmp     ecx, ebp
0x946EF6: jnz     short loc_946EFE
0x946EF8: mov     ecx, ds:0BA7D9Ch
0x946EFE: mov     edx, [esi+20h]
0x946F01: push    14h
0x946F03: shl     eax, 2
0x946F06: push    eax
0x946F07: push    edx
0x946F08: call    sub_8A75D0
0x946F0D: mov     eax, large fs:2Ch
0x946F13: mov     ecx, [eax+ebx*4]
0x946F16: mov     eax, [ecx+19Ch]
0x946F1C: cmp     eax, ebp
0x946F1E: jnz     short loc_946F25
0x946F20: mov     eax, ds:0BA7D9Ch
0x946F25: mov     edx, [edi+4]
0x946F28: push    14h
0x946F2A: shl     edx, 2
0x946F2D: push    edx
0x946F2E: mov     ecx, eax
0x946F30: call    sub_8A7560
0x946F35: mov     [esi+20h], eax
0x946F38: mov     eax, [esi+28h]
0x946F3B: mov     ecx, [edi+4]
0x946F3E: and     eax, 40000000h
0x946F43: or      eax, ecx
0x946F45: mov     [esi+28h], eax
0x946F48: mov     ecx, [edi+4]
0x946F4B: cmp     ecx, ebp
0x946F4D: mov     eax, [esi+20h]
0x946F50: mov     [esi+24h], ecx
0x946F53: mov     edx, [edi]
0x946F55: jle     short loc_946F6B
0x946F57: sub     edx, eax
0x946F59: lea     esp, [esp+0]
0x946F60: mov     edi, [edx+eax]
0x946F63: mov     [eax], edi
0x946F65: add     eax, 4
0x946F68: dec     ecx
0x946F69: jnz     short loc_946F60
0x946F6B: pop     edi
0x946F6C: mov     eax, esi
0x946F6E: pop     esi
0x946F6F: pop     ebp
0x946F70: pop     ebx
0x946F71: add     esp, 40h
0x946F74: retn    4
