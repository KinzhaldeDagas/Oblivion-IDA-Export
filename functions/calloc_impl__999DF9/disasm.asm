0x999DF9: push    0Ch
0x999DFB: push    offset stru_B00068
0x999E00: call    __SEH_prolog4
0x999E05: mov     ecx, [ebp+arg_0]
0x999E08: xor     edi, edi
0x999E0A: cmp     ecx, edi
0x999E0C: jbe     short loc_999E3C
0x999E0E: push    0FFFFFFE0h
0x999E10: pop     eax
0x999E11: xor     edx, edx
0x999E13: div     ecx
0x999E15: cmp     eax, [ebp+arg_4]
0x999E18: sbb     eax, eax
0x999E1A: inc     eax
0x999E1B: jnz     short loc_999E3C
0x999E1D: call    __errno
0x999E22: mov     dword ptr [eax], 0Ch
0x999E28: push    edi
0x999E29: push    edi
0x999E2A: push    edi
0x999E2B: push    edi
0x999E2C: push    edi
0x999E2D: call    __invalid_parameter
0x999E32: add     esp, 14h
0x999E35: xor     eax, eax
0x999E37: jmp     loc_999F11
0x999E3C: imul    ecx, [ebp+arg_4]
0x999E40: mov     esi, ecx
0x999E42: mov     [ebp+arg_0], esi
0x999E45: cmp     esi, edi
0x999E47: jnz     short loc_999E4C
0x999E49: xor     esi, esi
0x999E4B: inc     esi
0x999E4C: xor     ebx, ebx
0x999E4E: mov     [ebp+var_1C], ebx
0x999E51: cmp     esi, 0FFFFFFE0h
0x999E54: ja      short loc_999EBF
0x999E56: cmp     dword_BAABC0, 3
0x999E5D: jnz     short loc_999EAA
0x999E5F: add     esi, 0Fh
0x999E62: and     esi, 0FFFFFFF0h
0x999E65: mov     [ebp+arg_4], esi
0x999E68: mov     eax, [ebp+arg_0]
0x999E6B: cmp     eax, dword_BAABCC
0x999E71: ja      short loc_999EAA
0x999E73: push    4
0x999E75: call    __lock
0x999E7A: pop     ecx
0x999E7B: mov     [ebp+ms_exc.registration.TryLevel], edi
0x999E7E: push    [ebp+arg_0]
0x999E81: call    ___sbh_alloc_block
0x999E86: pop     ecx
0x999E87: mov     [ebp+var_1C], eax
0x999E8A: mov     [ebp+ms_exc.registration.TryLevel], 0FFFFFFFEh
0x999E91: call    __calloc_impl___$LN24_5
