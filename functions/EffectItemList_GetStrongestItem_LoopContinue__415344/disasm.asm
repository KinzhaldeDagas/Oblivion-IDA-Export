0x415344: mov     eax, [ebp+8]
0x415347: test    eax, eax
0x415349: jz      short EffectItemList_GetStrongestItem___LoopFinish
0x41534B: lea     ebp, [eax-4]
0x41534E: test    ebp, ebp
0x415350: jnz     short EffectItemList_GetStrongestItem___LoopBody
