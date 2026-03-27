0x414B1F: xor     esi, esi
0x414B21: test    edx, edx
0x414B23: jz      short loc_414B33
0x414B25: cmp     [edx], eax
0x414B27: jz      short loc_414B2C
0x414B29: add     esi, 1
0x414B2C: mov     edx, [edx+4]
0x414B2F: test    edx, edx
0x414B31: jnz     short loc_414B25
0x414B33: cmp     ebp, esi
0x414B35: jge     short EffectItemList_GetItemByIndex2___Done_
0x414B37: push    ebx
0x414B38: xor     ebx, ebx
0x414B3A: test    ecx, ecx
0x414B3C: mov     esi, ecx
0x414B3E: jz      short EffectItemList_GetItemByIndex2___Done__
0x414B40: push    edi
