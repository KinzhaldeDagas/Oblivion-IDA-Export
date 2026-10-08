0x4EA3A0: mov     eax, [esp+ownerMap]; Verified TESTerrainLODQuadRoot constructor: stores its owner map at +4 and initializes the 0x60-byte quad-data object at +0; caller stores signed quadX/quadY at +8/+0xA.
0x4EA3A4: push    esi
0x4EA3A5: mov     esi, ecx
0x4EA3A7: mov     [esi+4], eax
0x4EA3AA: call    TESTerrainLODQuadRoot_InitializeQuadData; Verified root-data initializer allocates a 0x60-byte TESTerrainLODQuad object, initializes its root pointer and fields, and stores it in TESTerrainLODQuadRoot.quadData.
0x4EA3AF: mov     eax, esi
0x4EA3B1: pop     esi
0x4EA3B2: retn    4
