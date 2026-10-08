0x64B150: mov     eax, ecx
0x64B152: mov     ecx, [esp+nodeIndex]; this
0x64B156: test    ecx, ecx
0x64B158: jnz     short loc_64B163
0x64B15A: mov     eax, [eax+100h]
0x64B160: retn    4
0x64B163: mov     [esp+nodeIndex], 8; nodeIndex
0x64B16B: jmp     ActorSkinInfo_GetCachedNode; Returns ActorSkinInfo cached node at +8+nodeIndex*8. Index 6 is QuiverNode at +0x38, the native Arrow:0 clone source.
