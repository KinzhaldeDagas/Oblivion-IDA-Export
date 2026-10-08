0x68B030: push    ebx; Verified top-level TravelPath build sequence: select the destination's smallest containing interior/exterior SubSpace (fallback to supplied cell/worldspace), call TravelPath_BuildRoute with the source reference and positions, then, on success, augment the route with TESRoad surface samples.
0x68B031: push    ebp
0x68B032: push    esi
0x68B033: mov     esi, [esp+0Ch+destinationCell]
0x68B037: xor     bl, bl
0x68B039: test    esi, esi
0x68B03B: push    edi
0x68B03C: mov     ebp, ecx
0x68B03E: jz      short loc_68B04D
0x68B040: mov     ecx, esi; this
0x68B042: call    TESObjectCELL_IsInterior; 3DTheft decode: TESObjectCELL_IsInterior returns flags0 bit 0, matching the plugin's CellIsInterior test.
0x68B047: test    al, al
0x68B049: jnz     short loc_68B04D
0x68B04B: xor     esi, esi
0x68B04D: mov     edi, [esp+10h+worldPosition]
0x68B051: xor     eax, eax
0x68B053: test    esi, esi
0x68B055: jz      short loc_68B061
0x68B057: push    edi; worldPosition
0x68B058: mov     ecx, esi; this
0x68B05A: call    TESObjectCELL_FindSmallestSubSpaceContainingPosition; Verified: locks a cell's object list and returns the smallest-radius TESSubSpace reference containing the query position; this is the interior-cell counterpart to the WorldSpace coordinate-bucket lookup.
0x68B05F: jmp     short loc_68B071
0x68B061: mov     esi, [esp+10h+destinationWorldspace]
0x68B065: test    esi, esi
0x68B067: jz      short loc_68B077
0x68B069: push    edi; worldPosition
0x68B06A: mov     ecx, esi; this
0x68B06C: call    TESWorldSpace_FindSmallestSubSpaceContainingPosition; Verified: fast-travel destination builder resolves a containing TESSubSpace by interior cell scan or exterior WorldSpace +0x60 index. If none contains the destination, it falls back to the supplied cell/worldspace; the selected SubSpace is passed into path construction.
0x68B071: test    eax, eax
0x68B073: jnz     short loc_68B077
0x68B075: mov     eax, esi
0x68B077: mov     esi, [esp+10h+sourceRef]
0x68B07B: test    esi, esi
0x68B07D: jz      short loc_68B0B0
0x68B07F: test    eax, eax
0x68B081: jz      short loc_68B0B0
0x68B083: push    esi; sourceRef
0x68B084: push    edi; destinationPosition
0x68B085: push    eax; destinationSpace
0x68B086: mov     eax, [esi]
0x68B088: mov     edx, [eax+174h]
0x68B08E: mov     ecx, esi
0x68B090: call    edx
0x68B092: push    eax; sourceRouteContext
0x68B093: mov     ecx, esi; this
0x68B095: call    TESObjectREFR_GetSpatialContainerAtPosition; Verified return semantics: for a reference with a parent cell, returns the smallest containing TESSubSpace when the base form is not TESSubSpace and one contains its position; otherwise falls back to that interior cell. For exterior references it resolves the parent cell's WorldSpace and returns the smallest containing TESSubSpace when applicable, otherwise the WorldSpace. A TESSubSpace base skips the containment lookup and still falls back to its parent cell/WorldSpace. Null is returned when no parent container exists.
0x68B09A: push    eax; sourceSpace
0x68B09B: mov     ecx, ebp; this
0x68B09D: call    TravelPath_BuildRoute; Verified TravelPath orchestration: clears existing node records; calls TravelPath_FindLowLevelRoute; copies returned kind-0 reference nodes into the TravelPath list; runs the teleport-loop pruning pass; and appends a kind-1 owned position node for the destination only when the A* search succeeded.
0x68B0A2: mov     bl, al
0x68B0A4: test    bl, bl
0x68B0A6: jz      short loc_68B0B0
0x68B0A8: push    esi; sourceRef
0x68B0A9: mov     ecx, ebp; this
0x68B0AB: call    TravelPath_AddRoadSegmentsForPath; Verified post-A* road augmentation. It walks TravelPath nodes, switches to the linked door's WorldSpace and TeleportData marker position on teleport transitions, then asks that world's TESRoad to add surface-derived position nodes for applicable segments. TravelPath_ComputeDistance subsequently sums the added node segments, so road data changes the measured travel distance; this is route measurement/surface sampling, not the A* route search.
0x68B0B0: pop     edi
0x68B0B1: pop     esi
0x68B0B2: pop     ebp
0x68B0B3: mov     al, bl
0x68B0B5: pop     ebx
0x68B0B6: retn    10h
