0x842D70: push    0FFFFFFFFh
0x842D72: push    offset SEH_882120
0x842D77: mov     eax, large fs:0
0x842D7D: push    eax
0x842D7E: push    ebx
0x842D7F: push    ebp
0x842D80: push    esi
0x842D81: push    edi
0x842D82: mov     eax, ds:0B30AACh
0x842D87: xor     eax, esp
0x842D89: push    eax
0x842D8A: lea     eax, [esp+20h+var_C]
0x842D8E: mov     large fs:0, eax
0x842D94: mov     esi, ecx
0x842D96: mov     ebx, [esp+20h+arg_8]
0x842D9A: mov     eax, [ebx+10h]
0x842D9D: mov     edi, ds:0B45734h
0x842DA3: push    eax
0x842DA4: call    sub_848C40
0x842DA9: mov     ebx, [ebx+0Ch]
0x842DAC: push    ebx
0x842DAD: mov     ecx, esi
0x842DAF: call    sub_848E50
0x842DB4: mov     ecx, [esp+20h+arg_0]
0x842DB8: mov     eax, [esi]
0x842DBA: mov     edx, [eax+0BCh]
0x842DC0: push    0
0x842DC2: push    ebx
0x842DC3: push    ecx
0x842DC4: mov     ecx, esi
0x842DC6: call    edx
0x842DC8: mov     eax, [edi+24h]
0x842DCB: mov     ebx, [esp+20h+arg_C]
0x842DCF: mov     ebp, [eax]
0x842DD1: mov     edx, [ebx]
0x842DD3: mov     eax, [edx+88h]
0x842DD9: push    0
0x842DDB: mov     ecx, ebx
0x842DDD: mov     [esp+24h+arg_8], ebp
0x842DE1: call    eax
0x842DE3: mov     ebp, [ebp+4]
0x842DE6: cmp     ebp, eax
0x842DE8: mov     [esp+20h+arg_0], eax
0x842DEC: jz      short loc_842E28
0x842DEE: test    ebp, ebp
0x842DF0: jz      short loc_842E13
0x842DF2: lea     ecx, [ebp+4]
0x842DF5: push    ecx; lpAddend
0x842DF6: call    dword ptr ds:0A2807Ch
0x842DFC: test    eax, eax
0x842DFE: jnz     short loc_842E0F
0x842E00: test    ebp, ebp
0x842E02: jz      short loc_842E0F
0x842E04: mov     edx, [ebp+0]
0x842E07: mov     eax, [edx]
0x842E09: push    1
0x842E0B: mov     ecx, ebp
0x842E0D: call    eax
0x842E0F: mov     eax, [esp+20h+arg_0]
0x842E13: test    eax, eax
0x842E15: mov     ecx, [esp+20h+arg_8]
0x842E19: mov     [ecx+4], eax
0x842E1C: jz      short loc_842E28
0x842E1E: add     eax, 4
0x842E21: push    eax; lpAddend
0x842E22: call    dword ptr ds:0A28078h
0x842E28: mov     edx, [esp+20h+arg_8]
0x842E2C: push    ebx
0x842E2D: push    edx
0x842E2E: mov     ecx, esi
0x842E30: call    sub_848FA0
0x842E35: mov     eax, [edi+24h]
0x842E38: mov     ebp, [eax+4]
0x842E3B: push    0
0x842E3D: push    ebx
0x842E3E: mov     ecx, esi
0x842E40: mov     [esp+28h+arg_8], ebp
0x842E44: call    sub_848FD0
0x842E49: mov     ebp, [ebp+4]
0x842E4C: cmp     ebp, eax
0x842E4E: mov     [esp+20h+arg_0], eax
0x842E52: jz      short loc_842E8E
0x842E54: test    ebp, ebp
0x842E56: jz      short loc_842E79
0x842E58: lea     ecx, [ebp+4]
0x842E5B: push    ecx; lpAddend
0x842E5C: call    dword ptr ds:0A2807Ch
0x842E62: test    eax, eax
0x842E64: jnz     short loc_842E75
0x842E66: test    ebp, ebp
0x842E68: jz      short loc_842E75
0x842E6A: mov     edx, [ebp+0]
0x842E6D: mov     eax, [edx]
0x842E6F: push    1
0x842E71: mov     ecx, ebp
0x842E73: call    eax
0x842E75: mov     eax, [esp+20h+arg_0]
0x842E79: test    eax, eax
0x842E7B: mov     ecx, [esp+20h+arg_8]
0x842E7F: mov     [ecx+4], eax
0x842E82: jz      short loc_842E8E
0x842E84: add     eax, 4
0x842E87: push    eax; lpAddend
0x842E88: call    dword ptr ds:0A28078h
0x842E8E: mov     edx, [esp+20h+arg_8]
0x842E92: push    ebx
0x842E93: push    edx
0x842E94: mov     ecx, esi
0x842E96: call    sub_848FA0
0x842E9B: mov     ebx, 1
0x842EA0: add     [edi+60h], ebx
0x842EA3: mov     [esp+20h+arg_8], edi
0x842EA7: mov     ecx, [esi+38h]
0x842EAA: lea     eax, [esp+20h+arg_8]
0x842EAE: push    eax
0x842EAF: push    ecx
0x842EB0: lea     ecx, [esi+40h]
0x842EB3: mov     [esp+28h+var_4], 0
0x842EBB: call    sub_76CE40
0x842EC0: or      eax, 0FFFFFFFFh
0x842EC3: add     [edi+60h], eax
0x842EC6: mov     [esp+20h+var_4], eax
0x842ECA: jnz     short loc_842ED3
0x842ECC: mov     ecx, edi
0x842ECE: call    sub_7604D0
0x842ED3: add     [esi+38h], ebx
0x842ED6: mov     ecx, [esp+20h+var_C]
0x842EDA: mov     large fs:0, ecx
0x842EE1: pop     ecx
0x842EE2: pop     edi
0x842EE3: pop     esi
0x842EE4: pop     ebp
0x842EE5: pop     ebx
0x842EE6: add     esp, 0Ch
0x842EE9: retn    10h
