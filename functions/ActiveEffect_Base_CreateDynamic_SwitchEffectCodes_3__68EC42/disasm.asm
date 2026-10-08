0x68EC42: cmp     eax, 50534241h; Verified nested FourCC mappings ABSP -> Alloc_Absorb and ABAT -> the downstream AbsorbEffect selector; other codes continue to CheckUseCreature/CheckUseWeapon fallback.
0x68EC47: jz      ActiveEffect_Base_CreateDynamic___Alloc_Absorb; Verified (Oblivion fallback code): ABSP selects AbsorbEffect.
0x68EC4D: cmp     eax, 54414241h
