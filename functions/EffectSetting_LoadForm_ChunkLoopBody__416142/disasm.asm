0x416142: cmp     eax, 45435345h
0x416147: jg      EffectSetting_LoadForm___SwitchMoreChunkTypes_1
0x41614D: jz      EffectSetting_LoadForm___LoadCounterEffects
0x416153: cmp     eax, 43534544h
0x416158: jg      EffectSetting_LoadForm___SwitchMoreChunkTypes_2
0x41615E: jz      EffectSetting_LoadForm___LoadDescription
0x416164: cmp     eax, 41544144h
0x416169: jz      short EffectSetting_LoadForm___LoadEffectSetting
0x41616B: cmp     eax, 42444F4Dh
0x416170: jz      EffectSetting_LoadForm___LoadModel
0x416176: jmp     EffectSetting_LoadForm___ChunkLoopContinue
