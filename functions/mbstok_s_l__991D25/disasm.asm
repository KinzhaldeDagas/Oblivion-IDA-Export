0x991D25: push    ebp
0x991D26: mov     ebp, esp
0x991D28: sub     esp, 18h
0x991D2B: push    ebx
0x991D2C: push    edi
0x991D2D: mov     edi, [ebp+Context]
0x991D30: xor     ebx, ebx
0x991D32: cmp     edi, ebx
0x991D34: jnz     short loc_991D55
0x991D36: call    __errno
0x991D3B: push    ebx
0x991D3C: push    ebx
0x991D3D: push    ebx
0x991D3E: push    ebx
0x991D3F: push    ebx
0x991D40: mov     dword ptr [eax], 16h
0x991D46: call    __invalid_parameter
0x991D4B: add     esp, 14h
0x991D4E: xor     eax, eax
0x991D50: jmp     loc_991EEE
0x991D55: cmp     [ebp+Delim], ebx
0x991D58: jz      short loc_991D36
0x991D5A: push    esi
0x991D5B: mov     esi, [ebp+Str]
0x991D5E: cmp     esi, ebx
0x991D60: jnz     short loc_991D83
0x991D62: cmp     [edi], ebx
0x991D64: jnz     short loc_991D83
0x991D66: call    __errno
0x991D6B: push    ebx
0x991D6C: push    ebx
0x991D6D: push    ebx
0x991D6E: push    ebx
0x991D6F: push    ebx
0x991D70: mov     dword ptr [eax], 16h
0x991D76: call    __invalid_parameter
0x991D7B: add     esp, 14h
0x991D7E: jmp     loc_991EDA
0x991D83: push    [ebp+arg_C]; struct localeinfo_struct *
0x991D86: lea     ecx, [ebp+var_18]; this
0x991D89: call    ??0_LocaleUpdate@@QAE@PAUlocaleinfo_struct@@@Z
0x991D8E: mov     eax, [ebp+var_18.mbcinfo]
0x991D91: cmp     [eax+8], ebx
0x991D94: jnz     short loc_991DB8
0x991D96: push    edi; Context
0x991D97: push    [ebp+Delim]; Delim
0x991D9A: push    esi; Str
0x991D9B: call    _strtok_s
0x991DA0: add     esp, 0Ch
0x991DA3: cmp     [ebp+var_C], bl
0x991DA6: jz      loc_991EED
0x991DAC: mov     ecx, [ebp+var_10]
0x991DAF: and     dword ptr [ecx+70h], 0FFFFFFFDh
0x991DB3: jmp     loc_991EED
0x991DB8: cmp     esi, ebx
0x991DBA: jnz     short loc_991E2A
0x991DBC: mov     esi, [edi]
0x991DBE: jmp     short loc_991E2A
0x991DC0: mov     edi, [ebp+Delim]
0x991DC3: mov     eax, edi
0x991DC5: cmp     [eax], bl
0x991DC7: jz      short loc_991E0D
0x991DC9: lea     eax, [ebp+var_18]
0x991DCC: push    eax; struct localeinfo_struct *
0x991DCD: movzx   eax, byte ptr [edi]
0x991DD0: push    eax; char
0x991DD1: call    __ismbblead_l
0x991DD6: test    eax, eax
0x991DD8: pop     ecx
0x991DD9: pop     ecx
0x991DDA: jz      short loc_991DF4
0x991DDC: lea     eax, [edi+1]
0x991DDF: mov     cl, [eax]
0x991DE1: cmp     cl, bl
0x991DE3: jz      short loc_991E01
0x991DE5: mov     dl, [edi]
0x991DE7: cmp     dl, [esi]
0x991DE9: jnz     short loc_991DF0
0x991DEB: cmp     cl, [esi+1]
0x991DEE: jz      short loc_991E0D
0x991DF0: mov     edi, eax
0x991DF2: jmp     short loc_991DFA
0x991DF4: mov     al, [edi]
0x991DF6: cmp     al, [esi]
0x991DF8: jz      short loc_991E0D
0x991DFA: inc     edi
0x991DFB: cmp     [edi], bl
0x991DFD: jnz     short loc_991DC9
0x991DFF: jmp     short loc_991E0D
0x991E01: inc     edi
0x991E02: call    __errno
0x991E07: mov     dword ptr [eax], 2Ah ; '*'
0x991E0D: cmp     [edi], bl
0x991E0F: jz      short loc_991E3B
0x991E11: lea     eax, [ebp+var_18]
0x991E14: push    eax; struct localeinfo_struct *
0x991E15: movzx   eax, byte ptr [esi]
0x991E18: push    eax; char
0x991E19: call    __ismbblead_l
0x991E1E: test    eax, eax
0x991E20: pop     ecx
0x991E21: pop     ecx
0x991E22: jz      short loc_991E29
0x991E24: inc     esi
0x991E25: cmp     [esi], bl
0x991E27: jz      short loc_991E30
0x991E29: inc     esi
0x991E2A: cmp     [esi], bl
0x991E2C: jnz     short loc_991DC0
0x991E2E: jmp     short loc_991E3B
0x991E30: call    __errno
0x991E35: mov     dword ptr [eax], 2Ah ; '*'
0x991E3B: mov     [ebp+var_8], esi
0x991E3E: jmp     short loc_991EAF
0x991E40: mov     edi, [ebp+Delim]
0x991E43: mov     eax, edi
0x991E45: cmp     [eax], bl
0x991E47: mov     [ebp+var_4], ebx
0x991E4A: jz      short loc_991E8E
0x991E4C: lea     eax, [ebp+var_18]
0x991E4F: push    eax; struct localeinfo_struct *
0x991E50: movzx   eax, byte ptr [edi]
0x991E53: push    eax; char
0x991E54: call    __ismbblead_l
0x991E59: test    eax, eax
0x991E5B: pop     ecx
0x991E5C: pop     ecx
0x991E5D: jz      short loc_991E77
0x991E5F: lea     eax, [edi+1]
0x991E62: mov     cl, [eax]
0x991E64: cmp     cl, bl
0x991E66: jz      short loc_991E84
0x991E68: mov     dl, [edi]
0x991E6A: cmp     dl, [esi]
0x991E6C: jnz     short loc_991E73
0x991E6E: cmp     cl, [esi+1]
0x991E71: jz      short loc_991E87
0x991E73: mov     edi, eax
0x991E75: jmp     short loc_991E7D
0x991E77: mov     al, [edi]
0x991E79: cmp     al, [esi]
0x991E7B: jz      short loc_991E8E
0x991E7D: inc     edi
0x991E7E: cmp     [edi], bl
0x991E80: jnz     short loc_991E4C
0x991E82: jmp     short loc_991E8E
0x991E84: inc     edi
0x991E85: jmp     short loc_991E8E
0x991E87: mov     [ebp+var_4], 1
0x991E8E: cmp     [edi], bl
0x991E90: jnz     short loc_991EB5
0x991E92: lea     eax, [ebp+var_18]
0x991E95: push    eax; struct localeinfo_struct *
0x991E96: movzx   eax, byte ptr [esi]
0x991E99: push    eax; char
0x991E9A: call    __ismbblead_l
0x991E9F: test    eax, eax
0x991EA1: pop     ecx
0x991EA2: pop     ecx
0x991EA3: jz      short loc_991EAE
0x991EA5: lea     eax, [esi+1]
0x991EA8: cmp     [eax], bl
0x991EAA: jz      short loc_991EC2
0x991EAC: mov     esi, eax
0x991EAE: inc     esi
0x991EAF: cmp     [esi], bl
0x991EB1: jnz     short loc_991E40
0x991EB3: jmp     short loc_991EC4
0x991EB5: mov     [esi], bl
0x991EB7: inc     esi
0x991EB8: cmp     [ebp+var_4], ebx
0x991EBB: jz      short loc_991EC4
0x991EBD: mov     [esi], bl
0x991EBF: inc     esi
0x991EC0: jmp     short loc_991EC4
0x991EC2: mov     [esi], bl
0x991EC4: cmp     [ebp+var_8], esi
0x991EC7: mov     eax, [ebp+Context]
0x991ECA: mov     [eax], esi
0x991ECC: jnz     short loc_991EDE
0x991ECE: cmp     [ebp+var_C], bl
0x991ED1: jz      short loc_991EDA
0x991ED3: mov     eax, [ebp+var_10]
0x991ED6: and     dword ptr [eax+70h], 0FFFFFFFDh
0x991EDA: xor     eax, eax
0x991EDC: jmp     short loc_991EED
0x991EDE: cmp     [ebp+var_C], bl
0x991EE1: jz      short loc_991EEA
0x991EE3: mov     eax, [ebp+var_10]
0x991EE6: and     dword ptr [eax+70h], 0FFFFFFFDh
0x991EEA: mov     eax, [ebp+var_8]
0x991EED: pop     esi
0x991EEE: pop     edi
0x991EEF: pop     ebx
0x991EF0: leave
0x991EF1: retn
