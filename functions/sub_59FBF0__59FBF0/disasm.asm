0x59FBF0: mov     eax, [ecx+78h]
0x59FBF3: test    eax, eax
0x59FBF5: jz      short loc_59FC02
0x59FBF7: mov     ecx, [eax+74h]
0x59FBFA: add     ecx, 24h ; '$'
0x59FBFD: jmp     EffectItemList_AddItem
0x59FC02: mov     ecx, [ecx+7Ch]
0x59FC05: test    ecx, ecx
0x59FC07: jz      short locret_59FC14
0x59FC09: mov     ecx, [ecx+28h]
0x59FC0C: add     ecx, 24h ; '$'
0x59FC0F: jmp     EffectItemList_AddItem
0x59FC14: retn    4
