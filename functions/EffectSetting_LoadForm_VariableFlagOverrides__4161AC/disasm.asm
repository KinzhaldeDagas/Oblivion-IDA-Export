0x4161AC: mov     edx, EffectSetting_DisplayedFlagListSize
0x4161B2: xor     eax, eax
0x4161B4: test    edx, edx
0x4161B6: jle     short EffectSetting_LoadForm___ForcedFlagOverrrides
0x4161B8: jmp     short EffectSetting_LoadForm___VariableFO_LoopBody
