0x414E2F: cmp     edi, ebx
0x414E31: mov     [esp+arg_1C], 0FFFFFFFFh
0x414E39: jz      short EffectItemList_CopyFrom___UpdateHostileCount
0x414E3B: mov     esi, [esp+arg_10]
0x414E3F: add     esi, 4
0x414E42: cmp     [esi+4], ebx
0x414E45: jz      short EffectItemList_CopyFrom___AppendNewEffectItem
