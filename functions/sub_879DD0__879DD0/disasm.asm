0x879DD0: push    0FFFFFFFFh
0x879DD2: push    offset SEH_880560
0x879DD7: mov     eax, large fs:0
0x879DDD: push    eax
0x879DDE: push    ebx
0x879DDF: push    ebp
0x879DE0: push    esi
0x879DE1: push    edi
0x879DE2: mov     eax, ds:0B30AACh
0x879DE7: xor     eax, esp
0x879DE9: push    eax
0x879DEA: lea     eax, [esp+20h+var_C]
0x879DEE: mov     large fs:0, eax
0x879DF4: mov     edi, ecx
0x879DF6: mov     ecx, [esp+20h+arg_0]
0x879DFA: mov     eax, [edi]
0x879DFC: mov     edx, [eax+0BCh]
0x879E02: mov     esi, ds:0B476E8h
0x879E08: push    0
0x879E0A: push    0
0x879E0C: push    ecx
0x879E0D: mov     ecx, edi
0x879E0F: call    edx
0x879E11: mov     eax, [esi+24h]
0x879E14: mov     ecx, [esp+20h+arg_C]
0x879E18: mov     ebx, [eax]
0x879E1A: push    0
0x879E1C: push    ecx
0x879E1D: mov     ecx, edi
0x879E1F: mov     [esp+28h+arg_0], ebx
0x879E23: call    sub_848FD0
0x879E28: mov     ebx, [ebx+4]
0x879E2B: mov     ebp, eax
0x879E2D: cmp     ebx, ebp
0x879E2F: jz      short loc_879E66
0x879E31: test    ebx, ebx
0x879E33: jz      short loc_879E51
0x879E35: lea     edx, [ebx+4]
0x879E38: push    edx; lpAddend
0x879E39: call    dword ptr ds:0A2807Ch
0x879E3F: test    eax, eax
0x879E41: jnz     short loc_879E51
0x879E43: test    ebx, ebx
0x879E45: jz      short loc_879E51
0x879E47: mov     eax, [ebx]
0x879E49: mov     edx, [eax]
0x879E4B: push    1
0x879E4D: mov     ecx, ebx
0x879E4F: call    edx
0x879E51: test    ebp, ebp
0x879E53: mov     eax, [esp+20h+arg_0]
0x879E57: mov     [eax+4], ebp
0x879E5A: jz      short loc_879E66
0x879E5C: add     ebp, 4
0x879E5F: push    ebp; lpAddend
0x879E60: call    dword ptr ds:0A28078h
0x879E66: mov     ecx, [esi+24h]
0x879E69: mov     ebx, [ecx+4]
0x879E6C: mov     ecx, [esp+20h+arg_C]
0x879E70: mov     edx, [ecx]
0x879E72: mov     eax, [edx+88h]
0x879E78: push    0
0x879E7A: mov     [esp+24h+arg_0], ebx
0x879E7E: call    eax
0x879E80: mov     ebx, [ebx+4]
0x879E83: mov     ebp, eax
0x879E85: cmp     ebx, ebp
0x879E87: jz      short loc_879EBE
0x879E89: test    ebx, ebx
0x879E8B: jz      short loc_879EA9
0x879E8D: lea     ecx, [ebx+4]
0x879E90: push    ecx; lpAddend
0x879E91: call    dword ptr ds:0A2807Ch
0x879E97: test    eax, eax
0x879E99: jnz     short loc_879EA9
0x879E9B: test    ebx, ebx
0x879E9D: jz      short loc_879EA9
0x879E9F: mov     edx, [ebx]
0x879EA1: mov     eax, [edx]
0x879EA3: push    1
0x879EA5: mov     ecx, ebx
0x879EA7: call    eax
0x879EA9: test    ebp, ebp
0x879EAB: mov     ecx, [esp+20h+arg_0]
0x879EAF: mov     [ecx+4], ebp
0x879EB2: jz      short loc_879EBE
0x879EB4: add     ebp, 4
0x879EB7: push    ebp; lpAddend
0x879EB8: call    dword ptr ds:0A28078h
0x879EBE: mov     edx, [esi+24h]
0x879EC1: mov     ebp, [edx+0Ch]
0x879EC4: mov     eax, ds:0B43110h
0x879EC9: mov     ebx, [ebp+4]
0x879ECC: cmp     ebx, eax
0x879ECE: mov     ecx, eax
0x879ED0: mov     [esp+20h+arg_C], ecx
0x879ED4: jz      short loc_879F0B
0x879ED6: test    ebx, ebx
0x879ED8: jz      short loc_879EFA
0x879EDA: lea     eax, [ebx+4]
0x879EDD: push    eax; lpAddend
0x879EDE: call    dword ptr ds:0A2807Ch
0x879EE4: test    eax, eax
0x879EE6: jnz     short loc_879EF6
0x879EE8: test    ebx, ebx
0x879EEA: jz      short loc_879EF6
0x879EEC: mov     edx, [ebx]
0x879EEE: mov     eax, [edx]
0x879EF0: push    1
0x879EF2: mov     ecx, ebx
0x879EF4: call    eax
0x879EF6: mov     ecx, [esp+20h+arg_C]
0x879EFA: test    ecx, ecx
0x879EFC: mov     [ebp+4], ecx
0x879EFF: jz      short loc_879F0B
0x879F01: add     ecx, 4
0x879F04: push    ecx; lpAddend
0x879F05: call    dword ptr ds:0A28078h
0x879F0B: mov     ebx, 1
0x879F10: add     [esi+60h], ebx
0x879F13: mov     [esp+20h+arg_C], esi
0x879F17: mov     edx, [edi+38h]
0x879F1A: lea     ecx, [esp+20h+arg_C]
0x879F1E: push    ecx
0x879F1F: push    edx
0x879F20: lea     ecx, [edi+40h]
0x879F23: mov     [esp+28h+var_4], 0
0x879F2B: call    sub_76CE40
0x879F30: or      eax, 0FFFFFFFFh
0x879F33: add     [esi+60h], eax
0x879F36: mov     [esp+20h+var_4], eax
0x879F3A: jnz     short loc_879F43
0x879F3C: mov     ecx, esi
0x879F3E: call    sub_7604D0
0x879F43: add     [edi+38h], ebx
0x879F46: mov     ecx, [esp+20h+var_C]
0x879F4A: mov     large fs:0, ecx
0x879F51: pop     ecx
0x879F52: pop     edi
0x879F53: pop     esi
0x879F54: pop     ebp
0x879F55: pop     ebx
0x879F56: add     esp, 0Ch
0x879F59: retn    10h
