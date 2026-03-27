0x989DE6: push    [esp+Size]; Size
0x989DEA: call    _malloc
0x989DEF: mov     edi, eax
0x989DF1: test    edi, edi
0x989DF3: pop     ecx
0x989DF4: jnz     short loc_989E1D
0x989DF6: cmp     dword_BA9E0C, eax
0x989DFC: jbe     short loc_989E1D
0x989DFE: push    esi; dwMilliseconds
0x989DFF: call    ds:Sleep
0x989E05: lea     eax, [esi+3E8h]
0x989E0B: cmp     eax, dword_BA9E0C
0x989E11: jbe     short loc_989E16
0x989E13: or      eax, 0FFFFFFFFh
0x989E16: cmp     eax, 0FFFFFFFFh
0x989E19: mov     esi, eax
0x989E1B: jnz     short unknown_libname_72___unknown_libname_73
0x989E1D: mov     eax, edi
0x989E1F: pop     edi
0x989E20: pop     esi
0x989E21: retn
