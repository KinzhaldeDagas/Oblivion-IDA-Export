0x4E74B0: push    esi; Verified pre-load reset order: clear rendered geometry; clear pointsByReference plus point-array/backlink state; free PGRI records; clear the +0x44 512-unit spatial-bucket map; clear TESForm component references. This reset leaves the two map containers allocated for reuse.
0x4E74B1: mov     esi, ecx
0x4E74B3: call    TESPathGrid_ClearRenderedPointGeometry; Verified cleanup of TESPathGrid.renderNode (+0x1C): resets point render helpers, detaches the generated root from shared path-grid visual state, updates the root node, releases it, and clears the field.
0x4E74B8: mov     ecx, esi; this
0x4E74BA: call    TESPathGrid_ClearPointsAndReferenceMaps; Verified point teardown order under the shared pathgrid critical section: remove reciprocal PGRI cross-cell connections; clear pointsByReference list headers/nodes; destroy each point's owned adjacency list via its point cleanup helper; free point nodes; destroy and null the NiTArray at +0x24. The 512-unit spatial-bucket map at +0x44 is cleared separately by TESPathGrid_ClearSpatialBucketMap.
0x4E74BF: mov     ecx, esi; this
0x4E74C1: call    TESPathGrid_ClearPGRIRecords; Verified frees the PGRI record list header at TESPathGrid+0x28 and each allocated 16-byte record in that list.
0x4E74C6: mov     ecx, esi; this
0x4E74C8: call    TESPathGrid_ClearSpatialBucketMap; Verified frees every BSSimpleList node and list header stored in TESPathGrid.pointsByCell (+0x44), then clears that NiTPointerMap. Given the key helper's X/Y >> 9 packing, this is a 512-unit spatial bucket map local to this PathGrid, not a one-entry-per-world-cell map.
0x4E74CD: mov     ecx, esi
0x4E74CF: pop     esi
0x4E74D0: jmp     j_TESForm_ClearComponentReferences
