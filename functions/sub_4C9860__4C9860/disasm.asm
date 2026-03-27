0x4C9860: cmp     byte ptr [esp+arg_0], 0
0x4C9865: jz      short loc_4C986D
0x4C9867: or      byte ptr [ecx+24h], 40h
0x4C986B: jmp     short loc_4C9871
0x4C986D: and     byte ptr [ecx+24h], 0BFh
0x4C9871: mov     eax, [ecx]
0x4C9873: mov     edx, [eax+40h]
0x4C9876: mov     [esp+arg_0], 8
0x4C987E: jmp     edx
