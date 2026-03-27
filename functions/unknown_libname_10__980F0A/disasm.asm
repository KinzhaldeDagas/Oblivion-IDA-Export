0x980F0A: push    ebp
0x980F0B: mov     ebp, esp
0x980F0D: sub     esp, 38h
0x980F10: push    ebx
0x980F11: cmp     [ebp+arg_0], 123h
0x980F18: jnz     short loc_980F2C
0x980F1A: mov     eax, offset unknown_libname_10___unknown_libname_11
0x980F1F: mov     ecx, [ebp+arg_4]
0x980F22: mov     [ecx], eax
0x980F24: xor     eax, eax
0x980F26: inc     eax
0x980F27: jmp     loc_980FDC
0x980F2C: and     [ebp+var_28], 0
0x980F30: mov     [ebp+var_24], offset ?TranslatorGuardHandler@@YA?AW4_EXCEPTION_DISPOSITION@@PAUEHExceptionRecord@@PAUTranslatorGuardRN@@PAX2@Z
0x980F37: mov     eax, ds:0B30AACh
0x980F3C: lea     ecx, [ebp+var_28]
0x980F3F: xor     eax, ecx
0x980F41: mov     [ebp+var_20], eax
0x980F44: mov     eax, [ebp+arg_10]
0x980F47: mov     [ebp+var_1C], eax
0x980F4A: mov     eax, [ebp+arg_4]
0x980F4D: mov     [ebp+var_18], eax
0x980F50: mov     eax, [ebp+arg_14]
0x980F53: mov     [ebp+var_14], eax
0x980F56: mov     eax, [ebp+arg_18]
0x980F59: mov     [ebp+var_10], eax
0x980F5C: and     [ebp+var_C], 0
0x980F60: and     [ebp+var_8], 0
0x980F64: and     [ebp+var_4], 0
0x980F68: mov     [ebp+var_C], esp
0x980F6B: mov     [ebp+var_8], ebp
0x980F6E: mov     eax, large fs:0
0x980F74: mov     [ebp+var_28], eax
0x980F77: lea     eax, [ebp+var_28]
0x980F7A: mov     large fs:0, eax
0x980F80: mov     [ebp+var_38], 1
0x980F87: mov     eax, [ebp+arg_0]
0x980F8A: mov     [ebp+var_34], eax
0x980F8D: mov     eax, [ebp+arg_8]
0x980F90: mov     [ebp+var_30], eax
0x980F93: call    __getptd
0x980F98: mov     eax, [eax+80h]
0x980F9E: mov     [ebp+var_2C], eax
0x980FA1: lea     eax, [ebp+var_34]
0x980FA4: push    eax
0x980FA5: mov     eax, [ebp+arg_0]
0x980FA8: push    dword ptr [eax]
0x980FAA: call    [ebp+var_2C]
0x980FAD: pop     ecx
0x980FAE: pop     ecx
0x980FAF: and     [ebp+var_38], 0
