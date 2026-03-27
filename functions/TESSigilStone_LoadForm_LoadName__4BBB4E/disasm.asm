0x4BBB4E: test    esi, esi
0x4BBB50: jz      short loc_4BBB5E
0x4BBB52: lea     eax, [esi+24h]
0x4BBB55: push    ebx
0x4BBB56: push    eax
0x4BBB57: call    TESFullname_Load
0x4BBB5C: jmp     short TESSigilStone_LoadForm___ChunkLoop_Next_Popstack
0x4BBB5E: xor     eax, eax
0x4BBB60: push    ebx
0x4BBB61: push    eax
0x4BBB62: call    TESFullname_Load
0x4BBB67: jmp     short TESSigilStone_LoadForm___ChunkLoop_Next_Popstack
