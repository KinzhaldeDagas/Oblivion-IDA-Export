0x414D60: cmp     edx, [ecx]
0x414D62: jz      short EffectItemList_GetIndexOfItem___done
0x414D64: mov     ecx, [ecx+4]
0x414D67: add     al, 1
0x414D69: test    ecx, ecx
0x414D6B: jnz     short EffectItemList_GetIndexOfItem___loop
