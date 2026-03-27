0x878D50: push    0FFFFFFFFh
0x878D52: push    offset SEH_880560
0x878D57: mov     eax, large fs:0
0x878D5D: push    eax
0x878D5E: push    ebx
0x878D5F: push    ebp
0x878D60: push    esi
0x878D61: push    edi
0x878D62: mov     eax, ds:0B30AACh
0x878D67: xor     eax, esp
0x878D69: push    eax
0x878D6A: lea     eax, [esp+20h+var_C]
0x878D6E: mov     large fs:0, eax
0x878D74: mov     esi, ecx
0x878D76: mov     ebx, [esp+20h+arg_8]
0x878D7A: mov     eax, [ebx+10h]
0x878D7D: mov     edi, ds:0B476C8h
0x878D83: push    eax
0x878D84: call    sub_848C40
0x878D89: mov     ebp, [ebx+0Ch]
0x878D8C: push    ebp
0x878D8D: mov     ecx, esi
0x878D8F: call    sub_848E50
0x878D94: mov     ebx, [ebx+10h]
0x878D97: mov     ecx, [esp+20h+arg_0]
0x878D9B: mov     eax, [esi]
0x878D9D: mov     edx, [eax+0BCh]
0x878DA3: push    ebx
0x878DA4: push    ebp
0x878DA5: push    ecx
0x878DA6: mov     ecx, esi
0x878DA8: call    edx
0x878DAA: mov     eax, [edi+24h]
0x878DAD: mov     ecx, [esp+20h+arg_C]
0x878DB1: mov     ebx, [eax]
0x878DB3: mov     edx, [ecx]
0x878DB5: mov     eax, [edx+88h]
0x878DBB: push    0
0x878DBD: mov     [esp+24h+arg_8], ebx
0x878DC1: call    eax
0x878DC3: mov     ebx, [ebx+4]
0x878DC6: mov     ebp, eax
0x878DC8: cmp     ebx, ebp
0x878DCA: jz      short loc_878E01
0x878DCC: test    ebx, ebx
0x878DCE: jz      short loc_878DEC
0x878DD0: lea     ecx, [ebx+4]
0x878DD3: push    ecx; lpAddend
0x878DD4: call    dword ptr ds:0A2807Ch
0x878DDA: test    eax, eax
0x878DDC: jnz     short loc_878DEC
0x878DDE: test    ebx, ebx
0x878DE0: jz      short loc_878DEC
0x878DE2: mov     edx, [ebx]
0x878DE4: mov     eax, [edx]
0x878DE6: push    1
0x878DE8: mov     ecx, ebx
0x878DEA: call    eax
0x878DEC: test    ebp, ebp
0x878DEE: mov     ecx, [esp+20h+arg_8]
0x878DF2: mov     [ecx+4], ebp
0x878DF5: jz      short loc_878E01
0x878DF7: add     ebp, 4
0x878DFA: push    ebp; lpAddend
0x878DFB: call    dword ptr ds:0A28078h
0x878E01: mov     edx, [edi+24h]
0x878E04: mov     eax, [esp+20h+arg_C]
0x878E08: mov     ebx, [edx+4]
0x878E0B: push    0
0x878E0D: push    eax
0x878E0E: mov     ecx, esi
0x878E10: mov     [esp+28h+arg_8], ebx
0x878E14: call    sub_848FD0
0x878E19: mov     ebx, [ebx+4]
0x878E1C: mov     ebp, eax
0x878E1E: cmp     ebx, ebp
0x878E20: jz      short loc_878E57
0x878E22: test    ebx, ebx
0x878E24: jz      short loc_878E42
0x878E26: lea     ecx, [ebx+4]
0x878E29: push    ecx; lpAddend
0x878E2A: call    dword ptr ds:0A2807Ch
0x878E30: test    eax, eax
0x878E32: jnz     short loc_878E42
0x878E34: test    ebx, ebx
0x878E36: jz      short loc_878E42
0x878E38: mov     edx, [ebx]
0x878E3A: mov     eax, [edx]
0x878E3C: push    1
0x878E3E: mov     ecx, ebx
0x878E40: call    eax
0x878E42: test    ebp, ebp
0x878E44: mov     ecx, [esp+20h+arg_8]
0x878E48: mov     [ecx+4], ebp
0x878E4B: jz      short loc_878E57
0x878E4D: add     ebp, 4
0x878E50: push    ebp; lpAddend
0x878E51: call    dword ptr ds:0A28078h
0x878E57: mov     edx, [edi+24h]
0x878E5A: mov     ebp, [edx+14h]
0x878E5D: mov     eax, ds:0B43110h
0x878E62: mov     ebx, [ebp+4]
0x878E65: cmp     ebx, eax
0x878E67: mov     ecx, eax
0x878E69: mov     [esp+20h+arg_C], ecx
0x878E6D: jz      short loc_878EA4
0x878E6F: test    ebx, ebx
0x878E71: jz      short loc_878E93
0x878E73: lea     eax, [ebx+4]
0x878E76: push    eax; lpAddend
0x878E77: call    dword ptr ds:0A2807Ch
0x878E7D: test    eax, eax
0x878E7F: jnz     short loc_878E8F
0x878E81: test    ebx, ebx
0x878E83: jz      short loc_878E8F
0x878E85: mov     edx, [ebx]
0x878E87: mov     eax, [edx]
0x878E89: push    1
0x878E8B: mov     ecx, ebx
0x878E8D: call    eax
0x878E8F: mov     ecx, [esp+20h+arg_C]
0x878E93: test    ecx, ecx
0x878E95: mov     [ebp+4], ecx
0x878E98: jz      short loc_878EA4
0x878E9A: add     ecx, 4
0x878E9D: push    ecx; lpAddend
0x878E9E: call    dword ptr ds:0A28078h
0x878EA4: mov     ebx, 1
0x878EA9: add     [edi+60h], ebx
0x878EAC: mov     [esp+20h+arg_C], edi
0x878EB0: mov     edx, [esi+38h]
0x878EB3: lea     ecx, [esp+20h+arg_C]
0x878EB7: push    ecx
0x878EB8: push    edx
0x878EB9: lea     ecx, [esi+40h]
0x878EBC: mov     [esp+28h+var_4], 0
0x878EC4: call    sub_76CE40
0x878EC9: or      eax, 0FFFFFFFFh
0x878ECC: add     [edi+60h], eax
0x878ECF: mov     [esp+20h+var_4], eax
0x878ED3: jnz     short loc_878EDC
0x878ED5: mov     ecx, edi
0x878ED7: call    sub_7604D0
0x878EDC: add     [esi+38h], ebx
0x878EDF: mov     ecx, [esp+20h+var_C]
0x878EE3: mov     large fs:0, ecx
0x878EEA: pop     ecx
0x878EEB: pop     edi
0x878EEC: pop     esi
0x878EED: pop     ebp
0x878EEE: pop     ebx
0x878EEF: add     esp, 0Ch
0x878EF2: retn    10h
