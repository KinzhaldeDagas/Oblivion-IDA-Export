0x68EBD2: cmp     eax, 4F505543h
0x68EBD7: jg      short ActiveEffect_Base_CreateDynamic___SwitchEffectCodes_3
0x68EBD9: jz      short ActiveEffect_Base_CreateDynamic___Alloc_CurePoison
0x68EBDB: cmp     eax, 49445543h
0x68EBE0: jz      short ActiveEffect_Base_CreateDynamic___Alloc_CureDisease
0x68EBE2: cmp     eax, 4B534241h
0x68EBE7: jmp     short ActiveEffect_Base_CreateDynamic___SwitchEffectCodes_4
