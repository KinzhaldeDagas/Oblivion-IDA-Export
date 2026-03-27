0x4BBB37: cmp     eax, 4E4F4349h
0x4BBB3C: jg      short TESSigilStone_LoadForm___SwitchChunkType_3
0x4BBB3E: jz      short TESSigilStone_LoadForm___LoadIcon
0x4BBB40: cmp     eax, 4C444F4Dh
0x4BBB45: jz      short TESSigilStone_LoadForm___LoadModel
0x4BBB47: cmp     eax, 4C4C5546h
0x4BBB4C: jnz     short TESSigilStone_LoadForm___ChunkLoop_Next
