0x4BFD10: push    esi
0x4BFD11: mov     esi, ecx
0x4BFD13: mov     dword ptr [esi], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@IPAPAVTESGrassAreaParam@@@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,uint,TESGrassAreaParam * *>::`vftable'
0x4BFD19: call    NiTMap_Clear
0x4BFD1E: mov     eax, [esi+8]
0x4BFD21: push    eax
0x4BFD22: call    FormHeapFree
0x4BFD27: add     esp, 4
0x4BFD2A: test    [esp+4+arg_0], 1
0x4BFD2F: jz      short loc_4BFD3A
0x4BFD31: push    esi
0x4BFD32: call    FormHeapFree
0x4BFD37: add     esp, 4
0x4BFD3A: mov     eax, esi
0x4BFD3C: pop     esi
0x4BFD3D: retn    4
