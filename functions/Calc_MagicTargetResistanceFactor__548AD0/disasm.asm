0x548AD0: push    ecx
0x548AD1: fld     [esp+4+arg_C]
0x548AD5: fld     qword ptr ds:0A309F0h
0x548ADB: fcom    st(1)
0x548ADD: fnstsw  ax
0x548ADF: test    ah, 41h
0x548AE2: jnp     short Calc_MagicTargetResistanceFactor___Return_0f
0x548AE4: fld     [esp+4+arg_10]
0x548AE8: fcom    st(1)
0x548AEA: fnstsw  ax
0x548AEC: test    ah, 1
0x548AEF: jz      short Calc_MagicTargetResistanceFactor___Return_0f_
