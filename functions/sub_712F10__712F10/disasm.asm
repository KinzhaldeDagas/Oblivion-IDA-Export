0x712F10: push    0FFFFFFFFh
0x712F12: push    offset SEH_712F10
0x712F17: mov     eax, large fs:0
0x712F1D: push    eax
0x712F1E: sub     esp, 0Ch
0x712F21: push    ebx
0x712F22: push    ebp
0x712F23: push    esi
0x712F24: push    edi
0x712F25: mov     eax, ds:0B30AACh
0x712F2A: xor     eax, esp
0x712F2C: push    eax
0x712F2D: lea     eax, [esp+2Ch+var_C]
0x712F31: mov     large fs:0, eax
0x712F37: mov     edi, ecx
0x712F39: mov     eax, [edi+21Ch]
0x712F3F: push    1
0x712F41: lea     ecx, [esp+30h+var_14]
0x712F45: push    ecx
0x712F46: push    4
0x712F48: lea     edx, [esp+38h+var_18]
0x712F4C: push    edx
0x712F4D: push    eax
0x712F4E: mov     eax, [eax+4]
0x712F51: mov     [esp+40h+var_14], 4
0x712F59: call    eax
0x712F5B: mov     ecx, [esp+40h+var_18]
0x712F5F: add     esp, 14h
0x712F62: lea     ebp, [edi+204h]
0x712F68: push    ecx
0x712F69: mov     ecx, ebp
0x712F6B: call    sub_8BCA30
0x712F70: xor     ebx, ebx
0x712F72: cmp     [esp+2Ch+var_18], ebx
0x712F76: jbe     loc_71300F
0x712F7C: mov     eax, [edi+21Ch]
0x712F82: push    1
0x712F84: lea     edx, [esp+30h+var_14]
0x712F88: push    edx
0x712F89: mov     edx, [eax+4]
0x712F8C: push    4
0x712F8E: lea     ecx, [esp+38h+var_10]
0x712F92: push    ecx
0x712F93: push    eax
0x712F94: mov     [esp+40h+var_14], 4
0x712F9C: call    edx
0x712F9E: mov     eax, [esp+40h+var_10]
0x712FA2: add     esp, 14h
0x712FA5: cmp     eax, 0FFFFFFFFh
0x712FA8: jnz     short loc_712FAE
0x712FAA: xor     esi, esi
0x712FAC: jmp     short loc_712FB7
0x712FAE: mov     ecx, [edi+1F0h]
0x712FB4: mov     esi, [ecx+eax*4]
0x712FB7: test    esi, esi
0x712FB9: mov     [esp+2Ch+var_14], esi
0x712FBD: jz      short loc_712FC9
0x712FBF: lea     edx, [esi+4]
0x712FC2: push    edx; lpAddend
0x712FC3: call    dword ptr ds:0A28078h
0x712FC9: lea     eax, [esp+2Ch+var_14]
0x712FCD: push    eax
0x712FCE: push    ebx
0x712FCF: mov     ecx, ebp
0x712FD1: mov     [esp+34h+var_4], 0
0x712FD9: call    sub_8BCD40
0x712FDE: test    esi, esi
0x712FE0: mov     [esp+2Ch+var_4], 0FFFFFFFFh
0x712FE8: jz      short loc_713002
0x712FEA: lea     ecx, [esi+4]
0x712FED: push    ecx; lpAddend
0x712FEE: call    dword ptr ds:0A2807Ch
0x712FF4: test    eax, eax
0x712FF6: jnz     short loc_713002
0x712FF8: mov     edx, [esi]
0x712FFA: mov     eax, [edx]
0x712FFC: push    1
0x712FFE: mov     ecx, esi
0x713000: call    eax
0x713002: add     ebx, 1
0x713005: cmp     ebx, [esp+2Ch+var_18]
0x713009: jb      loc_712F7C
0x71300F: mov     ecx, dword ptr [esp+2Ch+var_C]
0x713013: mov     large fs:0, ecx
0x71301A: pop     ecx
0x71301B: pop     edi
0x71301C: pop     esi
0x71301D: pop     ebp
0x71301E: pop     ebx
0x71301F: add     esp, 18h
0x713022: retn
