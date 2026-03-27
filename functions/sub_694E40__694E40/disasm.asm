0x694E40: mov     eax, [esp+arg_0]
0x694E44: push    esi
0x694E45: push    eax
0x694E46: mov     esi, ecx
0x694E48: call    sub_69F740
0x694E4D: mov     ecx, ds:0B33B00h
0x694E53: add     ax, 8
0x694E57: cmp     byte ptr [ecx+7Ch], 64h ; 'd'
0x694E5B: movzx   eax, ax
0x694E5E: jnb     short loc_694E63
0x694E60: add     eax, 4
0x694E63: add     eax, 8
0x694E66: cmp     dword ptr [esi+80h], 2
0x694E6D: pop     esi
0x694E6E: jnz     short locret_694E73
0x694E70: add     eax, 4
0x694E73: retn    4
