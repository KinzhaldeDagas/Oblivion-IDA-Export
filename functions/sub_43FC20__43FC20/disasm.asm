0x43FC20: cmp     byte ptr ds:0B350D5h, 0; TES cleanup/streaming critical-section path; calls SpeedTree cache prune 0x55E390(1) before and after heap/cell cleanup.
0x43FC27: push    esi
0x43FC28: mov     esi, ecx
0x43FC2A: jz      short loc_43FC39
0x43FC2C: call    Cmd_AddAchievement_PC_ReturnTrueNoOp; Verified shared return-true stub. In the BSPackedAdditionalGeometryData vtable at 0xA45F1C it occupies virtual +0x4C; this class-specific use is part of the Probable packed-geometry discriminator in BSTempEffectGeometryDecal_Initialize. Other xrefs use the same return-true stub for unrelated purposes.
0x43FC31: test    al, al
0x43FC33: jz      loc_43FCC5
0x43FC39: push    3
0x43FC3B: call    Cmd_AddAchievement_PC_ReturnTrueNoOp; Verified shared return-true stub. In the BSPackedAdditionalGeometryData vtable at 0xA45F1C it occupies virtual +0x4C; this class-specific use is part of the Probable packed-geometry discriminator in BSTempEffectGeometryDecal_Initialize. Other xrefs use the same return-true stub for unrelated purposes.
0x43FC40: add     esp, 4
0x43FC43: push    0B35380h; lpCriticalSection
0x43FC48: call    dword ptr ds:0A2806Ch
0x43FC4E: call    dword ptr ds:0A2808Ch
0x43FC54: add     dword ptr ds:0B353FCh, 1
0x43FC5B: push    1; unusedModelsOnly
0x43FC5D: mov     ds:0B353F8h, eax
0x43FC62: call    BSTreeManager_ClearModelCache; Verified cache maintenance: with unusedModelsOnly=true removes tree-form/seed model entries whose model is null or only map-owned; false releases and clears every model cache entry. Called during TES destruction and BSTreeManager destruction.
0x43FC67: add     esp, 4
0x43FC6A: call    sub_7B84E0; MoonSugarEffect decode: walks ShaderDefinition cache B42EC0..B42F30; for shaders with type != -1 calls vtable +0x90 to detach pass texture-stage refs before texture-manager rebuild. Does not walk arbitrary plugin-owned shader wrappers or call vertex wrapper +0x5C.
0x43FC6F: mov     ecx, ds:0B35300h
0x43FC75: test    ecx, ecx
0x43FC77: jz      short loc_43FC8E
0x43FC79: cmp     byte ptr [esi+0A9h], 0
0x43FC80: jnz     short loc_43FC89
0x43FC82: cmp     [esp+4+a2], 0
0x43FC87: jz      short loc_43FC8E
0x43FC89: call    sub_4A25F0
0x43FC8E: call    MemoryHeap_FreeUnusedPagesStart
0x43FC93: push    1; unusedModelsOnly
0x43FC95: call    BSTreeManager_ClearModelCache; Verified cache maintenance: with unusedModelsOnly=true removes tree-form/seed model entries whose model is null or only map-owned; false releases and clears every model cache entry. Called during TES destruction and BSTreeManager destruction.
0x43FC9A: add     esp, 4
0x43FC9D: sub     dword ptr ds:0B353FCh, 1
0x43FCA4: jnz     short loc_43FCB0
0x43FCA6: mov     dword ptr ds:0B353F8h, 0
0x43FCB0: push    0B35380h; lpCriticalSection
0x43FCB5: call    dword ptr ds:0A28074h
0x43FCBB: push    2
0x43FCBD: call    Cmd_AddAchievement_PC_ReturnTrueNoOp; Verified shared return-true stub. In the BSPackedAdditionalGeometryData vtable at 0xA45F1C it occupies virtual +0x4C; this class-specific use is part of the Probable packed-geometry discriminator in BSTempEffectGeometryDecal_Initialize. Other xrefs use the same return-true stub for unrelated purposes.
0x43FCC2: add     esp, 4
0x43FCC5: pop     esi
0x43FCC6: retn    4
