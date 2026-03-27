0x529840: cmp     byte ptr [esp+arg_0], 0
0x529845: jz      short loc_52984D
0x529847: or      byte ptr [ecx+3Ch], 2
0x52984B: jmp     short loc_529851
0x52984D: and     byte ptr [ecx+3Ch], 0FDh
0x529851: mov     eax, [ecx]
0x529853: mov     edx, [eax+40h]
0x529856: mov     [esp+arg_0], 4
0x52985E: jmp     edx
