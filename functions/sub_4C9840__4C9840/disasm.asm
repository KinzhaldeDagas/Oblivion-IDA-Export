0x4C9840: cmp     byte ptr [esp+arg_0], 0
0x4C9845: jz      short loc_4C984D
0x4C9847: or      byte ptr [ecx+24h], 20h
0x4C984B: jmp     short loc_4C9851
0x4C984D: and     byte ptr [ecx+24h], 0DFh
0x4C9851: mov     eax, [ecx]
0x4C9853: mov     edx, [eax+40h]
0x4C9856: mov     [esp+arg_0], 8
0x4C985E: jmp     edx
