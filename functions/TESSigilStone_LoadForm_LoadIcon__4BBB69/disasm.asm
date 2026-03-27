0x4BBB69: test    esi, esi
0x4BBB6B: jz      short loc_4BBB79
0x4BBB6D: lea     eax, [esi+48h]
0x4BBB70: push    ebx
0x4BBB71: push    eax
0x4BBB72: call    TESTexture_Load
0x4BBB77: jmp     short TESSigilStone_LoadForm___ChunkLoop_Next_Popstack
0x4BBB79: xor     eax, eax
0x4BBB7B: push    ebx
0x4BBB7C: push    eax
0x4BBB7D: call    TESTexture_Load
0x4BBB82: jmp     short TESSigilStone_LoadForm___ChunkLoop_Next_Popstack
