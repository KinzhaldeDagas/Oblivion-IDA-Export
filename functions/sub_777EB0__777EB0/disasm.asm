0x777EB0: push    esi
0x777EB1: mov     esi, ecx
0x777EB3: mov     dword ptr [esi], offset ??_7?$NiTPointerMap@IPAVNiDX9VBInfo@NiDX9VertexBufferManager@@@@6B@; const NiTPointerMap<uint,NiDX9VertexBufferManager::NiDX9VBInfo *>::`vftable'
0x777EB9: call    NiTMap_Clear
0x777EBE: mov     ecx, esi
0x777EC0: mov     dword ptr [esi], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@IPAVNiDX9VBInfo@NiDX9VertexBufferManager@@@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,uint,NiDX9VertexBufferManager::NiDX9VBInfo *>::`vftable'
0x777EC6: call    NiTMap_Clear
0x777ECB: mov     eax, [esi+8]
0x777ECE: push    eax
0x777ECF: call    FormHeapFree
0x777ED4: add     esp, 4
0x777ED7: test    [esp+4+arg_0], 1
0x777EDC: jz      short loc_777EE7
0x777EDE: push    esi
0x777EDF: call    FormHeapFree
0x777EE4: add     esp, 4
0x777EE7: mov     eax, esi
0x777EE9: pop     esi
0x777EEA: retn    4
