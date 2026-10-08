0x4D8260: add     ecx, 44h ; 'D'; this
0x4D8263: jmp     ExtraDataList_TestActionFlagBits; Test ExtraAction flag mask. Missing ExtraAction behaves as default flags byte 1. REFR save calls with 0x08 to decide whether to emit ONAM.
