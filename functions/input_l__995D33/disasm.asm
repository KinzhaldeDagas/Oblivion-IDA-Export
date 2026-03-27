0x995D33: push    ebp
0x995D34: lea     ebp, [esp-18Ch]
0x995D3B: sub     esp, 1FCh
0x995D41: mov     eax, ___security_cookie
0x995D46: xor     eax, ebp
0x995D48: mov     [ebp+18Ch+var_4], eax
0x995D4E: mov     eax, [ebp+18Ch+arg_C]
0x995D54: push    ebx
0x995D55: push    esi
0x995D56: mov     esi, [ebp+18Ch+File]
0x995D5C: xor     ebx, ebx
0x995D5E: push    edi
0x995D5F: mov     edi, [ebp+18Ch+arg_4]
0x995D65: cmp     edi, ebx
0x995D67: mov     [ebp+18Ch+var_1E4], eax
0x995D6A: lea     eax, [ebp+18Ch+var_184]
0x995D6D: mov     [ebp+18Ch+var_1A0], esi
0x995D70: mov     [ebp+18Ch+var_1B4], edi
0x995D73: mov     [ebp+18Ch+var_1B0], eax
0x995D76: mov     [ebp+18Ch+var_1D8], 15Eh
0x995D7D: mov     [ebp+18Ch+var_1D0], ebx
0x995D80: mov     [ebp+18Ch+var_1E8], ebx
0x995D83: mov     [ebp+18Ch+var_190], ebx
0x995D86: jnz     short loc_995DA8
0x995D88: call    __errno
0x995D8D: push    ebx
0x995D8E: push    ebx
0x995D8F: push    ebx
0x995D90: push    ebx
0x995D91: push    ebx
0x995D92: mov     dword ptr [eax], 16h
0x995D98: call    __invalid_parameter
0x995D9D: add     esp, 14h
0x995DA0: or      eax, 0FFFFFFFFh
0x995DA3: jmp     loc_996968
0x995DA8: cmp     esi, ebx
0x995DAA: jz      short loc_995D88
0x995DAC: test    byte ptr [esi+0Ch], 40h
0x995DB0: jnz     loc_995E47
0x995DB6: push    esi; File
0x995DB7: call    __fileno
0x995DBC: cmp     eax, 0FFFFFFFFh
0x995DBF: pop     ecx
0x995DC0: jz      short loc_995DF0
0x995DC2: push    esi; File
0x995DC3: call    __fileno
0x995DC8: cmp     eax, 0FFFFFFFEh
0x995DCB: pop     ecx
0x995DCC: jz      short loc_995DF0
0x995DCE: push    esi; File
0x995DCF: call    __fileno
0x995DD4: sar     eax, 5
0x995DD7: push    esi; File
0x995DD8: lea     edi, ds:0BAAAC0h[eax*4]
0x995DDF: call    __fileno
0x995DE4: and     eax, 1Fh
0x995DE7: imul    eax, 28h ; '('
0x995DEA: add     eax, [edi]
0x995DEC: pop     ecx
0x995DED: pop     ecx
0x995DEE: jmp     short loc_995DF5
0x995DF0: mov     eax, offset aA_1
0x995DF5: test    byte ptr [eax+24h], 7Fh
0x995DF9: jnz     short loc_995D88
0x995DFB: push    esi; File
0x995DFC: call    __fileno
0x995E01: cmp     eax, 0FFFFFFFFh
0x995E04: pop     ecx
0x995E05: jz      short loc_995E35
0x995E07: push    esi; File
0x995E08: call    __fileno
0x995E0D: cmp     eax, 0FFFFFFFEh
0x995E10: pop     ecx
0x995E11: jz      short loc_995E35
0x995E13: push    esi; File
0x995E14: call    __fileno
0x995E19: sar     eax, 5
0x995E1C: push    esi; File
0x995E1D: lea     edi, ds:0BAAAC0h[eax*4]
0x995E24: call    __fileno
0x995E29: and     eax, 1Fh
0x995E2C: imul    eax, 28h ; '('
0x995E2F: add     eax, [edi]
0x995E31: pop     ecx
0x995E32: pop     ecx
0x995E33: jmp     short loc_995E3A
0x995E35: mov     eax, offset aA_1
0x995E3A: test    byte ptr [eax+24h], 80h
0x995E3E: jnz     loc_995D88
0x995E44: mov     edi, [ebp+18Ch+var_1B4]
0x995E47: push    [ebp+18Ch+arg_8]; struct localeinfo_struct *
0x995E4D: lea     ecx, [ebp+18Ch+var_1F8]; this
0x995E50: call    ??0_LocaleUpdate@@QAE@PAUlocaleinfo_struct@@@Z
0x995E55: mov     al, [edi]
0x995E57: test    al, al
0x995E59: mov     [ebp+18Ch+var_1A1], bl
0x995E5C: mov     [ebp+18Ch+var_188], ebx
0x995E5F: mov     [ebp+18Ch+var_1C8], ebx
0x995E62: jz      loc_996958
0x995E68: mov     edi, [ebp+18Ch+var_1B4]
0x995E6B: movzx   eax, al
0x995E6E: push    eax; C
0x995E6F: call    _isspace
0x995E74: test    eax, eax
0x995E76: pop     ecx
0x995E77: jz      short loc_995EAC
0x995E79: push    [ebp+18Ch+var_1A0]
0x995E7C: dec     [ebp+18Ch+var_188]
0x995E7F: lea     esi, [ebp+18Ch+var_188]
0x995E82: call    __whiteout
0x995E87: cmp     eax, 0FFFFFFFFh
0x995E8A: pop     ecx
0x995E8B: jz      short loc_995E98
0x995E8D: push    [ebp+18Ch+var_1A0]; File
0x995E90: push    eax; Ch
0x995E91: call    __ungetc_nolock
0x995E96: pop     ecx
0x995E97: pop     ecx
0x995E98: inc     edi
0x995E99: movzx   eax, byte ptr [edi]
0x995E9C: push    eax; C
0x995E9D: call    _isspace
0x995EA2: test    eax, eax
0x995EA4: pop     ecx
0x995EA5: jnz     short loc_995E98
0x995EA7: jmp     loc_9968F1
0x995EAC: cmp     byte ptr [edi], 25h ; '%'
0x995EAF: jnz     loc_996899
0x995EB5: xor     eax, eax
0x995EB7: mov     [ebp+18Ch+var_1E0], eax
0x995EBA: mov     [ebp+18Ch+var_1C9], al
0x995EBD: mov     [ebp+18Ch+var_1A8], eax
0x995EC0: mov     [ebp+18Ch+var_1B8], eax
0x995EC3: mov     [ebp+18Ch+var_198], eax
0x995EC6: mov     [ebp+18Ch+var_1A4], al
0x995EC9: mov     [ebp+18Ch+var_1A3], al
0x995ECC: mov     [ebp+18Ch+var_199], al
0x995ECF: mov     [ebp+18Ch+var_189], al
0x995ED2: mov     [ebp+18Ch+var_1A2], al
0x995ED5: mov     [ebp+18Ch+var_191], al
0x995ED8: mov     [ebp+18Ch+var_19A], 1
0x995EDC: mov     [ebp+18Ch+var_1D4], eax
0x995EDF: xor     esi, esi
0x995EE1: inc     edi
0x995EE2: movzx   ebx, byte ptr [edi]
0x995EE5: movzx   eax, bl
0x995EE8: push    eax; C
0x995EE9: call    _isdigit
0x995EEE: test    eax, eax
0x995EF0: pop     ecx
0x995EF1: jz      short loc_995F08
0x995EF3: mov     eax, [ebp+18Ch+var_198]
0x995EF6: inc     [ebp+18Ch+var_1B8]
0x995EF9: imul    eax, 0Ah
0x995EFC: lea     eax, [eax+ebx-30h]
0x995F00: mov     [ebp+18Ch+var_198], eax
0x995F03: jmp     loc_995FA8
0x995F08: cmp     ebx, 4Eh ; 'N'
0x995F0B: jg      short loc_995F7E
0x995F0D: jz      loc_995FA8
0x995F13: cmp     ebx, 2Ah ; '*'
0x995F16: jz      short loc_995F79
0x995F18: cmp     ebx, 46h ; 'F'
0x995F1B: jz      loc_995FA8
0x995F21: cmp     ebx, 49h ; 'I'
0x995F24: jz      short loc_995F30
0x995F26: cmp     ebx, 4Ch ; 'L'
0x995F29: jnz     short __input_l___$DEFAULT_LABEL$25497
0x995F2B: inc     [ebp+18Ch+var_19A]
0x995F2E: jmp     short loc_995FA8
0x995F30: mov     cl, [edi+1]
0x995F33: cmp     cl, 36h ; '6'
0x995F36: jnz     short loc_995F4D
0x995F38: lea     eax, [edi+2]
0x995F3B: cmp     byte ptr [eax], 34h ; '4'
0x995F3E: jnz     short loc_995F4D
0x995F40: inc     [ebp+18Ch+var_1D4]
0x995F43: mov     edi, eax
0x995F45: mov     [ebp+18Ch+var_1C0], esi
0x995F48: mov     [ebp+18Ch+var_1BC], esi
0x995F4B: jmp     short loc_995FA8
0x995F4D: cmp     cl, 33h ; '3'
0x995F50: jnz     short loc_995F5E
0x995F52: lea     eax, [edi+2]
0x995F55: cmp     byte ptr [eax], 32h ; '2'
0x995F58: jnz     short loc_995F5E
0x995F5A: mov     edi, eax
0x995F5C: jmp     short loc_995FA8
0x995F5E: cmp     cl, 64h ; 'd'
0x995F61: jz      short loc_995FA8
0x995F63: cmp     cl, 69h ; 'i'
0x995F66: jz      short loc_995FA8
0x995F68: cmp     cl, 6Fh ; 'o'
0x995F6B: jz      short loc_995FA8
0x995F6D: cmp     cl, 78h ; 'x'
0x995F70: jz      short loc_995FA8
0x995F72: cmp     cl, 58h ; 'X'
0x995F75: jnz     short __input_l___$DEFAULT_LABEL$25497
0x995F77: jmp     short loc_995FA8
0x995F79: inc     [ebp+18Ch+var_199]
0x995F7C: jmp     short loc_995FA8
0x995F7E: cmp     ebx, 68h ; 'h'
0x995F81: jz      short loc_995FA2
0x995F83: cmp     ebx, 6Ch ; 'l'
0x995F86: jz      short loc_995F92
0x995F88: cmp     ebx, 77h ; 'w'
0x995F8B: jz      short loc_995F9D
