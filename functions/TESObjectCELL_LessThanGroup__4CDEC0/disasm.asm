0x4CDEC0: push    ebx
0x4CDEC1: push    esi
0x4CDEC2: push    edi
0x4CDEC3: mov     edi, [esp+0Ch+a2]
0x4CDEC7: xor     bl, bl
0x4CDEC9: test    edi, edi
0x4CDECB: mov     esi, ecx
0x4CDECD: jz      short TESObjectCELL_LessThanGroup___def_4CDEE1
0x4CDECF: mov     eax, [edi]
0x4CDED1: cmp     eax, ds:0B05E20h
0x4CDED7: jnz     short TESObjectCELL_LessThanGroup___def_4CDEE1
0x4CDED9: mov     eax, [edi+0Ch]
0x4CDEDC: cmp     eax, 0Ah; switch 11 cases
0x4CDEDF: ja      short TESObjectCELL_LessThanGroup___def_4CDEE1
0x4CDEE1: jmp     ds:jpt_4CDEE1[eax*4]; switch jump
0x4CDEE8: push    edi; jumptable 004CDEE1 case 0
0x4CDEE9: call    TESForm_LessThanGroup
0x4CDEEE: pop     edi
0x4CDEEF: pop     esi
0x4CDEF0: mov     bl, al
0x4CDEF2: pop     ebx
0x4CDEF3: retn    4
0x4CDEF6: test    byte ptr [esi+24h], 1; jumptable 004CDEE1 case 2
0x4CDEFA: jz      short TESObjectCELL_LessThanGroup___def_4CDEE1
0x4CDEFC: call    sub_4CA5F0
0x4CDF01: cmp     eax, [edi+8]
0x4CDF04: jnb     short TESObjectCELL_LessThanGroup___def_4CDEE1
0x4CDF06: mov     bl, 1; jumptable 004CDEE1 case 7
