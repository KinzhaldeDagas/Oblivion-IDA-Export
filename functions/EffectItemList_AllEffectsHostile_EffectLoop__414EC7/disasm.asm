0x414EC7: mov     ecx, [esi+4]
0x414ECA: test    ecx, ecx
0x414ECC: jz      short EffectItemList_AllEffectsHostile___EffectLoop_Next
0x414ECE: mov     eax, [ecx+1Ch]
0x414ED1: mov     edx, [eax+58h]
0x414ED4: shr     edx, 16h
0x414ED7: test    dl, 1
0x414EDA: jnz     short EffectItemList_AllEffectsHostile___EffectLoop_Next
0x414EDC: call    EffectItem_IsHostile
0x414EE1: test    al, al
0x414EE3: jz      short EffectItemList_AllEffectsHostile___Return_False
