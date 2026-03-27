0x777B10: push    esi
0x777B11: mov     esi, ecx
0x777B13: mov     dword ptr [esi], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@IPAVNiDX9VBInfo@NiDX9VertexBufferManager@@@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,uint,NiDX9VertexBufferManager::NiDX9VBInfo *>::`vftable'
0x777B19: call    NiTMap_Clear
0x777B1E: mov     eax, [esi+8]
0x777B21: push    eax
0x777B22: call    FormHeapFree
0x777B27: add     esp, 4
0x777B2A: test    [esp+4+arg_0], 1
0x777B2F: jz      short loc_777B3A
0x777B31: push    esi
0x777B32: call    FormHeapFree
0x777B37: add     esp, 4
0x777B3A: mov     eax, esi
0x777B3C: pop     esi
0x777B3D: retn    4
