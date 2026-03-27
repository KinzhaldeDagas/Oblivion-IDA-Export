0x881B80: push    0FFFFFFFFh
0x881B82: push    offset SEH_882120
0x881B87: mov     eax, large fs:0
0x881B8D: push    eax
0x881B8E: push    ebx
0x881B8F: push    ebp
0x881B90: push    esi
0x881B91: push    edi
0x881B92: mov     eax, ds:0B30AACh
0x881B97: xor     eax, esp
0x881B99: push    eax
0x881B9A: lea     eax, [esp+20h+var_C]
0x881B9E: mov     large fs:0, eax
0x881BA4: mov     edi, ecx
0x881BA6: mov     ebx, [esp+20h+arg_8]
0x881BAA: mov     eax, [ebx+10h]
0x881BAD: mov     esi, ds:0B47754h
0x881BB3: push    eax
0x881BB4: call    sub_848C40
0x881BB9: mov     ebx, [ebx+0Ch]
0x881BBC: push    ebx
0x881BBD: mov     ecx, edi
0x881BBF: call    sub_848E50
0x881BC4: mov     ecx, [esp+20h+arg_0]
0x881BC8: mov     eax, [edi]
0x881BCA: mov     edx, [eax+0BCh]
0x881BD0: push    0
0x881BD2: push    ebx
0x881BD3: push    ecx
0x881BD4: mov     ecx, edi
0x881BD6: call    edx
0x881BD8: mov     eax, [esi+24h]
0x881BDB: mov     ebp, [esp+20h+arg_C]
0x881BDF: mov     ebx, [eax]
0x881BE1: mov     edx, [ebp+0]
0x881BE4: mov     eax, [edx+88h]
0x881BEA: push    0
0x881BEC: mov     ecx, ebp
0x881BEE: mov     [esp+24h+arg_8], ebx
0x881BF2: call    eax
0x881BF4: mov     ebx, [ebx+4]
0x881BF7: cmp     ebx, eax
0x881BF9: mov     [esp+20h+arg_0], eax
0x881BFD: jz      short loc_881C38
0x881BFF: test    ebx, ebx
0x881C01: jz      short loc_881C23
0x881C03: lea     ecx, [ebx+4]
0x881C06: push    ecx; lpAddend
0x881C07: call    dword ptr ds:0A2807Ch
0x881C0D: test    eax, eax
0x881C0F: jnz     short loc_881C1F
0x881C11: test    ebx, ebx
0x881C13: jz      short loc_881C1F
0x881C15: mov     edx, [ebx]
0x881C17: mov     eax, [edx]
0x881C19: push    1
0x881C1B: mov     ecx, ebx
0x881C1D: call    eax
0x881C1F: mov     eax, [esp+20h+arg_0]
0x881C23: test    eax, eax
0x881C25: mov     ecx, [esp+20h+arg_8]
0x881C29: mov     [ecx+4], eax
0x881C2C: jz      short loc_881C38
0x881C2E: add     eax, 4
0x881C31: push    eax; lpAddend
0x881C32: call    dword ptr ds:0A28078h
0x881C38: mov     edx, [esi+24h]
0x881C3B: mov     ebx, [edx+4]
0x881C3E: push    0
0x881C40: push    ebp
0x881C41: mov     ecx, edi
0x881C43: mov     [esp+28h+arg_8], ebx
0x881C47: call    sub_848FD0
0x881C4C: mov     ebx, [ebx+4]
0x881C4F: cmp     ebx, eax
0x881C51: mov     [esp+20h+arg_0], eax
0x881C55: jz      short loc_881C90
0x881C57: test    ebx, ebx
0x881C59: jz      short loc_881C7B
0x881C5B: lea     eax, [ebx+4]
0x881C5E: push    eax; lpAddend
0x881C5F: call    dword ptr ds:0A2807Ch
0x881C65: test    eax, eax
0x881C67: jnz     short loc_881C77
0x881C69: test    ebx, ebx
0x881C6B: jz      short loc_881C77
0x881C6D: mov     edx, [ebx]
0x881C6F: mov     eax, [edx]
0x881C71: push    1
0x881C73: mov     ecx, ebx
0x881C75: call    eax
0x881C77: mov     eax, [esp+20h+arg_0]
0x881C7B: test    eax, eax
0x881C7D: mov     ecx, [esp+20h+arg_8]
0x881C81: mov     [ecx+4], eax
0x881C84: jz      short loc_881C90
0x881C86: add     eax, 4
0x881C89: push    eax; lpAddend
0x881C8A: call    dword ptr ds:0A28078h
0x881C90: mov     edx, [esi+24h]
0x881C93: mov     ebx, [edx+8]
0x881C96: mov     eax, [ebp+0]
0x881C99: mov     edx, [eax+88h]
0x881C9F: push    1
0x881CA1: mov     ecx, ebp
0x881CA3: mov     [esp+24h+arg_8], ebx
0x881CA7: call    edx
0x881CA9: mov     ebx, [ebx+4]
0x881CAC: cmp     ebx, eax
0x881CAE: mov     [esp+20h+arg_0], eax
0x881CB2: jz      short loc_881CED
0x881CB4: test    ebx, ebx
0x881CB6: jz      short loc_881CD8
0x881CB8: lea     eax, [ebx+4]
0x881CBB: push    eax; lpAddend
0x881CBC: call    dword ptr ds:0A2807Ch
0x881CC2: test    eax, eax
0x881CC4: jnz     short loc_881CD4
0x881CC6: test    ebx, ebx
0x881CC8: jz      short loc_881CD4
0x881CCA: mov     edx, [ebx]
0x881CCC: mov     eax, [edx]
0x881CCE: push    1
0x881CD0: mov     ecx, ebx
0x881CD2: call    eax
0x881CD4: mov     eax, [esp+20h+arg_0]
0x881CD8: test    eax, eax
0x881CDA: mov     ecx, [esp+20h+arg_8]
0x881CDE: mov     [ecx+4], eax
0x881CE1: jz      short loc_881CED
0x881CE3: add     eax, 4
0x881CE6: push    eax; lpAddend
0x881CE7: call    dword ptr ds:0A28078h
0x881CED: mov     edx, [esi+24h]
0x881CF0: mov     eax, [edx+0Ch]
0x881CF3: push    1
0x881CF5: push    ebp
0x881CF6: mov     ecx, edi
0x881CF8: mov     [esp+28h+arg_8], eax
0x881CFC: call    sub_848FD0
0x881D01: mov     ecx, [esp+20h+arg_8]
0x881D05: mov     ebp, [ecx+4]
0x881D08: mov     ebx, eax
0x881D0A: cmp     ebp, ebx
0x881D0C: jz      short loc_881D44
0x881D0E: test    ebp, ebp
0x881D10: jz      short loc_881D2F
0x881D12: lea     edx, [ebp+4]
0x881D15: push    edx; lpAddend
0x881D16: call    dword ptr ds:0A2807Ch
0x881D1C: test    eax, eax
0x881D1E: jnz     short loc_881D2F
0x881D20: test    ebp, ebp
0x881D22: jz      short loc_881D2F
0x881D24: mov     eax, [ebp+0]
0x881D27: mov     edx, [eax]
0x881D29: push    1
0x881D2B: mov     ecx, ebp
0x881D2D: call    edx
0x881D2F: test    ebx, ebx
0x881D31: mov     eax, [esp+20h+arg_8]
0x881D35: mov     [eax+4], ebx
0x881D38: jz      short loc_881D44
0x881D3A: add     ebx, 4
0x881D3D: push    ebx; lpAddend
0x881D3E: call    dword ptr ds:0A28078h
0x881D44: mov     ecx, [esi+24h]
0x881D47: mov     ebp, [ecx+14h]
0x881D4A: mov     eax, ds:0B43110h
0x881D4F: mov     ebx, [ebp+4]
0x881D52: add     ebp, 4
0x881D55: cmp     ebx, eax
0x881D57: mov     [esp+20h+arg_8], eax
0x881D5B: jz      short loc_881D92
0x881D5D: test    ebx, ebx
0x881D5F: jz      short loc_881D81
0x881D61: lea     edx, [ebx+4]
0x881D64: push    edx; lpAddend
0x881D65: call    dword ptr ds:0A2807Ch
0x881D6B: test    eax, eax
0x881D6D: jnz     short loc_881D7D
0x881D6F: test    ebx, ebx
0x881D71: jz      short loc_881D7D
0x881D73: mov     eax, [ebx]
0x881D75: mov     edx, [eax]
0x881D77: push    1
0x881D79: mov     ecx, ebx
0x881D7B: call    edx
0x881D7D: mov     eax, [esp+20h+arg_8]
0x881D81: test    eax, eax
0x881D83: mov     [ebp+0], eax
0x881D86: jz      short loc_881D92
0x881D88: add     eax, 4
0x881D8B: push    eax; lpAddend
0x881D8C: call    dword ptr ds:0A28078h
0x881D92: mov     ecx, [esi+24h]
0x881D95: mov     ebp, [ecx+18h]
0x881D98: mov     eax, ds:0B43108h
0x881D9D: mov     ebx, [ebp+4]
0x881DA0: add     ebp, 4
0x881DA3: cmp     ebx, eax
0x881DA5: mov     [esp+20h+arg_8], eax
0x881DA9: jz      short loc_881DE0
0x881DAB: test    ebx, ebx
0x881DAD: jz      short loc_881DCF
0x881DAF: lea     edx, [ebx+4]
0x881DB2: push    edx; lpAddend
0x881DB3: call    dword ptr ds:0A2807Ch
0x881DB9: test    eax, eax
0x881DBB: jnz     short loc_881DCB
0x881DBD: test    ebx, ebx
0x881DBF: jz      short loc_881DCB
0x881DC1: mov     eax, [ebx]
0x881DC3: mov     edx, [eax]
0x881DC5: push    1
0x881DC7: mov     ecx, ebx
0x881DC9: call    edx
0x881DCB: mov     eax, [esp+20h+arg_8]
0x881DCF: test    eax, eax
0x881DD1: mov     [ebp+0], eax
0x881DD4: jz      short loc_881DE0
0x881DD6: add     eax, 4
0x881DD9: push    eax; lpAddend
0x881DDA: call    dword ptr ds:0A28078h
0x881DE0: mov     eax, [esi+24h]
0x881DE3: mov     ebp, [eax+1Ch]
0x881DE6: mov     eax, ds:0B4310Ch
0x881DEB: mov     ebx, [ebp+4]
0x881DEE: cmp     ebx, eax
0x881DF0: mov     ecx, eax
0x881DF2: mov     [esp+20h+arg_8], ecx
0x881DF6: jz      short loc_881E2D
0x881DF8: test    ebx, ebx
0x881DFA: jz      short loc_881E1C
0x881DFC: lea     ecx, [ebx+4]
0x881DFF: push    ecx; lpAddend
0x881E00: call    dword ptr ds:0A2807Ch
0x881E06: test    eax, eax
0x881E08: jnz     short loc_881E18
0x881E0A: test    ebx, ebx
0x881E0C: jz      short loc_881E18
0x881E0E: mov     edx, [ebx]
0x881E10: mov     eax, [edx]
0x881E12: push    1
0x881E14: mov     ecx, ebx
0x881E16: call    eax
0x881E18: mov     ecx, [esp+20h+arg_8]
0x881E1C: test    ecx, ecx
0x881E1E: mov     [ebp+4], ecx
0x881E21: jz      short loc_881E2D
0x881E23: add     ecx, 4
0x881E26: push    ecx; lpAddend
0x881E27: call    dword ptr ds:0A28078h
0x881E2D: mov     ebx, 1
0x881E32: add     [esi+60h], ebx
0x881E35: mov     [esp+20h+arg_8], esi
0x881E39: mov     edx, [edi+38h]
0x881E3C: lea     ecx, [esp+20h+arg_8]
0x881E40: push    ecx
0x881E41: push    edx
0x881E42: lea     ecx, [edi+40h]
0x881E45: mov     [esp+28h+var_4], 0
0x881E4D: call    sub_76CE40
0x881E52: or      eax, 0FFFFFFFFh
0x881E55: add     [esi+60h], eax
0x881E58: mov     [esp+20h+var_4], eax
0x881E5C: jnz     short loc_881E65
0x881E5E: mov     ecx, esi
0x881E60: call    sub_7604D0
0x881E65: add     [edi+38h], ebx
0x881E68: mov     ecx, [esp+20h+var_C]
0x881E6C: mov     large fs:0, ecx
0x881E73: pop     ecx
0x881E74: pop     edi
0x881E75: pop     esi
0x881E76: pop     ebp
0x881E77: pop     ebx
0x881E78: add     esp, 0Ch
0x881E7B: retn    10h
