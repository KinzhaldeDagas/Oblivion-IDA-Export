0x415315: cmp     [esp+arg_18], 0
0x41531A: jz      short EffectItemList_GetStrongestItem___CheckRange
0x41531C: mov     ecx, esi
0x41531E: call    EffectItem_GetArea
0x415323: xor     edx, edx
0x415325: test    eax, eax
0x415327: setnle  dl
0x41532A: mov     eax, edx
0x41532C: test    eax, eax
0x41532E: jz      short EffectItemList_GetStrongestItem___LoopContinue
