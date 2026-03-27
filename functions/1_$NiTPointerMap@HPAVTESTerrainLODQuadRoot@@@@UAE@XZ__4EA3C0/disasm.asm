0x4EA3C0: push    0FFFFFFFFh
0x4EA3C2: push    offset ??1?$NiTPointerMap@HPAVTESTerrainLODQuadRoot@@@@UAE@XZ_SEH
0x4EA3C7: mov     eax, large fs:0
0x4EA3CD: push    eax
0x4EA3CE: push    ecx
0x4EA3CF: push    esi
0x4EA3D0: mov     eax, ds:0B30AACh
0x4EA3D5: xor     eax, esp
0x4EA3D7: push    eax
0x4EA3D8: lea     eax, [esp+18h+var_C]
0x4EA3DC: mov     large fs:0, eax
0x4EA3E2: mov     esi, ecx
0x4EA3E4: mov     [esp+18h+var_10], esi
0x4EA3E8: mov     dword ptr [esi], offset ??_7?$NiTPointerMap@HPAVTESTerrainLODQuadRoot@@@@6B@; const NiTPointerMap<int,TESTerrainLODQuadRoot *>::`vftable'
0x4EA3EE: mov     [esp+18h+var_4], 0
0x4EA3F6: call    NiTMap_Clear
0x4EA3FB: mov     ecx, esi
0x4EA3FD: mov     [esp+18h+var_4], 0FFFFFFFFh
0x4EA405: mov     dword ptr [esi], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@HPAVTESTerrainLODQuadRoot@@@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,int,TESTerrainLODQuadRoot *>::`vftable'
0x4EA40B: call    NiTMap_Clear
0x4EA410: mov     eax, [esi+8]
0x4EA413: push    eax
0x4EA414: call    FormHeapFree
0x4EA419: add     esp, 4
0x4EA41C: mov     ecx, [esp+18h+var_C]
0x4EA420: mov     large fs:0, ecx
0x4EA427: pop     ecx
0x4EA428: pop     esi
0x4EA429: add     esp, 10h
0x4EA42C: retn
