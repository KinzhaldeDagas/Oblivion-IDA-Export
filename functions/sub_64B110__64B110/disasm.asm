0x64B110: mov     eax, ecx
0x64B112: mov     ecx, [esp+nodeIndex]; this
0x64B116: test    ecx, ecx
0x64B118: jnz     short loc_64B134
0x64B11A: cmp     [eax+0F4h], cl
0x64B120: jz      short loc_64B12B
0x64B122: mov     eax, [eax+100h]
0x64B128: retn    4
0x64B12B: mov     eax, [eax+0FCh]
0x64B131: retn    4
0x64B134: mov     [esp+nodeIndex], 3; nodeIndex
0x64B13C: jmp     ActorSkinInfo_GetCachedNode; Returns ActorSkinInfo cached node at +8+nodeIndex*8. Index 6 is QuiverNode at +0x38, the native Arrow:0 clone source.
