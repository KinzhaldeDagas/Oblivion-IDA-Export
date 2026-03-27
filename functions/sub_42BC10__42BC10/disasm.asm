0x42BC10: mov     eax, [esp+arg_0]
0x42BC14: mov     edx, [ecx]
0x42BC16: mov     ecx, [ecx+4]
0x42BC19: push    esi
0x42BC1A: mov     esi, [eax]
0x42BC1C: mov     eax, [eax+4]
0x42BC1F: cmp     ecx, eax
0x42BC21: ja      short loc_42BC3A
0x42BC23: jb      short loc_42BC29
0x42BC25: cmp     edx, esi
0x42BC27: jnb     short loc_42BC30
0x42BC29: or      eax, 0FFFFFFFFh
0x42BC2C: pop     esi
0x42BC2D: retn    4
0x42BC30: cmp     ecx, eax
0x42BC32: jb      short loc_42BC43
0x42BC34: ja      short loc_42BC3A
0x42BC36: cmp     edx, esi
0x42BC38: jbe     short loc_42BC43
0x42BC3A: mov     eax, 1
0x42BC3F: pop     esi
0x42BC40: retn    4
0x42BC43: xor     eax, eax
0x42BC45: pop     esi
0x42BC46: retn    4
