0x4EB0E0: mov     al, [esp+arg_0]
0x4EB0E4: cmp     ds:0B3608Fh, al
0x4EB0EA: push    esi
0x4EB0EB: jz      loc_4EB19C
0x4EB0F1: test    al, al
0x4EB0F3: mov     ds:0B3608Fh, al
0x4EB0F8: jnz     short loc_4EB135
0x4EB0FA: mov     ecx, ds:0B333A0h
0x4EB100: push    0
0x4EB102: call    TES__GetCurrentWorldspace
0x4EB107: mov     ecx, eax; worldspace
0x4EB109: call    TESWorldSpace_GetRootTerrainLODQuadMap; Verified: climbs parentWorldspace to the root TESWorldSpace and returns its embedded terrainLODQuadRoots map at +0x38.
0x4EB10E: mov     ecx, eax
0x4EB110: call    sub_4EA080
0x4EB115: mov     eax, ds:0B34424h
0x4EB11A: test    eax, eax
0x4EB11C: jz      short loc_4EB123
0x4EB11E: or      word ptr [eax+18h], 1
0x4EB123: mov     eax, ds:0B333A0h
0x4EB128: mov     ecx, [eax+54h]
0x4EB12B: test    ecx, ecx
0x4EB12D: jz      short loc_4EB19C
0x4EB12F: pop     esi
0x4EB130: jmp     sub_499E20
0x4EB135: mov     ds:0B3608Fh, al
0x4EB13A: mov     eax, ds:0B34424h
0x4EB13F: test    eax, eax
0x4EB141: jz      short loc_4EB149
0x4EB143: and     word ptr [eax+18h], 0FFFEh
0x4EB149: mov     ecx, ds:0B333A0h
0x4EB14F: mov     esi, [ecx+4]
0x4EB152: call    TES__GetCurrentWorldspace
0x4EB157: push    eax; worldspace
0x4EB158: mov     ecx, esi; gridDistantArray
0x4EB15A: call    DistantLOD_UpdateExteriorGrid; Verified mode routing: WorldSpace mask bit 0x1 is the tree channel and is gated by bDisplayLODTrees; bit 0x2 is the building/object channel and is gated by bDisplayLODBuildings plus the per-cell LOD map. Local state value 4 is an internal combined-update state that can downgrade to 1 or 2; it is not the .cmp LandLOD mask bit.
0x4EB15F: mov     ecx, ds:0B333A0h
0x4EB165: mov     ecx, [ecx+54h]
0x4EB168: call    sub_49E280; Pass205/206: LODWaterRoot jump-table loop creates four generated child quads under 0x00B35234 and reaches shared child-creation tail.
0x4EB16D: mov     ecx, ds:0B333C4h
0x4EB173: mov     edx, [ecx]
0x4EB175: mov     eax, [edx+174h]
0x4EB17B: call    eax
0x4EB17D: mov     edx, [eax]
0x4EB17F: push    0; a4
0x4EB181: sub     esp, 0Ch
0x4EB184: mov     ecx, esp
0x4EB186: mov     [ecx], edx
0x4EB188: mov     edx, [eax+4]
0x4EB18B: mov     eax, [eax+8]
0x4EB18E: mov     [ecx+4], edx
0x4EB191: mov     [ecx+8], eax
0x4EB194: call    DistantLOD_UpdateLandLODAtPosition; Verified position-triggered LandLOD refresh wrapper: resolves current WorldSpace, climbs parentWorldspace to the root, obtains root terrainLODQuadRoots via TESWorldSpace_GetRootTerrainLODQuadMap, and delegates to DistantLOD_UpdateLandLODMap.
0x4EB199: add     esp, 10h
0x4EB19C: pop     esi
0x4EB19D: retn
