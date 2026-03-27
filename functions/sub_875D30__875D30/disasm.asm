0x875D30: push    0FFFFFFFFh
0x875D32: push    offset SEH_882120
0x875D37: mov     eax, large fs:0
0x875D3D: push    eax
0x875D3E: push    ebx
0x875D3F: push    ebp
0x875D40: push    esi
0x875D41: push    edi
0x875D42: mov     eax, ds:0B30AACh
0x875D47: xor     eax, esp
0x875D49: push    eax
0x875D4A: lea     eax, [esp+20h+var_C]
0x875D4E: mov     large fs:0, eax
0x875D54: mov     esi, ecx
0x875D56: mov     eax, [esp+20h+arg_8]
0x875D5A: mov     ebx, [eax+0Ch]
0x875D5D: mov     edi, ds:0B4766Ch
0x875D63: push    ebx
0x875D64: call    sub_848E50
0x875D69: mov     edx, [esi]
0x875D6B: mov     eax, [esp+20h+arg_0]
0x875D6F: mov     edx, [edx+0BCh]
0x875D75: push    0
0x875D77: push    ebx
0x875D78: push    eax
0x875D79: mov     ecx, esi
0x875D7B: call    edx
0x875D7D: mov     eax, [edi+24h]
0x875D80: mov     ebp, [esp+20h+arg_C]
0x875D84: mov     ebx, [eax]
0x875D86: mov     edx, [ebp+0]
0x875D89: mov     eax, [edx+88h]
0x875D8F: push    0
0x875D91: mov     ecx, ebp
0x875D93: mov     [esp+24h+arg_8], ebx
0x875D97: call    eax
0x875D99: mov     ebx, [ebx+4]
0x875D9C: cmp     ebx, eax
0x875D9E: mov     [esp+20h+arg_0], eax
0x875DA2: jz      short loc_875DDD
0x875DA4: test    ebx, ebx
0x875DA6: jz      short loc_875DC8
0x875DA8: lea     ecx, [ebx+4]
0x875DAB: push    ecx; lpAddend
0x875DAC: call    dword ptr ds:0A2807Ch
0x875DB2: test    eax, eax
0x875DB4: jnz     short loc_875DC4
0x875DB6: test    ebx, ebx
0x875DB8: jz      short loc_875DC4
0x875DBA: mov     edx, [ebx]
0x875DBC: mov     eax, [edx]
0x875DBE: push    1
0x875DC0: mov     ecx, ebx
0x875DC2: call    eax
0x875DC4: mov     eax, [esp+20h+arg_0]
0x875DC8: test    eax, eax
0x875DCA: mov     ecx, [esp+20h+arg_8]
0x875DCE: mov     [ecx+4], eax
0x875DD1: jz      short loc_875DDD
0x875DD3: add     eax, 4
0x875DD6: push    eax; lpAddend
0x875DD7: call    dword ptr ds:0A28078h
0x875DDD: mov     edx, [edi+24h]
0x875DE0: mov     ebx, [edx+4]
0x875DE3: push    0
0x875DE5: push    ebp
0x875DE6: mov     ecx, esi
0x875DE8: mov     [esp+28h+arg_8], ebx
0x875DEC: call    sub_848FD0
0x875DF1: mov     ebx, [ebx+4]
0x875DF4: cmp     ebx, eax
0x875DF6: mov     [esp+20h+arg_0], eax
0x875DFA: jz      short loc_875E35
0x875DFC: test    ebx, ebx
0x875DFE: jz      short loc_875E20
0x875E00: lea     eax, [ebx+4]
0x875E03: push    eax; lpAddend
0x875E04: call    dword ptr ds:0A2807Ch
0x875E0A: test    eax, eax
0x875E0C: jnz     short loc_875E1C
0x875E0E: test    ebx, ebx
0x875E10: jz      short loc_875E1C
0x875E12: mov     edx, [ebx]
0x875E14: mov     eax, [edx]
0x875E16: push    1
0x875E18: mov     ecx, ebx
0x875E1A: call    eax
0x875E1C: mov     eax, [esp+20h+arg_0]
0x875E20: test    eax, eax
0x875E22: mov     ecx, [esp+20h+arg_8]
0x875E26: mov     [ecx+4], eax
0x875E29: jz      short loc_875E35
0x875E2B: add     eax, 4
0x875E2E: push    eax; lpAddend
0x875E2F: call    dword ptr ds:0A28078h
0x875E35: mov     edx, [edi+24h]
0x875E38: mov     eax, [edx+10h]
0x875E3B: mov     edx, [ebp+0]
0x875E3E: mov     [esp+20h+arg_8], eax
0x875E42: mov     eax, [edx+90h]
0x875E48: push    0
0x875E4A: mov     ecx, ebp
0x875E4C: call    eax
0x875E4E: mov     ecx, [esp+20h+arg_8]
0x875E52: mov     ebp, [ecx+4]
0x875E55: mov     ebx, eax
0x875E57: cmp     ebp, ebx
0x875E59: jz      short loc_875E91
0x875E5B: test    ebp, ebp
0x875E5D: jz      short loc_875E7C
0x875E5F: lea     edx, [ebp+4]
0x875E62: push    edx; lpAddend
0x875E63: call    dword ptr ds:0A2807Ch
0x875E69: test    eax, eax
0x875E6B: jnz     short loc_875E7C
0x875E6D: test    ebp, ebp
0x875E6F: jz      short loc_875E7C
0x875E71: mov     eax, [ebp+0]
0x875E74: mov     edx, [eax]
0x875E76: push    1
0x875E78: mov     ecx, ebp
0x875E7A: call    edx
0x875E7C: test    ebx, ebx
0x875E7E: mov     eax, [esp+20h+arg_8]
0x875E82: mov     [eax+4], ebx
0x875E85: jz      short loc_875E91
0x875E87: add     ebx, 4
0x875E8A: push    ebx; lpAddend
0x875E8B: call    dword ptr ds:0A28078h
0x875E91: mov     ebx, 1
0x875E96: add     [edi+60h], ebx
0x875E99: mov     [esp+20h+arg_8], edi
0x875E9D: mov     edx, [esi+38h]
0x875EA0: lea     ecx, [esp+20h+arg_8]
0x875EA4: push    ecx
0x875EA5: push    edx
0x875EA6: lea     ecx, [esi+40h]
0x875EA9: mov     [esp+28h+var_4], 0
0x875EB1: call    sub_76CE40
0x875EB6: or      eax, 0FFFFFFFFh
0x875EB9: add     [edi+60h], eax
0x875EBC: mov     [esp+20h+var_4], eax
0x875EC0: jnz     short loc_875EC9
0x875EC2: mov     ecx, edi
0x875EC4: call    sub_7604D0
0x875EC9: add     [esi+38h], ebx
0x875ECC: mov     ecx, [esp+20h+var_C]
0x875ED0: mov     large fs:0, ecx
0x875ED7: pop     ecx
0x875ED8: pop     edi
0x875ED9: pop     esi
0x875EDA: pop     ebp
0x875EDB: pop     ebx
0x875EDC: add     esp, 0Ch
0x875EDF: retn    10h
