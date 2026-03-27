0x778B50: push    esi
0x778B51: mov     esi, ecx
0x778B53: mov     dword ptr [esi], offset ??_7?$NiTPointerMap@IPAVNiDX9IBInfo@NiDX9IndexBufferManager@@@@6B@; const NiTPointerMap<uint,NiDX9IndexBufferManager::NiDX9IBInfo *>::`vftable'
0x778B59: call    NiTMap_Clear
0x778B5E: mov     ecx, esi
0x778B60: mov     dword ptr [esi], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@IPAVNiDX9IBInfo@NiDX9IndexBufferManager@@@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,uint,NiDX9IndexBufferManager::NiDX9IBInfo *>::`vftable'
0x778B66: call    NiTMap_Clear
0x778B6B: mov     eax, [esi+8]
0x778B6E: push    eax
0x778B6F: call    FormHeapFree
0x778B74: add     esp, 4
0x778B77: test    [esp+4+arg_0], 1
0x778B7C: jz      short loc_778B87
0x778B7E: push    esi
0x778B7F: call    FormHeapFree
0x778B84: add     esp, 4
0x778B87: mov     eax, esi
0x778B89: pop     esi
0x778B8A: retn    4
