0x674E10: mov     eax, [esp+arg_0]
0x674E14: cmp     eax, ds:0B3BCF8h
0x674E1A: jnz     short loc_674E26
0x674E1C: mov     dword ptr ds:0B3BCF8h, 0
0x674E26: mov     [esp+arg_0], eax
0x674E2A: add     ecx, 58h ; 'X'
0x674E2D: jmp     BSSimpleList_Remove
