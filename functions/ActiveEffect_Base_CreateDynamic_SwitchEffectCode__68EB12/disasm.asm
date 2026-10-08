0x68EB12: mov     ecx, [esi+1Ch]; Verified (Oblivion): only the unregistered-code fallback is handled here. Registered DIWE/DIAR codes are dispatched through NiTMap_AECreatorFuncs before this fallback switch.
0x68EB15: mov     eax, [ecx+98h]
0x68EB1B: cmp     eax, 48535246h
0x68EB20: jg      ActiveEffect_Base_CreateDynamic___SwitchEffectCodes_2; Verified nested FourCC mappings CUPO -> Alloc_CurePoison, CUDI -> Alloc_CureDisease, and ABSK -> the downstream AbsorbEffect selector.
0x68EB26: jz      short ActiveEffect_Base_CreateDynamic___Alloc_Shield; Verified (Oblivion fallback code): FRSH and SHLD both allocate ShieldEffect; registered codes in NiTMap are handled before this switch.
0x68EB28: cmp     eax, 45484241h
0x68EB2D: jg      short ActiveEffect_Base_CreateDynamic___SwitchEffectCode_2; Verified fallback FourCC mappings FISH and LISH to ShieldEffect. Nonmatching codes in this range continue to CheckUseCreature.
0x68EB2F: jz      ActiveEffect_Base_CreateDynamic___Alloc_Absorb
0x68EB35: cmp     eax, 41464241h
0x68EB3A: jz      ActiveEffect_Base_CreateDynamic___Alloc_Absorb; Verified (Oblivion fallback codes): ABHE and ABFA select AbsorbEffect; CUPA selects the CureEffect paralysis constructor path. The code names and dispatched classes are direct; the hidden internal subtype values remain Unknown unless separately commented.
0x68EB40: cmp     eax, 41505543h
0x68EB45: jz      short ActiveEffect_Base_CreateDynamic___Alloc_CureParalysis; Verified allocation for CUPA: creates the shared CureEffect class and passes internal MgefCode PARA to CureEffect_constr_MgefCode; exact internal subtype naming beyond the direct constructor call remains Unknown.
0x68EB47: cmp     eax, 444C4853h
0x68EB4C: jz      short ActiveEffect_Base_CreateDynamic___Alloc_Shield
0x68EB4E: jmp     ActiveEffect_Base_CreateDynamic___CheckUseCreature; Verified generic effect fallback: EffectSetting flag 0x40000 selects SummonCreatureEffect; otherwise dispatch continues through weapon/value-modifier handling. Other bits remain Unknown.
