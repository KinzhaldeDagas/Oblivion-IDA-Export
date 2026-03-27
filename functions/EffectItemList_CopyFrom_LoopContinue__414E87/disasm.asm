0x414E87: mov     eax, [ebp+8]
0x414E8A: cmp     eax, ebx
0x414E8C: jz      short EffectItemList_CopyFrom___Done
0x414E8E: lea     ebp, [eax-4]
0x414E91: cmp     ebp, ebx
0x414E93: jnz     EffectItemList_CopyFrom___LoopBody
