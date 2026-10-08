0x57B7E0: push    1; arg1
0x57B7E2: push    0; canCreate
0x57B7E4: call    InterfaceManager_GetSingleton
0x57B7E9: add     esp, 8
0x57B7EC: test    eax, eax
0x57B7EE: jz      locret_57B8DF
0x57B7F4: push    1; arg1
0x57B7F6: push    0; canCreate
0x57B7F8: call    InterfaceManager_GetSingleton
0x57B7FD: add     esp, 8
0x57B800: cmp     dword ptr [eax+1Ch], 0
0x57B804: jz      locret_57B8DF
0x57B80A: push    1; arg1
0x57B80C: push    0; canCreate
0x57B80E: call    InterfaceManager_GetSingleton
0x57B813: add     esp, 8
0x57B816: cmp     dword ptr [eax+68h], 0
0x57B81A: jz      locret_57B8DF
0x57B820: push    1; arg1
0x57B822: push    0; canCreate
0x57B824: call    InterfaceManager_GetSingleton
0x57B829: mov     eax, [eax+68h]
0x57B82C: add     esp, 8
0x57B82F: push    0FAEh
0x57B834: mov     ecx, eax
0x57B836: call    Tile_GetFloat
0x57B83B: fcomp   dword ptr ds:0A379B4h
0x57B841: fnstsw  ax
0x57B843: test    ah, 44h
0x57B846: jp      locret_57B8DF
0x57B84C: mov     ecx, ds:0B333C4h
0x57B852: push    0
0x57B854: add     ecx, 68h ; 'h'
0x57B857: call    MagicTarget_RemoveNonPersistentEffects
0x57B85C: fldz
0x57B85E: push    ecx
0x57B85F: fstp    [esp+4+deltaSeconds]; deltaTime
0x57B862: mov     ecx, ds:0B333C4h
0x57B868: add     ecx, 68h ; 'h'; this
0x57B86B: call    MagicTarget_ProcessEffects; Verified active-effect manager: obtains the target's active-effect list, checks target parent/node/cell/process conditions, then enters the list loop. Each eligible ActiveEffect goes through ActiveEffect_Base_ProcessEffect; removed effects are unlinked and destroyed by their virtual destructor. Actor_ProcessMagicEffect calls this manager each actor process tick.
0x57B870: mov     eax, ds:0B333C4h
0x57B875: push    eax; targetReference
0x57B876: mov     ecx, (offset qword_B3BB2C+1D4h); this
0x57B87B: call    ActorProcessManager_FinishHitEffectsForTarget; Verified (Oblivion): walks the temp-effect RTTI chain to NiRTTI_MagicHitEffect; for matching targetReference, calls the hit-effect detach virtual and marks the effect finished.
0x57B880: fldz
0x57B882: push    ecx
0x57B883: fstp    [esp+4+deltaSeconds]; deltaSeconds
0x57B886: mov     ecx, (offset qword_B3BB2C+1D4h); self
0x57B88B: call    ActorProcessManager_UpdateTempEffects; [Verified] Per-actor temp-effect update loop visits both activeTempEffects (+0x40) and extendedTempEffects (+0x48), dispatches virtual Update(effect, deltaSeconds), removes effects returning false, and releases manager references. Active-list decals (types 0/1) and particles (2) update through this shared manager. Fallout divergence: Fallout updates its separate BGSDecalManager simple-decal/emitter collections through UpdateDecals.
0x57B890: fldz
0x57B892: push    0; int
0x57B894: fst     dword ptr ds:0B46124h; MoonSugarEffect decode: RaceSex/menu reset path zeros native Gethit intensity globals flt_B46124/flt_B46120.
0x57B89A: push    offset ??_R0?AVRaceSexMenu@@@8; struct TypeDescriptor *
0x57B89F: fstp    dword ptr ds:0B46120h
0x57B8A5: push    offset ??_R0?AVMenu@@@8; struct _s_RTTICompleteObjectLocator *
0x57B8AA: push    0; int
0x57B8AC: push    40Ch
0x57B8B1: call    Menu_GetOpenMenuTile
0x57B8B6: add     esp, 4
0x57B8B9: mov     ecx, eax
0x57B8BB: call    Tile_GetParentMenu
0x57B8C0: push    eax; void *
0x57B8C1: call    OblivionDynamicCast
0x57B8C6: add     esp, 14h
0x57B8C9: test    eax, eax
0x57B8CB: jz      short loc_57B8D7
0x57B8CD: mov     edx, [eax]
0x57B8CF: mov     ecx, eax
0x57B8D1: mov     eax, [edx]
0x57B8D3: push    1
0x57B8D5: call    eax
0x57B8D7: push    1
0x57B8D9: call    sub_5CA010
0x57B8DE: pop     ecx
0x57B8DF: retn
