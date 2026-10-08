0x68EBD2: cmp     eax, 4F505543h; Verified nested FourCC mappings CUPO -> Alloc_CurePoison, CUDI -> Alloc_CureDisease, and ABSK -> the downstream AbsorbEffect selector.
0x68EBD7: jg      short ActiveEffect_Base_CreateDynamic___SwitchEffectCodes_3; Verified nested FourCC mappings ABSP -> Alloc_Absorb and ABAT -> the downstream AbsorbEffect selector; other codes continue to CheckUseCreature/CheckUseWeapon fallback.
0x68EBD9: jz      short ActiveEffect_Base_CreateDynamic___Alloc_CurePoison; Verified (Oblivion fallback code): CUPO routes to the shared CureEffect constructor with internal type value 3.
0x68EBDB: cmp     eax, 49445543h
0x68EBE0: jz      short ActiveEffect_Base_CreateDynamic___Alloc_CureDisease; Verified (Oblivion fallback code): CUDI routes to the shared CureEffect constructor with internal type value 2.
0x68EBE2: cmp     eax, 4B534241h
0x68EBE7: jmp     short ActiveEffect_Base_CreateDynamic___SwitchEffectCodes_4; Verified ABSK/ABAT selector: when the decoded boolean is true it allocates AbsorbEffect; otherwise it continues to CheckUseCreature.
