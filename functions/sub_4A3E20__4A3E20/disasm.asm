0x4A3E20: mov     eax, [ecx+8]
0x4A3E23: test    eax, eax
0x4A3E25: jnz     short loc_4A3E39
0x4A3E27: mov     ecx, [esp+arg_0]; this
0x4A3E2B: push    eax; a3
0x4A3E2C: push    offset EmptyString; a2
0x4A3E31: call    BSStringT_Set
0x4A3E36: retn    4
0x4A3E39: mov     eax, [eax+4]
0x4A3E3C: test    eax, eax
0x4A3E3E: jnz     short loc_4A3E45
0x4A3E40: mov     eax, offset EmptyString
0x4A3E45: mov     ecx, [esp+arg_0]; this
0x4A3E49: push    0; a3
0x4A3E4B: push    eax; a2
0x4A3E4C: call    BSStringT_Set
0x4A3E51: retn    4
