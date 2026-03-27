0x574E00: push    0FFFFFFFFh
0x574E02: push    offset SEH_574E00
0x574E07: mov     eax, large fs:0
0x574E0D: push    eax
0x574E0E: sub     esp, 814h
0x574E14: mov     eax, ds:0B30AACh
0x574E19: xor     eax, esp
0x574E1B: mov     [esp+820h+var_10], eax
0x574E22: push    ebx
0x574E23: push    ebp
0x574E24: push    esi
0x574E25: push    edi
0x574E26: mov     eax, ds:0B30AACh
0x574E2B: xor     eax, esp
0x574E2D: push    eax
0x574E2E: lea     eax, [esp+834h+var_C]
0x574E35: mov     large fs:0, eax
0x574E3B: mov     [esp+834h+var_81C], ecx
0x574E3F: mov     ebx, [esp+834h+arg_0]
0x574E46: mov     eax, [esp+834h+arg_14]
0x574E4D: mov     esi, [esp+834h+arg_8]
0x574E54: mov     edi, [esp+834h+arg_18]
0x574E5B: xor     edx, edx
0x574E5D: mov     [esp+834h+var_818], edx
0x574E61: mov     [esp+834h+var_814], ebx
0x574E65: mov     [esp+834h+var_820], eax
0x574E69: mov     [ebx], edx
0x574E6B: mov     [ebx+4], dx
0x574E6F: mov     [ebx+6], dx
0x574E73: mov     eax, [esi]
0x574E75: mov     ebp, [esp+834h+arg_4]
0x574E7C: movzx   eax, byte ptr [eax+ebp]
0x574E80: push    eax
0x574E81: mov     [esp+838h+var_4], edx
0x574E88: mov     [esp+838h+var_818], 1
0x574E90: mov     [esp+838h+var_810], dl
0x574E94: mov     [edi], al
0x574E96: call    sub_573760
0x574E9B: test    al, 20h
0x574E9D: jnz     short loc_574F13
0x574E9F: nop
0x574EA0: mov     ecx, [esp+834h+arg_C]
0x574EA7: test    ecx, eax
0x574EA9: jnz     short loc_574F1F
0x574EAB: mov     ecx, [esp+834h+arg_10]
0x574EB2: test    ecx, ecx
0x574EB4: jz      short loc_574EBA
0x574EB6: test    ecx, eax
0x574EB8: jz      short loc_574F2A
0x574EBA: mov     al, [edi]
0x574EBC: cmp     al, 0Ah
0x574EBE: jz      short loc_574EFA
0x574EC0: cmp     al, 0Dh
0x574EC2: jz      short loc_574EFA
0x574EC4: cmp     [esp+834h+arg_1C], 0
0x574ECC: jz      short loc_574EFA
0x574ECE: mov     eax, [esi]
0x574ED0: mov     cl, [eax+ebp]
0x574ED3: mov     [esp+edx+834h+var_810], cl
0x574ED7: add     edx, 1
0x574EDA: cmp     edx, 7D0h
0x574EE0: mov     [esp+edx+834h+var_810], 0
0x574EE5: jle     short loc_574EFA
0x574EE7: lea     edx, [esp+834h+var_810]
0x574EEB: push    edx
0x574EEC: mov     ecx, ebx
0x574EEE: call    BSStringT_Append
0x574EF3: mov     [esp+834h+var_810], 0
0x574EF8: xor     edx, edx
0x574EFA: add     dword ptr [esi], 1
0x574EFD: mov     eax, [esi]
0x574EFF: movzx   eax, byte ptr [eax+ebp]
0x574F03: mov     ecx, [esp+834h+var_81C]
0x574F07: push    eax
0x574F08: mov     [edi], al
0x574F0A: call    sub_573760
0x574F0F: test    al, 20h
0x574F11: jz      short loc_574EA0
0x574F13: mov     ecx, [esp+834h+var_820]
0x574F17: mov     dword ptr [ecx], 20h ; ' '
0x574F1D: jmp     short loc_574F42
0x574F1F: mov     edx, [esp+834h+var_820]
0x574F23: mov     [edx], eax
0x574F25: add     dword ptr [esi], 1
0x574F28: jmp     short loc_574F42
0x574F2A: mov     eax, [esi]
0x574F2C: movzx   eax, byte ptr [eax+ebp]
0x574F30: mov     ecx, [esp+834h+var_81C]
0x574F34: push    eax
0x574F35: mov     [edi], al
0x574F37: call    sub_573760
0x574F3C: mov     ecx, [esp+834h+var_820]
0x574F40: mov     [ecx], eax
0x574F42: lea     edx, [esp+834h+var_810]
0x574F46: push    edx
0x574F47: mov     ecx, ebx
0x574F49: call    BSStringT_Append
0x574F4E: mov     eax, ebx
0x574F50: mov     ecx, [esp+834h+var_C]
0x574F57: mov     large fs:0, ecx
0x574F5E: pop     ecx
0x574F5F: pop     edi
0x574F60: pop     esi
0x574F61: pop     ebp
0x574F62: pop     ebx
0x574F63: mov     ecx, [esp+820h+var_10]
0x574F6A: xor     ecx, esp
0x574F6C: call    @__security_check_cookie@4; __security_check_cookie(x)
0x574F71: add     esp, 820h
0x574F77: retn    20h ; ' '
