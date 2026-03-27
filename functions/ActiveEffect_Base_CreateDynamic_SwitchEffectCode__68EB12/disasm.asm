0x68EB12: mov     ecx, [esi+1Ch]
0x68EB15: mov     eax, [ecx+98h]
0x68EB1B: cmp     eax, 48535246h
0x68EB20: jg      ActiveEffect_Base_CreateDynamic___SwitchEffectCodes_2
0x68EB26: jz      short ActiveEffect_Base_CreateDynamic___Alloc_Shield
0x68EB28: cmp     eax, 45484241h
0x68EB2D: jg      short ActiveEffect_Base_CreateDynamic___SwitchEffectCode_2
0x68EB2F: jz      ActiveEffect_Base_CreateDynamic___Alloc_Absorb
0x68EB35: cmp     eax, 41464241h
0x68EB3A: jz      ActiveEffect_Base_CreateDynamic___Alloc_Absorb
0x68EB40: cmp     eax, 41505543h
0x68EB45: jz      short ActiveEffect_Base_CreateDynamic___Alloc_CureParalysis
0x68EB47: cmp     eax, 444C4853h
0x68EB4C: jz      short ActiveEffect_Base_CreateDynamic___Alloc_Shield
0x68EB4E: jmp     ActiveEffect_Base_CreateDynamic___CheckUseCreature
