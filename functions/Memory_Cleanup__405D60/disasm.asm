0x405D60: sub     esp, 78h; Verified memory-pressure dispatcher cases 9-11 and 13-15 call TES_RemoveTreeModelsByTrunkLength with BSTreeModel.trunkLength buckets [-FLT_MAX,100), [100,250), and [250,FLT_MAX). The ranges derive from CSpeedTreeRT_GetTrunkLength; the length units are Unknown.
0x405D63: cmp     [esp+78h+arg_0], 0
0x405D68: mov     al, bDisableWarning_MESSAGES
0x405D6D: push    esi
0x405D6E: mov     [esp+7Ch+var_75], al
0x405D72: mov     bDisableWarning_MESSAGES, 1
0x405D79: jz      short loc_405D87
0x405D7B: mov     bDisableWarning_MESSAGES, al
0x405D80: xor     eax, eax
0x405D82: pop     esi
0x405D83: add     esp, 78h
0x405D86: retn
0x405D87: call    ds:GetCurrentThreadId
0x405D8D: mov     esi, [esp+7Ch+arg_8]
0x405D94: cmp     esi, 10h; switch 17 cases
0x405D97: ja      Memory_Cleanup___def_405D9D; jumptable 00405D9D default case
0x405D9D: jmp     ds:jpt_405D9D[esi*4]; switch jump
0x405DA4: mov     ecx, ds:0B333A0h; jumptable 00405D9D case 0
0x405DAA: push    1; a2
0x405DAC: call    sub_43FC20; TES cleanup/streaming critical-section path; calls SpeedTree cache prune 0x55E390(1) before and after heap/cell cleanup.
0x405DB1: jmp     loc_40607D
0x405DB6: call    sub_54FE70; jumptable 00405D9D case 1
0x405DBB: mov     ecx, ds:0B333A0h; this
0x405DC1: push    1; a2
0x405DC3: call    sub_43FC20; TES cleanup/streaming critical-section path; calls SpeedTree cache prune 0x55E390(1) before and after heap/cell cleanup.
0x405DC8: jmp     loc_40607D
0x405DCD: call    InterfaceManager_IsMenuMode; jumptable 00405D9D cases 2,3
0x405DD2: test    al, al
0x405DD4: jz      short loc_405DE3
0x405DD6: call    sub_57BAC0
0x405DDB: test    al, al
0x405DDD: jz      loc_406078
0x405DE3: call    sub_579B20
0x405DE8: jmp     loc_406078
0x405DED: mov     ecx, ds:0B33A1Ch; jumptable 00405D9D case 4
0x405DF3: call    sub_43BEB0
0x405DF8: jmp     loc_40607D
0x405DFD: mov     ecx, ds:0B333A0h; jumptable 00405D9D case 5
0x405E03: push    0; a3
0x405E05: push    1; a2
0x405E07: call    sub_442630
0x405E0C: mov     eax, ds:0B333A0h
0x405E11: mov     ecx, [eax+4]; this
0x405E14: call    Shared_NoOpVirtual_60D0A0; Shared one-instruction virtual no-op. Oblivion's base Actor vtable uses this at post-shot slot +0x2E8, so ordinary Actor dispatch performs no ammo-decrement transaction; PlayerCharacter overrides that slot at 0x662590. Other classes may share the same RET stub.
0x405E19: mov     ecx, ds:0B33A1Ch
0x405E1F: call    sub_43BEB0
0x405E24: mov     ecx, ds:0B333A0h; this
0x405E2A: push    1; a2
0x405E2C: call    sub_43FC20; TES cleanup/streaming critical-section path; calls SpeedTree cache prune 0x55E390(1) before and after heap/cell cleanup.
0x405E31: jmp     loc_40607D
0x405E36: call    OB_StBezierSpline_ClearCache_010201A0; jumptable 00405D9D case 6
0x405E3B: jmp     loc_40607D
0x405E40: cmp     byte ptr unk_B33395, 0; jumptable 00405D9D cases 7,8
0x405E47: jnz     loc_406078
0x405E4D: mov     ecx, ds:0B333A0h
0x405E53: call    TES__GetCurrentWorldspace
0x405E58: test    eax, eax
0x405E5A: jz      loc_406078
0x405E60: mov     ecx, ds:0B333A0h
0x405E66: call    TES__GetCurrentWorldspace
0x405E6B: mov     ecx, eax; worldspace
0x405E6D: call    TESWorldSpace_GetRootTerrainLODQuadMap; Verified: climbs parentWorldspace to the root TESWorldSpace and returns its embedded terrainLODQuadRoots map at +0x38.
0x405E72: test    eax, eax
0x405E74: jz      loc_406078
0x405E7A: mov     ecx, ds:0B333A0h
0x405E80: call    TES__GetCurrentWorldspace
0x405E85: mov     ecx, eax; worldspace
0x405E87: call    TESWorldSpace_GetRootTerrainLODQuadMap; Verified: climbs parentWorldspace to the root TESWorldSpace and returns its embedded terrainLODQuadRoots map at +0x38.
0x405E8C: push    0
0x405E8E: call    sub_4EB0E0
0x405E93: mov     ecx, ds:0B333A0h
0x405E99: add     esp, 4
0x405E9C: call    TES__GetCurrentWorldspace
0x405EA1: mov     ecx, eax; worldspace
0x405EA3: call    TESWorldSpace_GetRootTerrainLODQuadMap; Verified: climbs parentWorldspace to the root TESWorldSpace and returns its embedded terrainLODQuadRoots map at +0x38.
0x405EA8: mov     ecx, g_zeroNiPoint3.x
0x405EAE: mov     edx, g_zeroNiPoint3.y
0x405EB4: push    0; a4
0x405EB6: sub     esp, 0Ch
0x405EB9: mov     eax, esp
0x405EBB: mov     [eax], ecx
0x405EBD: mov     ecx, g_zeroNiPoint3.z
0x405EC3: mov     [eax+4], edx
0x405EC6: mov     [eax+8], ecx
0x405EC9: call    DistantLOD_UpdateLandLODAtPosition; Verified position-triggered LandLOD refresh wrapper: resolves current WorldSpace, climbs parentWorldspace to the root, obtains root terrainLODQuadRoots via TESWorldSpace_GetRootTerrainLODQuadMap, and delegates to DistantLOD_UpdateLandLODMap.
0x405ECE: mov     ecx, ds:0B333A0h; this
0x405ED4: add     esp, 10h
0x405ED7: push    1; a2
0x405ED9: call    sub_43FC20; TES cleanup/streaming critical-section path; calls SpeedTree cache prune 0x55E390(1) before and after heap/cell cleanup.
0x405EDE: jmp     loc_406078
0x405EE3: cmp     byte ptr unk_B33395, 0; jumptable 00405D9D case 9
0x405EEA: jnz     loc_40607D
0x405EF0: fld     ds:flt_A2FE7C
0x405EF6: sub     esp, 8
0x405EF9: fstp    [esp+84h+maximumDistance]; upperBound
0x405EFD: fld     ds:flt_A7DEB4
0x405F03: fchs
0x405F05: fstp    [esp+84h+minimumDistance]; lowerBound
0x405F08: push    1; skipCurrentExteriorNeighbors
0x405F0A: call    TES_RemoveTreeModelsByTrunkLength; Verified Memory_Cleanup case 9 releases resident TREE model 3D with trunkLength in [-FLT_MAX,100), skipping the active exterior neighborhood.
0x405F0F: add     esp, 0Ch
0x405F12: jmp     loc_40607D
0x405F17: cmp     byte ptr unk_B33395, 0; jumptable 00405D9D case 10
0x405F1E: jnz     loc_40607D
0x405F24: fld     ds:flt_A2FE78
0x405F2A: sub     esp, 8
0x405F2D: fstp    [esp+84h+maximumDistance]; upperBound
0x405F31: fld     ds:flt_A2FE7C
0x405F37: fstp    [esp+84h+minimumDistance]; lowerBound
0x405F3A: push    1; skipCurrentExteriorNeighbors
0x405F3C: call    TES_RemoveTreeModelsByTrunkLength; Verified Memory_Cleanup case 10 releases resident TREE model 3D with trunkLength in [100,250), skipping the active exterior neighborhood.
0x405F41: add     esp, 0Ch
0x405F44: jmp     loc_40607D
0x405F49: cmp     byte ptr unk_B33395, 0; jumptable 00405D9D case 11
0x405F50: jnz     loc_40607D
0x405F56: fld     ds:flt_A7DEB4
0x405F5C: sub     esp, 8
0x405F5F: fstp    [esp+84h+maximumDistance]; upperBound
0x405F63: fld     ds:flt_A2FE78
0x405F69: fstp    [esp+84h+minimumDistance]; lowerBound
0x405F6C: push    1; skipCurrentExteriorNeighbors
0x405F6E: call    TES_RemoveTreeModelsByTrunkLength; Verified Memory_Cleanup case 11 releases resident TREE model 3D with trunkLength in [250,FLT_MAX), skipping the active exterior neighborhood.
0x405F73: add     esp, 0Ch
0x405F76: jmp     loc_40607D
0x405F7B: cmp     byte ptr unk_B33395, 0; jumptable 00405D9D case 12
0x405F82: jnz     loc_40607D
0x405F88: mov     eax, dword ptr unk_B36094
0x405F8D: test    eax, eax
0x405F8F: jz      loc_40607D
0x405F95: test    byte ptr [eax+18h], 1
0x405F99: jnz     loc_40607D
0x405F9F: or      word ptr [eax+18h], 1
0x405FA4: mov     byte_B09AE4, 0
0x405FAB: call    sub_7C4D90
0x405FB0: mov     ecx, ds:0B333A0h; this
0x405FB6: push    1; a2
0x405FB8: call    sub_43FC20; TES cleanup/streaming critical-section path; calls SpeedTree cache prune 0x55E390(1) before and after heap/cell cleanup.
0x405FBD: jmp     loc_40607D
0x405FC2: cmp     byte ptr unk_B33395, 0; jumptable 00405D9D case 13
0x405FC9: jnz     loc_40607D
0x405FCF: fld     ds:flt_A2FE7C
0x405FD5: sub     esp, 8
0x405FD8: fstp    [esp+84h+maximumDistance]; upperBound
0x405FDC: fld     ds:flt_A7DEB4
0x405FE2: fchs
0x405FE4: fstp    [esp+84h+minimumDistance]; lowerBound
0x405FE7: push    0; skipCurrentExteriorNeighbors
0x405FE9: call    TES_RemoveTreeModelsByTrunkLength; Verified Memory_Cleanup case 13 releases resident TREE model 3D with trunkLength in [-FLT_MAX,100) across loaded cells, including the active exterior neighborhood.
0x405FEE: add     esp, 0Ch
0x405FF1: jmp     loc_40607D
0x405FF6: cmp     byte ptr unk_B33395, 0; jumptable 00405D9D case 14
0x405FFD: jnz     short loc_40607D
0x405FFF: fld     ds:flt_A2FE78
0x406005: sub     esp, 8
0x406008: fstp    [esp+84h+maximumDistance]; upperBound
0x40600C: fld     ds:flt_A2FE7C
0x406012: fstp    [esp+84h+minimumDistance]; lowerBound
0x406015: push    0; skipCurrentExteriorNeighbors
0x406017: call    TES_RemoveTreeModelsByTrunkLength; Verified Memory_Cleanup case 14 releases resident TREE model 3D with trunkLength in [100,250) across loaded cells, including the active exterior neighborhood.
0x40601C: add     esp, 0Ch
0x40601F: jmp     short loc_40607D
0x406021: cmp     byte ptr unk_B33395, 0; jumptable 00405D9D case 15
0x406028: jnz     short loc_40607D
0x40602A: fld     ds:flt_A7DEB4
0x406030: sub     esp, 8
0x406033: fstp    [esp+84h+maximumDistance]; upperBound
0x406037: fld     ds:flt_A2FE78
0x40603D: fstp    [esp+84h+minimumDistance]; lowerBound
0x406040: push    0; skipCurrentExteriorNeighbors
0x406042: call    TES_RemoveTreeModelsByTrunkLength; Verified Memory_Cleanup case 15 releases resident TREE model 3D with trunkLength in [250,FLT_MAX) across loaded cells, including the active exterior neighborhood.
0x406047: add     esp, 0Ch
0x40604A: jmp     short loc_40607D
0x40604C: cmp     byte_B32B01, 0; jumptable 00405D9D case 16
0x406053: jnz     short loc_40607D
0x406055: mov     cl, [esp+7Ch+var_75]
0x406059: or      esi, 0FFFFFFFFh
0x40605C: mov     bDisableWarning_MESSAGES, cl
0x406062: lea     eax, [esi+1]
0x406065: pop     esi
0x406066: add     esp, 78h
0x406069: retn
0x40606A: push    eax; jumptable 00405D9D default case
0x40606B: push    offset a08xOutOfMemory; "%08X: Out of Memory Error - All passes "...
0x406070: call    sub_404EC0
0x406075: add     esp, 8
0x406078: cmp     esi, 0FFFFFFFFh
0x40607B: jz      short loc_406099
0x40607D: lea     edx, [esp+7Ch+Buffer]
0x406081: push    edx; lpBuffer
0x406082: call    ds:GlobalMemoryStatus
0x406088: push    1
0x40608A: lea     eax, [esp+80h+var_54]
0x40608E: push    eax
0x40608F: mov     ecx, offset FormHeap
0x406094: call    MemoryHeap_GetStats
0x406099: mov     cl, [esp+7Ch+var_75]
0x40609D: lea     eax, [esi+1]
0x4060A0: mov     bDisableWarning_MESSAGES, cl
0x4060A6: pop     esi
0x4060A7: add     esp, 78h
0x4060AA: retn
