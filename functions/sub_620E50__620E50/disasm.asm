0x620E50: push    esi
0x620E51: mov     esi, ecx
0x620E53: call    sub_6160B0
0x620E58: mov     eax, [esi+70h]
0x620E5B: cmp     eax, 2
0x620E5E: jz      short loc_620E65
0x620E60: cmp     eax, 4
0x620E63: jnz     short loc_620E6D
0x620E65: mov     ecx, esi
0x620E67: pop     esi
0x620E68: jmp     sub_61FE90
0x620E6D: mov     ecx, esi
0x620E6F: pop     esi
0x620E70: jmp     sub_61FEF0
