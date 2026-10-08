0x64B1B0: mov     eax, ecx
0x64B1B2: mov     ecx, [esp+nodeIndex]; this
0x64B1B6: test    ecx, ecx
0x64B1B8: jnz     short loc_64B1C3
0x64B1BA: mov     eax, [eax+104h]
0x64B1C0: retn    4
0x64B1C3: mov     [esp+nodeIndex], 7; nodeIndex
0x64B1CB: jmp     ActorSkinInfo_GetCachedNode; Returns ActorSkinInfo cached node at +8+nodeIndex*8. Index 6 is QuiverNode at +0x38, the native Arrow:0 clone source.
