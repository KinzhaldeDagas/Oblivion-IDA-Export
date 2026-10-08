0x64B1D0: mov     eax, ecx; High/MiddleHigh process vtable +0x128. With ActorSkinInfo, returns cached-node index 6 / QuiverNode; with null context, returns process quiver cache +0x10C. Actor_ProcessAction finds Arrow:0 beneath this source and clones it.
0x64B1D2: mov     ecx, [esp+animData]; this
0x64B1D6: test    ecx, ecx
0x64B1D8: jnz     short loc_64B1E3
0x64B1DA: mov     eax, [eax+10Ch]
0x64B1E0: retn    4
0x64B1E3: mov     [esp+animData], 6; nodeIndex
0x64B1EB: jmp     ActorSkinInfo_GetCachedNode; Returns ActorSkinInfo cached node at +8+nodeIndex*8. Index 6 is QuiverNode at +0x38, the native Arrow:0 clone source.
