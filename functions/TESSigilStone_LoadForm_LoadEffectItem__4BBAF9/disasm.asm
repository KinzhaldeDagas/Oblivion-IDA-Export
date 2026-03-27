0x4BBAF9: mov     eax, [esi+28h]
0x4BBAFC: test    eax, eax
0x4BBAFE: jnz     short loc_4BBB05
0x4BBB00: mov     eax, offset EmptyString
0x4BBB05: push    eax
0x4BBB06: push    ebx
0x4BBB07: lea     ecx, [esi+78h]
0x4BBB0A: call    EffectItemList_LoadItem
0x4BBB0F: jmp     TESSigilStone_LoadForm___ChunkLoop_Next
