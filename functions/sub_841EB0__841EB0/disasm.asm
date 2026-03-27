0x841EB0: push    0FFFFFFFFh
0x841EB2: push    offset SEH_882120
0x841EB7: mov     eax, large fs:0
0x841EBD: push    eax
0x841EBE: push    ebx
0x841EBF: push    ebp
0x841EC0: push    esi
0x841EC1: push    edi
0x841EC2: mov     eax, ds:0B30AACh
0x841EC7: xor     eax, esp
0x841EC9: push    eax
0x841ECA: lea     eax, [esp+20h+var_C]
0x841ECE: mov     large fs:0, eax
0x841ED4: mov     esi, ecx
0x841ED6: mov     ebx, [esp+20h+arg_8]
0x841EDA: mov     eax, [ebx+10h]
0x841EDD: mov     edi, ds:0B456E4h
0x841EE3: push    eax
0x841EE4: call    sub_848DA0
0x841EE9: mov     ebx, [ebx+0Ch]
0x841EEC: push    ebx
0x841EED: mov     ecx, esi
0x841EEF: call    sub_848E50
0x841EF4: mov     ecx, [esp+20h+arg_0]
0x841EF8: mov     eax, [esi]
0x841EFA: mov     edx, [eax+0BCh]
0x841F00: push    0
0x841F02: push    ebx
0x841F03: push    ecx
0x841F04: mov     ecx, esi
0x841F06: call    edx
0x841F08: mov     eax, [edi+24h]
0x841F0B: mov     ebx, [esp+20h+arg_C]
0x841F0F: mov     ebp, [eax]
0x841F11: mov     edx, [ebx]
0x841F13: mov     eax, [edx+88h]
0x841F19: push    0
0x841F1B: mov     ecx, ebx
0x841F1D: mov     [esp+24h+arg_8], ebp
0x841F21: call    eax
0x841F23: mov     ebp, [ebp+4]
0x841F26: cmp     ebp, eax
0x841F28: mov     [esp+20h+arg_0], eax
0x841F2C: jz      short loc_841F68
0x841F2E: test    ebp, ebp
0x841F30: jz      short loc_841F53
0x841F32: lea     ecx, [ebp+4]
0x841F35: push    ecx; lpAddend
0x841F36: call    dword ptr ds:0A2807Ch
0x841F3C: test    eax, eax
0x841F3E: jnz     short loc_841F4F
0x841F40: test    ebp, ebp
0x841F42: jz      short loc_841F4F
0x841F44: mov     edx, [ebp+0]
0x841F47: mov     eax, [edx]
0x841F49: push    1
0x841F4B: mov     ecx, ebp
0x841F4D: call    eax
0x841F4F: mov     eax, [esp+20h+arg_0]
0x841F53: test    eax, eax
0x841F55: mov     ecx, [esp+20h+arg_8]
0x841F59: mov     [ecx+4], eax
0x841F5C: jz      short loc_841F68
0x841F5E: add     eax, 4
0x841F61: push    eax; lpAddend
0x841F62: call    dword ptr ds:0A28078h
0x841F68: mov     edx, [esp+20h+arg_8]
0x841F6C: push    ebx
0x841F6D: push    edx
0x841F6E: mov     ecx, esi
0x841F70: call    sub_848FA0
0x841F75: mov     eax, [edi+24h]
0x841F78: mov     ebp, [eax+4]
0x841F7B: push    0
0x841F7D: push    ebx
0x841F7E: mov     ecx, esi
0x841F80: mov     [esp+28h+arg_8], ebp
0x841F84: call    sub_848FD0
0x841F89: mov     ebp, [ebp+4]
0x841F8C: cmp     ebp, eax
0x841F8E: mov     [esp+20h+arg_0], eax
0x841F92: jz      short loc_841FCE
0x841F94: test    ebp, ebp
0x841F96: jz      short loc_841FB9
0x841F98: lea     ecx, [ebp+4]
0x841F9B: push    ecx; lpAddend
0x841F9C: call    dword ptr ds:0A2807Ch
0x841FA2: test    eax, eax
0x841FA4: jnz     short loc_841FB5
0x841FA6: test    ebp, ebp
0x841FA8: jz      short loc_841FB5
0x841FAA: mov     edx, [ebp+0]
0x841FAD: mov     eax, [edx]
0x841FAF: push    1
0x841FB1: mov     ecx, ebp
0x841FB3: call    eax
0x841FB5: mov     eax, [esp+20h+arg_0]
0x841FB9: test    eax, eax
0x841FBB: mov     ecx, [esp+20h+arg_8]
0x841FBF: mov     [ecx+4], eax
0x841FC2: jz      short loc_841FCE
0x841FC4: add     eax, 4
0x841FC7: push    eax; lpAddend
0x841FC8: call    dword ptr ds:0A28078h
0x841FCE: mov     edx, [esp+20h+arg_8]
0x841FD2: push    ebx
0x841FD3: push    edx
0x841FD4: mov     ecx, esi
0x841FD6: call    sub_848FA0
0x841FDB: mov     eax, [edi+24h]
0x841FDE: mov     ebp, [eax+0Ch]
0x841FE1: mov     edx, [ebx]
0x841FE3: mov     eax, [edx+90h]
0x841FE9: push    0
0x841FEB: mov     ecx, ebx
0x841FED: mov     [esp+24h+arg_8], ebp
0x841FF1: call    eax
0x841FF3: mov     ebp, [ebp+4]
0x841FF6: cmp     ebp, eax
0x841FF8: mov     [esp+20h+arg_0], eax
0x841FFC: jz      short loc_842038
0x841FFE: test    ebp, ebp
0x842000: jz      short loc_842023
0x842002: lea     ecx, [ebp+4]
0x842005: push    ecx; lpAddend
0x842006: call    dword ptr ds:0A2807Ch
0x84200C: test    eax, eax
0x84200E: jnz     short loc_84201F
0x842010: test    ebp, ebp
0x842012: jz      short loc_84201F
0x842014: mov     edx, [ebp+0]
0x842017: mov     eax, [edx]
0x842019: push    1
0x84201B: mov     ecx, ebp
0x84201D: call    eax
0x84201F: mov     eax, [esp+20h+arg_0]
0x842023: test    eax, eax
0x842025: mov     ecx, [esp+20h+arg_8]
0x842029: mov     [ecx+4], eax
0x84202C: jz      short loc_842038
0x84202E: add     eax, 4
0x842031: push    eax; lpAddend
0x842032: call    dword ptr ds:0A28078h
0x842038: mov     edx, [esp+20h+arg_8]
0x84203C: push    ebx
0x84203D: push    edx
0x84203E: mov     ecx, esi
0x842040: call    sub_848FA0
0x842045: mov     ebx, 1
0x84204A: add     [edi+60h], ebx
0x84204D: mov     [esp+20h+arg_8], edi
0x842051: mov     ecx, [esi+38h]
0x842054: lea     eax, [esp+20h+arg_8]
0x842058: push    eax
0x842059: push    ecx
0x84205A: lea     ecx, [esi+40h]
0x84205D: mov     [esp+28h+var_4], 0
0x842065: call    sub_76CE40
0x84206A: or      eax, 0FFFFFFFFh
0x84206D: add     [edi+60h], eax
0x842070: mov     [esp+20h+var_4], eax
0x842074: jnz     short loc_84207D
0x842076: mov     ecx, edi
0x842078: call    sub_7604D0
0x84207D: add     [esi+38h], ebx
0x842080: mov     ecx, [esp+20h+var_C]
0x842084: mov     large fs:0, ecx
0x84208B: pop     ecx
0x84208C: pop     edi
0x84208D: pop     esi
0x84208E: pop     ebp
0x84208F: pop     ebx
0x842090: add     esp, 0Ch
0x842093: retn    10h
