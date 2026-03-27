0x4BBA80: cmp     eax, 49524353h
0x4BBA85: jg      TESSigilStone_LoadForm___SwicthChunkType_2
0x4BBA8B: jz      TESSigilStone_LoadForm___LoadScript
0x4BBA91: cmp     eax, 44494445h
0x4BBA96: jg      short TESSigilStone_LoadForm___SwitchChunkType_4
0x4BBA98: jz      short TESSigilStone_LoadForm___LoadEditorID
0x4BBA9A: cmp     eax, 41544144h
0x4BBA9F: jz      short TESSigilStone_LoadForm___LoadMainData
0x4BBAA1: cmp     eax, 42444F4Dh
0x4BBAA6: jz      TESSigilStone_LoadForm___LoadModel
0x4BBAAC: jmp     TESSigilStone_LoadForm___ChunkLoop_Next
