0x5C9C70: push    40Ch; Reset Face menu action: resolve the open RaceSexMenu, reset the player NPC's active FaceGen delta, synchronously rebuild the player face, then synchronize the menu controls from player state.
0x5C9C75: call    Menu_GetOpenMenuTile
0x5C9C7A: add     esp, 4
0x5C9C7D: test    eax, eax
0x5C9C7F: jz      short locret_5C9CCE
0x5C9C81: push    esi
0x5C9C82: push    0; int
0x5C9C84: push    offset ??_R0?AVRaceSexMenu@@@8; struct TypeDescriptor *
0x5C9C89: push    offset ??_R0?AVMenu@@@8; struct _s_RTTICompleteObjectLocator *
0x5C9C8E: push    0; int
0x5C9C90: mov     ecx, eax
0x5C9C92: call    Tile_GetParentMenu
0x5C9C97: push    eax; void *
0x5C9C98: call    OblivionDynamicCast
0x5C9C9D: mov     esi, eax
0x5C9C9F: add     esp, 14h
0x5C9CA2: test    esi, esi
0x5C9CA4: jz      short loc_5C9CCD
0x5C9CA6: mov     ecx, ds:0B333C4h
0x5C9CAC: mov     eax, [ecx]
0x5C9CAE: mov     edx, [eax+170h]
0x5C9CB4: call    edx
0x5C9CB6: mov     ecx, eax; this
0x5C9CB8: call    TESNPC_ResetFaceGenDelta; Reset active vampirism-selected NPC delta (GetAViBase 0x45 chooses +0x108/+0x168), not sex-specific. Copies manager default parameters, ensures dimensions without zeroing existing elements, then releases/clears NPC+0x1DC cached object.
0x5C9CBD: mov     ecx, esi; this
0x5C9CBF: call    RaceSexMenu_RefreshPlayerFace; Complete player-face refresh after character-creation changes. The RaceSexMenu caller supplies this in ECX; generated head reconstruction occurs beneath this call, so it is the narrow boundary for temporarily enabling bFixFaceNormals during Randomize Face.
0x5C9CC4: push    0; rebuildLists
0x5C9CC6: mov     ecx, esi; this
0x5C9CC8: call    RaceSexMenu_SynchronizeControlsFromPlayer; Broad RaceSexMenu state-to-UI synchronization used after Reset Face. Rebuilds localized controls from current player race/sex/head state; suitable native boundary for restoring a captured FaceGen candidate before UI refresh.
0x5C9CCD: pop     esi
0x5C9CCE: retn
