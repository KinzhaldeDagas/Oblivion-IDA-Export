0x99CAD7: push    ebp
0x99CAD8: mov     ebp, esp
0x99CADA: sub     esp, 18h
0x99CADD: xor     eax, eax
0x99CADF: push    ebx
0x99CAE0: mov     [ebp+var_4], eax
0x99CAE3: mov     [ebp+var_C], eax
0x99CAE6: mov     [ebp+var_8], eax
0x99CAE9: push    ebx
0x99CAEA: pushf
0x99CAEB: pop     eax
0x99CAEC: mov     ecx, eax
0x99CAEE: xor     eax, 200000h
0x99CAF3: push    eax
0x99CAF4: popf
0x99CAF5: pushf
0x99CAF6: pop     edx
0x99CAF7: sub     edx, ecx
0x99CAF9: jz      short unknown_libname_194___unknown_libname_195
0x99CAFB: push    ecx
0x99CAFC: popf
0x99CAFD: xor     eax, eax
0x99CAFF: cpuid
0x99CB01: mov     [ebp+var_C], eax
0x99CB04: mov     [ebp+var_18], ebx
0x99CB07: mov     [ebp+var_14], edx
0x99CB0A: mov     [ebp+var_10], ecx
0x99CB0D: mov     eax, 1
0x99CB12: cpuid
0x99CB14: mov     [ebp+var_4], edx
0x99CB17: mov     [ebp+var_8], eax
