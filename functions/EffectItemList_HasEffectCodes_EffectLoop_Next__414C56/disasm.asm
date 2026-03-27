0x414C56: mov     ecx, [edi+8]
0x414C59: test    ecx, ecx
0x414C5B: jz      short EffectItemList_HasEffectCodes___Done_
0x414C5D: lea     edi, [ecx-4]
0x414C60: test    edi, edi
0x414C62: jnz     short EffectItemList_HasEffectCodes___EffectLoop
