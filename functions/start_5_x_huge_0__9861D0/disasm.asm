0x9861D0: ja      short start_5___not_in_range_0
0x9861D2: mov     eax, [esp+arg_8]
0x9861D6: mov     ecx, eax
0x9861D8: and     eax, 0FFFFFh
0x9861DD: or      eax, [esp+arg_4]
0x9861E1: jnz     short start_5___not_in_range_0
0x9861E3: and     ecx, 80000000h
0x9861E9: fstp    st
0x9861EB: jz      short start_5___ret_zero_0
0x9861ED: fldpi
0x9861EF: jmp     short start_5___exit_4
