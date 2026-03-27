0x4162D1: cmp     eax, 4E4F4349h
0x4162D6: jg      short EffectSetting_LoadForm___SwitchMoreChunkTypes_3
0x4162D8: jz      short EffectSetting_LoadForm___LoadIcon
0x4162DA: cmp     eax, 4C444F4Dh
0x4162DF: jz      short EffectSetting_LoadForm___LoadModel
0x4162E1: cmp     eax, 4C4C5546h
0x4162E6: jnz     short EffectSetting_LoadForm___ChunkLoopContinue
