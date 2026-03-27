0x4E9FE0: push    esi
0x4E9FE1: mov     esi, ecx
0x4E9FE3: mov     dword ptr [esi], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@HPAVTESTerrainLODQuadRoot@@@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,int,TESTerrainLODQuadRoot *>::`vftable'
0x4E9FE9: call    NiTMap_Clear
0x4E9FEE: mov     eax, [esi+8]
0x4E9FF1: push    eax
0x4E9FF2: call    FormHeapFree
0x4E9FF7: add     esp, 4
0x4E9FFA: test    [esp+4+arg_0], 1
0x4E9FFF: jz      short loc_4EA00A
0x4EA001: push    esi
0x4EA002: call    FormHeapFree
0x4EA007: add     esp, 4
0x4EA00A: mov     eax, esi
0x4EA00C: pop     esi
0x4EA00D: retn    4
