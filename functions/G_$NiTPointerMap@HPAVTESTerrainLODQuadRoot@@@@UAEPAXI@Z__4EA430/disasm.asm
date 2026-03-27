0x4EA430: push    esi
0x4EA431: mov     esi, ecx
0x4EA433: call    ??1?$NiTPointerMap@HPAVTESTerrainLODQuadRoot@@@@UAE@XZ; NiTPointerMap<int,TESTerrainLODQuadRoot *>::~NiTPointerMap<int,TESTerrainLODQuadRoot *>(void)
0x4EA438: test    [esp+4+arg_0], 1
0x4EA43D: jz      short loc_4EA448
0x4EA43F: push    esi
0x4EA440: call    FormHeapFree
0x4EA445: add     esp, 4
0x4EA448: mov     eax, esi
0x4EA44A: pop     esi
0x4EA44B: retn    4
