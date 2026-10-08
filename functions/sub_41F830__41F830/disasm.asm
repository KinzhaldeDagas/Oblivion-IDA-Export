0x41F830: push    13h; Test ExtraAction flag mask. Missing ExtraAction behaves as default flags byte 1. REFR save calls with 0x08 to decide whether to emit ONAM.
0x41F832: call    BaseExtraList_GetExtraData
0x41F837: test    eax, eax
0x41F839: jz      short loc_41F849
0x41F83B: movzx   eax, byte ptr [eax+0Ch]
0x41F83F: test    [esp+mask], eax
0x41F843: setnz   al
0x41F846: retn    4
0x41F849: mov     eax, 1
0x41F84E: test    [esp+mask], eax
0x41F852: setnz   al
0x41F855: retn    4
