0x768BB0: push    esi
0x768BB1: mov     esi, ecx
0x768BB3: mov     dword ptr [esi], offset ??_7?$NiTPointerListBase@V?$NiTPointerAllocator@I@@V?$NiPointer@VNiDX92DBufferData@@@@@@6B@; const NiTPointerListBase<NiTPointerAllocator<uint>,NiPointer<NiDX92DBufferData>>::`vftable'
0x768BB9: call    NiTPointerList__FreeAllNodes; Free every active NiTPointerList node through the list's FreeNode virtual and clear head/tail/count. The generic list helper does not destroy payload objects; owner code must do that separately when required.
0x768BBE: test    [esp+4+arg_0], 1
0x768BC3: mov     dword ptr [esi], offset ??_7?$NiTListBase@V?$NiTPointerAllocator@I@@V?$NiPointer@VNiDX92DBufferData@@@@@@6B@; const NiTListBase<NiTPointerAllocator<uint>,NiPointer<NiDX92DBufferData>>::`vftable'
0x768BC9: jz      short loc_768BD4
0x768BCB: push    esi
0x768BCC: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x768BD1: add     esp, 4
0x768BD4: mov     eax, esi
0x768BD6: pop     esi
0x768BD7: retn    4
