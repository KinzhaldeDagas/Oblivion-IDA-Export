0x68EC58: mov     edx, [ecx+58h]; Verified generic effect fallback: EffectSetting flag 0x40000 selects SummonCreatureEffect; otherwise dispatch continues through weapon/value-modifier handling. Other bits remain Unknown.
0x68EC5B: shr     edx, 12h
0x68EC5E: test    dl, 1
0x68EC61: jz      short ActiveEffect_Base_CreateDynamic___CheckUseWeapon; Verified (Oblivion): EffectSetting.effectFlags mask 0x40000 selects SummonCreatureEffect; the symbolic flag name is Unknown.
