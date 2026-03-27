0x5FF77A: fldz
0x5FF77C: fcom    [esp+arg_38]
0x5FF780: fnstsw  ax
0x5FF782: test    ah, 5
0x5FF785: jnp     short loc_5FF7A3
0x5FF787: fstp    st
0x5FF789: sub     esp, 8
0x5FF78C: fld     [esp+8+arg_34]
0x5FF790: fstp    [esp+8+var_4]; float
0x5FF794: fld     [esp+8+arg_14]
0x5FF798: fstp    [esp+8+var_8]; float
0x5FF79B: call    Calc_DamageToArmor
0x5FF7A0: add     esp, 8
0x5FF7A3: test    ebp, ebp
0x5FF7A5: fstp    [esp+arg_30]
