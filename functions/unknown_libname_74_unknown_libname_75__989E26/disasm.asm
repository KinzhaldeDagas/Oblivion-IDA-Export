0x989E26: push    0
0x989E28: push    [esp+4+arg_C]
0x989E2C: push    [esp+8+arg_8]
0x989E30: call    __calloc_impl
0x989E35: mov     edi, eax
0x989E37: add     esp, 0Ch
0x989E3A: test    edi, edi
0x989E3C: jnz     short loc_989E65
0x989E3E: cmp     dword_BA9E0C, eax
0x989E44: jbe     short loc_989E65
0x989E46: push    esi; dwMilliseconds
0x989E47: call    ds:Sleep
0x989E4D: lea     eax, [esi+3E8h]
0x989E53: cmp     eax, dword_BA9E0C
0x989E59: jbe     short loc_989E5E
0x989E5B: or      eax, 0FFFFFFFFh
0x989E5E: cmp     eax, 0FFFFFFFFh
0x989E61: mov     esi, eax
0x989E63: jnz     short unknown_libname_74___unknown_libname_75
0x989E65: mov     eax, edi
0x989E67: pop     edi
0x989E68: pop     esi
0x989E69: retn
