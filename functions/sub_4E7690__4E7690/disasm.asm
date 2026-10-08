0x4E7690: push    esi; Verified cell-unload graph cleanup: if a point array exists, clear rendered geometry; when the TESPathGrid has no winning override or its primary override file is inactive, destroy graph point/reference structures and clear the per-PathGrid 512-unit spatial bucket map. Called from cell deactivation at 0x447BF6. Override-selection semantics beyond the observed predicates remain Unknown.
0x4E7691: mov     esi, ecx
0x4E7693: cmp     dword ptr [esi+24h], 0
0x4E7697: jz      short loc_4E76CE
0x4E7699: call    TESPathGrid_ClearRenderedPointGeometry; Verified cleanup of TESPathGrid.renderNode (+0x1C): resets point render helpers, detaches the generated root from shared path-grid visual state, updates the root node, releases it, and clears the field.
0x4E769E: push    0FFFFFFFFh; a2
0x4E76A0: mov     ecx, esi; this
0x4E76A2: call    TESForm_GetOverrideFile; TESForm override-file selector. With a2=-1 it walks the entire mod-reference list and returns the last non-null TESFile; TESTopicInfo lazy responses therefore read only the winning override file.
0x4E76A7: test    eax, eax
0x4E76A9: jz      short loc_4E76BF
0x4E76AB: push    0; a2
0x4E76AD: mov     ecx, esi; this
0x4E76AF: call    TESForm_GetOverrideFile; TESForm override-file selector. With a2=-1 it walks the entire mod-reference list and returns the last non-null TESFile; TESTopicInfo lazy responses therefore read only the winning override file.
0x4E76B4: mov     ecx, eax
0x4E76B6: call    TESFile_IsActive
0x4E76BB: test    al, al
0x4E76BD: jnz     short loc_4E76CE
0x4E76BF: mov     ecx, esi; this
0x4E76C1: call    TESPathGrid_ClearPointsAndReferenceMaps; Verified point teardown order under the shared pathgrid critical section: remove reciprocal PGRI cross-cell connections; clear pointsByReference list headers/nodes; destroy each point's owned adjacency list via its point cleanup helper; free point nodes; destroy and null the NiTArray at +0x24. The 512-unit spatial-bucket map at +0x44 is cleared separately by TESPathGrid_ClearSpatialBucketMap.
0x4E76C6: mov     ecx, esi; this
0x4E76C8: pop     esi
0x4E76C9: jmp     TESPathGrid_ClearSpatialBucketMap; Verified frees every BSSimpleList node and list header stored in TESPathGrid.pointsByCell (+0x44), then clears that NiTPointerMap. Given the key helper's X/Y >> 9 packing, this is a 512-unit spatial bucket map local to this PathGrid, not a one-entry-per-world-cell map.
0x4E76CE: pop     esi
0x4E76CF: retn
