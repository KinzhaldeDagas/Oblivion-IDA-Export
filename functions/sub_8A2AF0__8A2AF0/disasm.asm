0x8A2AF0: fld     [esp+arg_0]
0x8A2AF4: fld     st
0x8A2AF6: fabs
0x8A2AF8: fstp    [esp+arg_0]
0x8A2AFC: fld     [esp+arg_0]
0x8A2B00: fcomp   dword ptr ds:0A2F948h
0x8A2B06: fnstsw  ax
0x8A2B08: test    ah, 1
0x8A2B0B: jnz     short loc_8A2B2B
0x8A2B0D: fldz
0x8A2B0F: fcom    st(1)
0x8A2B11: fnstsw  ax
0x8A2B13: fstp    st(1)
0x8A2B15: test    ah, 5
0x8A2B18: jnp     short loc_8A2B22
0x8A2B1A: fstp    st
0x8A2B1C: fld     dword ptr ds:0A9740Ch
0x8A2B22: fstp    [esp+arg_0]
0x8A2B26: fld     [esp+arg_0]
0x8A2B2A: retn
0x8A2B2B: call    __CIacos
0x8A2B30: fstp    [esp+arg_0]
0x8A2B34: fld     [esp+arg_0]
0x8A2B38: retn
