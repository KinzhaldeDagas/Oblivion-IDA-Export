0x42B650: mov     ecx, [ecx]
0x42B652: test    ecx, ecx
0x42B654: jz      short loc_42B65B
0x42B656: jmp     GetTeleportCellName
0x42B65B: mov     ecx, [esp+arg_0]; this
0x42B65F: push    0; a3
0x42B661: push    offset EmptyString; a2
0x42B666: call    BSStringT_Set
0x42B66B: retn    4
