0x980DCA: push    ebx
0x980DCB: push    esi
0x980DCC: push    edi
0x980DCD: mov     ebx, offset Target
0x980DD2: push    0; Value
0x980DD4: push    ebx; Target
0x980DD5: call    dword ptr ds:0A28188h
0x980DDB: mov     esi, eax
0x980DDD: test    esi, esi
0x980DDF: jz      short loc_980DF9
0x980DE1: push    dword ptr [esi+8]
0x980DE4: mov     edi, [esi]
0x980DE6: call    __free_locale
0x980DEB: push    esi; Memory
0x980DEC: call    _free
0x980DF1: test    edi, edi
0x980DF3: pop     ecx
0x980DF4: pop     ecx
0x980DF5: mov     esi, edi
0x980DF7: jnz     short loc_980DE1
0x980DF9: add     ebx, 4
0x980DFC: cmp     ebx, offset dword_BA9D90
0x980E02: jl      short loc_980DD2
0x980E04: pop     edi
0x980E05: pop     esi
0x980E06: pop     ebx
0x980E07: retn
