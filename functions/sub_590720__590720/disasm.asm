0x590720: cmp     [esp+arg_0], 0FDEh
0x590728: jnz     short loc_590739
0x59072A: push    0; a3
0x59072C: push    offset EmptyString; a2
0x590731: add     ecx, 48h ; 'H'; this
0x590734: call    BSStringT_Set
0x590739: xor     eax, eax
0x59073B: retn    0Ch
