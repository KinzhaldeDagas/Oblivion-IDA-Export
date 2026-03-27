0x874D30: push    0FFFFFFFFh
0x874D32: push    offset SEH_882120
0x874D37: mov     eax, large fs:0
0x874D3D: push    eax
0x874D3E: push    ebx
0x874D3F: push    ebp
0x874D40: push    esi
0x874D41: push    edi
0x874D42: mov     eax, ds:0B30AACh
0x874D47: xor     eax, esp
0x874D49: push    eax
0x874D4A: lea     eax, [esp+20h+var_C]
0x874D4E: mov     large fs:0, eax
0x874D54: mov     edi, ecx
0x874D56: mov     eax, [esp+20h+arg_8]
0x874D5A: mov     ebx, [eax+0Ch]
0x874D5D: mov     esi, ds:0B4764Ch
0x874D63: push    ebx
0x874D64: call    sub_848E50
0x874D69: mov     edx, [edi]
0x874D6B: mov     eax, [esp+20h+arg_0]
0x874D6F: mov     edx, [edx+0BCh]
0x874D75: push    0
0x874D77: push    ebx
0x874D78: push    eax
0x874D79: mov     ecx, edi
0x874D7B: call    edx
0x874D7D: mov     eax, [esi+24h]
0x874D80: mov     ebp, [esp+20h+arg_C]
0x874D84: mov     ebx, [eax]
0x874D86: mov     edx, [ebp+0]
0x874D89: mov     eax, [edx+88h]
0x874D8F: push    0
0x874D91: mov     ecx, ebp
0x874D93: mov     [esp+24h+arg_8], ebx
0x874D97: call    eax
0x874D99: mov     ebx, [ebx+4]
0x874D9C: cmp     ebx, eax
0x874D9E: mov     [esp+20h+arg_0], eax
0x874DA2: jz      short loc_874DDD
0x874DA4: test    ebx, ebx
0x874DA6: jz      short loc_874DC8
0x874DA8: lea     ecx, [ebx+4]
0x874DAB: push    ecx; lpAddend
0x874DAC: call    dword ptr ds:0A2807Ch
0x874DB2: test    eax, eax
0x874DB4: jnz     short loc_874DC4
0x874DB6: test    ebx, ebx
0x874DB8: jz      short loc_874DC4
0x874DBA: mov     edx, [ebx]
0x874DBC: mov     eax, [edx]
0x874DBE: push    1
0x874DC0: mov     ecx, ebx
0x874DC2: call    eax
0x874DC4: mov     eax, [esp+20h+arg_0]
0x874DC8: test    eax, eax
0x874DCA: mov     ecx, [esp+20h+arg_8]
0x874DCE: mov     [ecx+4], eax
0x874DD1: jz      short loc_874DDD
0x874DD3: add     eax, 4
0x874DD6: push    eax; lpAddend
0x874DD7: call    dword ptr ds:0A28078h
0x874DDD: mov     edx, [esi+24h]
0x874DE0: mov     ebx, [edx+4]
0x874DE3: push    0
0x874DE5: push    ebp
0x874DE6: mov     ecx, edi
0x874DE8: mov     [esp+28h+arg_8], ebx
0x874DEC: call    sub_848FD0
0x874DF1: mov     ebx, [ebx+4]
0x874DF4: cmp     ebx, eax
0x874DF6: mov     [esp+20h+arg_0], eax
0x874DFA: jz      short loc_874E35
0x874DFC: test    ebx, ebx
0x874DFE: jz      short loc_874E20
0x874E00: lea     eax, [ebx+4]
0x874E03: push    eax; lpAddend
0x874E04: call    dword ptr ds:0A2807Ch
0x874E0A: test    eax, eax
0x874E0C: jnz     short loc_874E1C
0x874E0E: test    ebx, ebx
0x874E10: jz      short loc_874E1C
0x874E12: mov     edx, [ebx]
0x874E14: mov     eax, [edx]
0x874E16: push    1
0x874E18: mov     ecx, ebx
0x874E1A: call    eax
0x874E1C: mov     eax, [esp+20h+arg_0]
0x874E20: test    eax, eax
0x874E22: mov     ecx, [esp+20h+arg_8]
0x874E26: mov     [ecx+4], eax
0x874E29: jz      short loc_874E35
0x874E2B: add     eax, 4
0x874E2E: push    eax; lpAddend
0x874E2F: call    dword ptr ds:0A28078h
0x874E35: mov     edx, [esi+24h]
0x874E38: mov     eax, [edx+0Ch]
0x874E3B: mov     edx, [ebp+0]
0x874E3E: mov     [esp+20h+arg_8], eax
0x874E42: mov     eax, [edx+90h]
0x874E48: push    0
0x874E4A: mov     ecx, ebp
0x874E4C: call    eax
0x874E4E: mov     ecx, [esp+20h+arg_8]
0x874E52: mov     ebp, [ecx+4]
0x874E55: mov     ebx, eax
0x874E57: cmp     ebp, ebx
0x874E59: jz      short loc_874E91
0x874E5B: test    ebp, ebp
0x874E5D: jz      short loc_874E7C
0x874E5F: lea     edx, [ebp+4]
0x874E62: push    edx; lpAddend
0x874E63: call    dword ptr ds:0A2807Ch
0x874E69: test    eax, eax
0x874E6B: jnz     short loc_874E7C
0x874E6D: test    ebp, ebp
0x874E6F: jz      short loc_874E7C
0x874E71: mov     eax, [ebp+0]
0x874E74: mov     edx, [eax]
0x874E76: push    1
0x874E78: mov     ecx, ebp
0x874E7A: call    edx
0x874E7C: test    ebx, ebx
0x874E7E: mov     eax, [esp+20h+arg_8]
0x874E82: mov     [eax+4], ebx
0x874E85: jz      short loc_874E91
0x874E87: add     ebx, 4
0x874E8A: push    ebx; lpAddend
0x874E8B: call    dword ptr ds:0A28078h
0x874E91: mov     ecx, [esi+24h]
0x874E94: mov     ebp, [ecx+10h]
0x874E97: mov     eax, ds:0B43110h
0x874E9C: mov     ebx, [ebp+4]
0x874E9F: cmp     ebx, eax
0x874EA1: mov     ecx, eax
0x874EA3: mov     [esp+20h+arg_8], ecx
0x874EA7: jz      short loc_874EDE
0x874EA9: test    ebx, ebx
0x874EAB: jz      short loc_874ECD
0x874EAD: lea     edx, [ebx+4]
0x874EB0: push    edx; lpAddend
0x874EB1: call    dword ptr ds:0A2807Ch
0x874EB7: test    eax, eax
0x874EB9: jnz     short loc_874EC9
0x874EBB: test    ebx, ebx
0x874EBD: jz      short loc_874EC9
0x874EBF: mov     eax, [ebx]
0x874EC1: mov     edx, [eax]
0x874EC3: push    1
0x874EC5: mov     ecx, ebx
0x874EC7: call    edx
0x874EC9: mov     ecx, [esp+20h+arg_8]
0x874ECD: test    ecx, ecx
0x874ECF: mov     [ebp+4], ecx
0x874ED2: jz      short loc_874EDE
0x874ED4: add     ecx, 4
0x874ED7: push    ecx; lpAddend
0x874ED8: call    dword ptr ds:0A28078h
0x874EDE: mov     ebx, 1
0x874EE3: add     [esi+60h], ebx
0x874EE6: mov     [esp+20h+arg_8], esi
0x874EEA: mov     ecx, [edi+38h]
0x874EED: lea     eax, [esp+20h+arg_8]
0x874EF1: push    eax
0x874EF2: push    ecx
0x874EF3: lea     ecx, [edi+40h]
0x874EF6: mov     [esp+28h+var_4], 0
0x874EFE: call    sub_76CE40
0x874F03: or      eax, 0FFFFFFFFh
0x874F06: add     [esi+60h], eax
0x874F09: mov     [esp+20h+var_4], eax
0x874F0D: jnz     short loc_874F16
0x874F0F: mov     ecx, esi
0x874F11: call    sub_7604D0
0x874F16: add     [edi+38h], ebx
0x874F19: mov     ecx, [esp+20h+var_C]
0x874F1D: mov     large fs:0, ecx
0x874F24: pop     ecx
0x874F25: pop     edi
0x874F26: pop     esi
0x874F27: pop     ebp
0x874F28: pop     ebx
0x874F29: add     esp, 0Ch
0x874F2C: retn    10h
