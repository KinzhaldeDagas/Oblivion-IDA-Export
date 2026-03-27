0x414D91: cmp     dl, cl
0x414D93: jz      short EffectItemList_GetItemByIndex___return_item
0x414D95: mov     eax, [eax+4]
0x414D98: add     dl, 1
0x414D9B: test    eax, eax
0x414D9D: jnz     short EffectItemList_GetItemByIndex___Loop
