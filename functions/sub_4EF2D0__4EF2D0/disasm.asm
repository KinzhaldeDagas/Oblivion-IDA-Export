0x4EF2D0: mov     eax, [ecx+0DCh]; Verified .cmp mode-mask bit meanings from Oblivion consumers: 0x1 enables the tree channel (DistantLOD_UpdateExteriorGrid pairs this with bDisplayLODTrees); 0x2 enables the building/object channel (paired with bDisplayLODBuildings and CellsWithLODObjects); 0x4 enables the LandLOD channel (DistantLOD_UpdateLandLODMap). Default mask 0x7 enables all three.
0x4EF2D6: and     eax, [esp+modeBit]
0x4EF2DA: neg     eax
0x4EF2DC: sbb     eax, eax
0x4EF2DE: neg     eax
0x4EF2E0: retn    4
