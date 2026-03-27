0x4AF762: mov     ecx, edi
0x4AF764: call    TESFile_GetChunkType
0x4AF769: cmp     eax, 49524353h
0x4AF76E: jg      TESLevCreature_LoadForm___SwitchChunkType_2
0x4AF774: jz      TESLevCreature_LoadForm___LoadScript
0x4AF77A: cmp     eax, 44494445h
0x4AF77F: jz      short TESLevCreature_LoadForm___LoadEditorID
0x4AF781: cmp     eax, 444C564Ch
0x4AF786: jz      short TESLevCreature_LoadForm___LoadLevListData
0x4AF788: cmp     eax, 464C564Ch
0x4AF78D: jnz     TESLevCreature_LoadForm___NextChunk
