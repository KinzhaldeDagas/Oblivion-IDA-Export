0x4E7610: push    esi; Verified graph lifecycle dispatcher: if pointArray already exists, resolve deferred cross-cell PGRI links and optionally rebuild the render graph; otherwise find the thread-safe override file, load the PathGrid graph chunks, and on successful load perform the same cross-cell resolution/render update.
0x4E7611: mov     esi, ecx
0x4E7613: cmp     dword ptr [esi+24h], 0
0x4E7617: jz      short loc_4E7632
0x4E7619: call    TESPathGrid_ResolveCrossCellLinks; Verified deferred PGRI resolver. For each PGRI row, low u16 is a local point-array index and XYZ at +4 locates the remote point; it adds reciprocal adjacency if absent and emits the reciprocal request on the remote grid. Out-of-range local indices are removed. Caller is TESPathGrid_LoadOrResolveGraph.
0x4E761E: cmp     byte ptr ds:0B35F84h, 0
0x4E7625: jz      short loc_4E762E
0x4E7627: mov     ecx, esi; this
0x4E7629: call    TESPathGrid_RebuildRenderedGraph; Verified rebuilds this PathGrid's render root and point/linked-reference visualization. It owns a NiNode at TESPathGrid+0x1C; each point receives a NiNode renderNode at +0x28 with an octahedron clone; adjacency uses NiLines segments; PGRL-associated references receive a marker/edge overlay from pointsByReference. It then attaches the grid root beneath the shared world ObjectLODRoot. Verified Fallout divergence: Fallout's TESObjectCELL::AttachToWorld adds draw-only navmeshes to NavMeshRender::spRootDrawNode, and TESObjectCELL::Detach removes them. Fallout uses a cell-scoped manager/root path; Oblivion uses per-PathGrid/per-point nodes.
0x4E762E: mov     al, 1
0x4E7630: pop     esi
0x4E7631: retn
0x4E7632: push    edi
0x4E7633: push    0FFFFFFFFh; a2
0x4E7635: call    TESForm_GetOverrideFile; TESForm override-file selector. With a2=-1 it walks the entire mod-reference list and returns the last non-null TESFile; TESTopicInfo lazy responses therefore read only the winning override file.
0x4E763A: mov     ecx, eax
0x4E763C: call    TESFile_GetThreadSafeFile; Returns the root TESFile on the main thread; on worker threads returns the per-thread clone selected by GetCurrentThreadId via TESFile_GetThreadSafeFileForThread.
0x4E7641: mov     edi, eax
0x4E7643: test    edi, edi
0x4E7645: jz      short loc_4E7653
0x4E7647: push    esi
0x4E7648: mov     ecx, edi
0x4E764A: call    TESFile__FindForm
0x4E764F: test    al, al
0x4E7651: jnz     short loc_4E7658
0x4E7653: pop     edi
0x4E7654: xor     al, al
0x4E7656: pop     esi
0x4E7657: retn
0x4E7658: push    ebx
0x4E7659: push    edi; file
0x4E765A: mov     ecx, esi; this
0x4E765C: call    TESPathGrid_LoadSerializedGraphChunks; Verified serialized PGRL chunk processing calls TESPathGrid_AddPointForLinkedReference, populating the reference-to-point index used by runtime enable/disable callbacks. This is separate from modified-form save data, which stores disabled point indices.
0x4E7661: mov     bl, al
0x4E7663: test    bl, bl
0x4E7665: jz      short loc_4E767E
0x4E7667: mov     ecx, esi; this
0x4E7669: call    TESPathGrid_ResolveCrossCellLinks; Verified deferred PGRI resolver. For each PGRI row, low u16 is a local point-array index and XYZ at +4 locates the remote point; it adds reciprocal adjacency if absent and emits the reciprocal request on the remote grid. Out-of-range local indices are removed. Caller is TESPathGrid_LoadOrResolveGraph.
0x4E766E: cmp     byte ptr ds:0B35F84h, 0
0x4E7675: jz      short loc_4E767E
0x4E7677: mov     ecx, esi; this
0x4E7679: call    TESPathGrid_RebuildRenderedGraph; Verified rebuilds this PathGrid's render root and point/linked-reference visualization. It owns a NiNode at TESPathGrid+0x1C; each point receives a NiNode renderNode at +0x28 with an octahedron clone; adjacency uses NiLines segments; PGRL-associated references receive a marker/edge overlay from pointsByReference. It then attaches the grid root beneath the shared world ObjectLODRoot. Verified Fallout divergence: Fallout's TESObjectCELL::AttachToWorld adds draw-only navmeshes to NavMeshRender::spRootDrawNode, and TESObjectCELL::Detach removes them. Fallout uses a cell-scoped manager/root path; Oblivion uses per-PathGrid/per-point nodes.
0x4E767E: mov     al, bl
0x4E7680: pop     ebx
0x4E7681: pop     edi
0x4E7682: pop     esi
0x4E7683: retn
