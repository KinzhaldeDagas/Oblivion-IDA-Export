0x68EB8D: sub     eax, 48534946h; Verified fallback FourCC mappings FISH and LISH to ShieldEffect. Nonmatching codes in this range continue to CheckUseCreature.
0x68EB92: jz      short ActiveEffect_Base_CreateDynamic___Alloc_Shield
0x68EB94: sub     eax, 6
0x68EB97: jnz     ActiveEffect_Base_CreateDynamic___CheckUseCreature; Verified generic effect fallback: EffectSetting flag 0x40000 selects SummonCreatureEffect; otherwise dispatch continues through weapon/value-modifier handling. Other bits remain Unknown.
