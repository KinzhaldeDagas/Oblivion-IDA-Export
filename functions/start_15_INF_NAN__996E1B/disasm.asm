0x996E1B: mov     edx, [esp+arg_0]
0x996E1F: cmp     eax, 7FF00000h
0x996E24: ja      short start_15___NaN_arg
0x996E26: cmp     edx, 0
0x996E29: jnz     short start_15___NaN_arg
0x996E2B: mov     eax, [esp+arg_4]
0x996E2F: cmp     eax, 7FF00000h
0x996E34: jnz     short start_15___INF_NEG
0x996E36: fld     ds:dbl_AAE830
0x996E3C: retn
