0x484320: test    byte ptr [ecx+7Ch], 2
0x484324: jz      short AlchemyItem_IsEdible___Return_False
0x484326: add     ecx, 30h ; '0'
0x484329: call    EffectItemList_AllEffectsHostile
0x48432E: test    al, al
0x484330: jnz     short AlchemyItem_IsEdible___Return_False
0x484332: mov     eax, 1
0x484337: retn
