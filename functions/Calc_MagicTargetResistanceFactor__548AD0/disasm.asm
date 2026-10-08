0x548AD0: push    ecx; AVU hook site: Calc_MagicTargetResistanceFactor entry. Stack +0x10 is magic-item resistance; +0x14 is effect-specific resistance. AVU applies optional DR to those exact slots before vanilla >=100 checks.
0x548AD1: fld     [esp+4+arg_C]; First vanilla threshold check uses arg_C / entry +0x10, the magic-item resistance bucket.
0x548AD5: fld     qword ptr ds:0A309F0h
0x548ADB: fcom    st(1)
0x548ADD: fnstsw  ax
0x548ADF: test    ah, 41h
0x548AE2: jnp     short Calc_MagicTargetResistanceFactor___Return_0f
0x548AE4: fld     [esp+4+arg_10]; Second vanilla threshold check uses arg_10 / entry +0x14, the effect-specific resistance.
0x548AE8: fcom    st(1)
0x548AEA: fnstsw  ax
0x548AEC: test    ah, 1
0x548AEF: jz      short Calc_MagicTargetResistanceFactor___Return_0f_
