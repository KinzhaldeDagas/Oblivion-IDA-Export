0x985DBA: push    0Ch
0x985DBC: push    offset stru_AFFA98
0x985DC1: call    __SEH_prolog4
0x985DC6: xor     ebx, ebx
0x985DC8: mov     [ebp+var_1C], ebx
0x985DCB: xor     eax, eax
0x985DCD: mov     esi, [ebp+File]
0x985DD0: cmp     esi, ebx
0x985DD2: setnz   al
0x985DD5: cmp     eax, ebx
0x985DD7: jnz     short loc_985DF9
0x985DD9: call    __errno
0x985DDE: mov     dword ptr [eax], 16h
0x985DE4: push    ebx
0x985DE5: push    ebx
0x985DE6: push    ebx
0x985DE7: push    ebx
0x985DE8: push    ebx
0x985DE9: call    __invalid_parameter
0x985DEE: add     esp, 14h
0x985DF1: or      eax, 0FFFFFFFFh
0x985DF4: jmp     loc_985EF9
0x985DF9: xor     eax, eax
0x985DFB: cmp     [ebp+Format], ebx
0x985DFE: setnz   al
0x985E01: cmp     eax, ebx
0x985E03: jz      short loc_985DD9
0x985E05: mov     [ebp+File], esi
0x985E08: push    esi
0x985E09: call    __lock_file
0x985E0E: pop     ecx
0x985E0F: mov     [ebp+ms_exc.registration.TryLevel], ebx
0x985E12: test    byte ptr [esi+0Ch], 40h
0x985E16: jnz     loc_985EC2
0x985E1C: push    esi; File
0x985E1D: call    __fileno
0x985E22: pop     ecx
0x985E23: cmp     eax, 0FFFFFFFFh
0x985E26: jz      short loc_985E56
0x985E28: push    esi; File
0x985E29: call    __fileno
0x985E2E: pop     ecx
0x985E2F: cmp     eax, 0FFFFFFFEh
0x985E32: jz      short loc_985E56
0x985E34: push    esi; File
0x985E35: call    __fileno
0x985E3A: sar     eax, 5
0x985E3D: lea     edi, ds:0BAAAC0h[eax*4]
0x985E44: push    esi; File
0x985E45: call    __fileno
0x985E4A: pop     ecx
0x985E4B: pop     ecx
0x985E4C: and     eax, 1Fh
0x985E4F: imul    eax, 28h ; '('
0x985E52: add     eax, [edi]
0x985E54: jmp     short loc_985E5B
0x985E56: mov     eax, offset aA_1
0x985E5B: test    byte ptr [eax+24h], 7Fh
0x985E5F: jnz     short loc_985EA6
0x985E61: push    esi; File
0x985E62: call    __fileno
0x985E67: pop     ecx
0x985E68: cmp     eax, 0FFFFFFFFh
0x985E6B: jz      short loc_985E9B
0x985E6D: push    esi; File
0x985E6E: call    __fileno
0x985E73: pop     ecx
0x985E74: cmp     eax, 0FFFFFFFEh
0x985E77: jz      short loc_985E9B
0x985E79: push    esi; File
0x985E7A: call    __fileno
0x985E7F: sar     eax, 5
0x985E82: lea     edi, ds:0BAAAC0h[eax*4]
0x985E89: push    esi; File
0x985E8A: call    __fileno
0x985E8F: pop     ecx
0x985E90: pop     ecx
0x985E91: and     eax, 1Fh
0x985E94: imul    eax, 28h ; '('
0x985E97: add     eax, [edi]
0x985E99: jmp     short loc_985EA0
0x985E9B: mov     eax, offset aA_1
0x985EA0: test    byte ptr [eax+24h], 80h
0x985EA4: jz      short loc_985EC2
0x985EA6: call    __errno
0x985EAB: mov     dword ptr [eax], 16h
0x985EB1: push    ebx
0x985EB2: push    ebx
0x985EB3: push    ebx
0x985EB4: push    ebx
0x985EB5: push    ebx
0x985EB6: call    __invalid_parameter
0x985EBB: add     esp, 14h
0x985EBE: or      [ebp+var_1C], 0FFFFFFFFh
0x985EC2: cmp     [ebp+var_1C], ebx
0x985EC5: jnz     short loc_985EEA
0x985EC7: push    esi; File
0x985EC8: call    __stbuf
0x985ECD: mov     edi, eax
0x985ECF: lea     eax, [ebp+arg_8]
0x985ED2: push    eax; int
0x985ED3: push    ebx; struct localeinfo_struct *
0x985ED4: push    [ebp+Format]; int
0x985ED7: push    esi; int
0x985ED8: call    __output_l
0x985EDD: mov     [ebp+var_1C], eax
0x985EE0: push    esi; File
0x985EE1: push    edi; int
0x985EE2: call    __ftbuf
0x985EE7: add     esp, 1Ch
0x985EEA: mov     [ebp+ms_exc.registration.TryLevel], 0FFFFFFFEh
0x985EF1: call    _fprintf___$LN18
