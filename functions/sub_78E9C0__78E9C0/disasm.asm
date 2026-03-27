0x78E9C0: fldz
0x78E9C2: fld     [esp+arg_0]
0x78E9C6: fcom    st(1)
0x78E9C8: fnstsw  ax
0x78E9CA: test    ah, 5
0x78E9CD: jnp     short loc_78E9E9
0x78E9CF: fld1
0x78E9D1: fcom    st(1)
0x78E9D3: fnstsw  ax
0x78E9D5: fstp    st(1)
0x78E9D7: test    ah, 5
0x78E9DA: jnp     short loc_78E9E9
0x78E9DC: fstp    st(1)
0x78E9DE: fstp    [esp+arg_0]
0x78E9E2: fld     [esp+arg_0]
0x78E9E6: retn    4
0x78E9E9: fstp    st
0x78E9EB: fstp    [esp+arg_0]
0x78E9EF: fld     [esp+arg_0]
0x78E9F3: retn    4
