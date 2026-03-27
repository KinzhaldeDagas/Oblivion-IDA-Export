0x8DEF60: push    esi
0x8DEF61: mov     esi, ecx
0x8DEF63: mov     ecx, [esi+8]
0x8DEF66: lea     eax, [esi-8]
0x8DEF69: neg     eax
0x8DEF6B: sbb     eax, eax
0x8DEF6D: and     eax, esi
0x8DEF6F: push    eax
0x8DEF70: call    sub_898B20
0x8DEF75: cmp     word ptr [esi-4], 0
0x8DEF7A: lea     ecx, [esi-8]
0x8DEF7D: pop     esi
0x8DEF7E: jz      short locret_8DEF97
0x8DEF80: dec     word ptr [ecx+6]
0x8DEF84: cmp     word ptr [ecx+6], 0
0x8DEF89: jnz     short locret_8DEF97
0x8DEF8B: mov     eax, [ecx]
0x8DEF8D: mov     [esp+arg_0], 1
0x8DEF95: jmp     dword ptr [eax]
0x8DEF97: retn    4
