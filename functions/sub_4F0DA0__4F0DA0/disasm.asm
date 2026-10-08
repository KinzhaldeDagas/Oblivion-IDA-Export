0x4F0DA0: cmp     byte ptr [ecx+0D8h], 0; Verified cell-LOD filter: if +0xD8 cellLODMapLoaded is set, checks the +0xC8 CellsWithLODObjects map for the packed cell coordinate; otherwise returns true as a permissive fallback.
0x4F0DA7: jz      short loc_4F0DCC
0x4F0DA9: movsx   edx, [esp+cellX]
0x4F0DAE: lea     eax, [esp+cellX]
0x4F0DB2: push    eax; valueOut
0x4F0DB3: movzx   eax, [esp+4+cellY]
0x4F0DB8: shl     edx, 10h
0x4F0DBB: or      edx, eax
0x4F0DBD: push    edx; key
0x4F0DBE: add     ecx, 0C8h ; 'È'; this
0x4F0DC4: call    NiTMap_TryGetAtByteValue; Verified generic NiTMap lookup helper: hashes the UInt32 key through the map vtable, walks the bucket chain using the map's key comparator, returns false when absent, and on a match writes the low byte of the entry data field to valueOut and returns true. Callers use it for byte/boolean-valued maps, including PlayerCharacter_GetLastSpaceForDoor and cell/worldspace visited or filter maps; this helper does not establish the full map value width.
0x4F0DC9: retn    8
0x4F0DCC: mov     al, 1
0x4F0DCE: retn    8
