0x419B34: mov     eax, [esi]
0x419B36: mov     edx, [eax+18h]
0x419B39: call    edx
0x419B3B: cmp     eax, 5
0x419B3E: jz      MagicItem_GetFXEffect___Return_POSN
0x419B44: mov     eax, [esi]
0x419B46: mov     edx, [eax+18h]
0x419B49: mov     ecx, esi
0x419B4B: call    edx
0x419B4D: cmp     eax, 7
0x419B50: jnz     short MagicItem_GetFXEffect___CheckDISE
0x419B52: lea     ecx, [esi+0Ch]
0x419B55: call    EffectItemList_AllEffectsHostile
0x419B5A: test    al, al
0x419B5C: jnz     MagicItem_GetFXEffect___Return_POSN
