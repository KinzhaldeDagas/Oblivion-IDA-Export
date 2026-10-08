0x4E7D10: cmp     byte ptr ds:0B35F84h, 0; Verified `TogglePathGrid` action: flips g_PathGridDebugRenderingEnabled, updates the shared debug root, then rebuilds or clears the PathGrid visuals for the current interior grid or every loaded exterior grid cell. It is reached by ScriptCommand_TogglePathGrid. Fallout comparison: Script::ToggleNavMeshFunction (Fallout 0x823CED68) handles selectable draw modes, cover/connection overlays and transparency, and adds per-cell navmesh draws; Oblivion exposes one PathGrid display toggle and updates loaded PathGrid roots. This is a directly observed subsystem divergence.
0x4E7D17: setz    al
0x4E7D1A: push    eax; enabled
0x4E7D1B: call    TESPathGrid_SetDebugRenderingEnabled; Verified debug-render root setter. Updates g_PathGridDebugRenderingEnabled. Enabling creates a shared NiNode, attaches DebugRender_GetOrCreateVertexColorProperty, and adds the root to TES/ObjectLODRoot; disabling removes the root, clears its child objects, releases it, and nulls g_PathGridDebugRenderRoot. Called by TESPathGrid_ToggleDebugRendering before per-cell render rebuild/clear.
0x4E7D20: mov     ecx, ds:0B333A0h
0x4E7D26: mov     ecx, [ecx+34h]
0x4E7D29: add     esp, 4
0x4E7D2C: test    ecx, ecx
0x4E7D2E: jz      short loc_4E7D4E
0x4E7D30: call    sub_4AF170
0x4E7D35: mov     ecx, eax; this
0x4E7D37: test    ecx, ecx
0x4E7D39: jz      short locret_4E7DB3
0x4E7D3B: cmp     byte ptr ds:0B35F84h, 0
0x4E7D42: jz      short loc_4E7D49
0x4E7D44: jmp     TESPathGrid_RebuildRenderedGraph; Verified rebuilds this PathGrid's render root and point/linked-reference visualization. It owns a NiNode at TESPathGrid+0x1C; each point receives a NiNode renderNode at +0x28 with an octahedron clone; adjacency uses NiLines segments; PGRL-associated references receive a marker/edge overlay from pointsByReference. It then attaches the grid root beneath the shared world ObjectLODRoot. Verified Fallout divergence: Fallout's TESObjectCELL::AttachToWorld adds draw-only navmeshes to NavMeshRender::spRootDrawNode, and TESObjectCELL::Detach removes them. Fallout uses a cell-scoped manager/root path; Oblivion uses per-PathGrid/per-point nodes.
0x4E7D49: jmp     TESPathGrid_ClearRenderedPointGeometry; Verified cleanup of TESPathGrid.renderNode (+0x1C): resets point render helpers, detaches the generated root from shared path-grid visual state, updates the root node, releases it, and clears the field.
0x4E7D4E: mov     eax, ds:0B06A2Ch
0x4E7D53: push    edi
0x4E7D54: xor     edi, edi
0x4E7D56: push    esi
0x4E7D57: cmp     edi, eax
0x4E7D59: jnb     short loc_4E7DB1
0x4E7D5B: xor     esi, esi
0x4E7D5D: lea     ecx, [ecx+0]
0x4E7D60: cmp     esi, eax
0x4E7D62: jnb     short loc_4E7DAC
0x4E7D64: mov     edx, ds:0B333A0h
0x4E7D6A: mov     ecx, [edx+8]
0x4E7D6D: push    esi
0x4E7D6E: push    edi
0x4E7D6F: call    GetGridEntry
0x4E7D74: mov     ecx, [eax]
0x4E7D76: test    ecx, ecx
0x4E7D78: jz      short loc_4E7DA2
0x4E7D7A: call    sub_4AF170
0x4E7D7F: mov     ecx, eax; this
0x4E7D81: test    ecx, ecx
0x4E7D83: jz      short loc_4E7DA2
0x4E7D85: cmp     byte ptr ds:0B35F84h, 0
0x4E7D8C: jz      short loc_4E7D9D
0x4E7D8E: call    TESPathGrid_RebuildRenderedGraph; Verified rebuilds this PathGrid's render root and point/linked-reference visualization. It owns a NiNode at TESPathGrid+0x1C; each point receives a NiNode renderNode at +0x28 with an octahedron clone; adjacency uses NiLines segments; PGRL-associated references receive a marker/edge overlay from pointsByReference. It then attaches the grid root beneath the shared world ObjectLODRoot. Verified Fallout divergence: Fallout's TESObjectCELL::AttachToWorld adds draw-only navmeshes to NavMeshRender::spRootDrawNode, and TESObjectCELL::Detach removes them. Fallout uses a cell-scoped manager/root path; Oblivion uses per-PathGrid/per-point nodes.
0x4E7D93: mov     eax, ds:0B06A2Ch
0x4E7D98: add     esi, 1
0x4E7D9B: jmp     short loc_4E7D60
0x4E7D9D: call    TESPathGrid_ClearRenderedPointGeometry; Verified cleanup of TESPathGrid.renderNode (+0x1C): resets point render helpers, detaches the generated root from shared path-grid visual state, updates the root node, releases it, and clears the field.
0x4E7DA2: mov     eax, ds:0B06A2Ch
0x4E7DA7: add     esi, 1
0x4E7DAA: jmp     short loc_4E7D60
0x4E7DAC: add     edi, 1
0x4E7DAF: jmp     short loc_4E7D57
0x4E7DB1: pop     esi
0x4E7DB2: pop     edi
0x4E7DB3: retn
