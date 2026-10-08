0x76DD10: push    esi
0x76DD11: mov     esi, ecx
0x76DD13: mov     dword ptr [esi], offset ??_7?$NiTPointerListBase@V?$NiTPointerAllocator@I@@PAVNiDX9AdditionalDepthStencilBufferData@@@@6B@; const NiTPointerListBase<NiTPointerAllocator<uint>,NiDX9AdditionalDepthStencilBufferData *>::`vftable'
0x76DD19: call    NiTPointerList__FreeAllNodes; Free every active NiTPointerList node through the list's FreeNode virtual and clear head/tail/count. The generic list helper does not destroy payload objects; owner code must do that separately when required.
0x76DD1E: test    [esp+4+arg_0], 1
0x76DD23: mov     dword ptr [esi], offset ??_7?$NiTListBase@V?$NiTPointerAllocator@I@@PAVNiDX9AdditionalDepthStencilBufferData@@@@6B@; const NiTListBase<NiTPointerAllocator<uint>,NiDX9AdditionalDepthStencilBufferData *>::`vftable'
0x76DD29: jz      short loc_76DD34
0x76DD2B: push    esi
0x76DD2C: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x76DD31: add     esp, 4
0x76DD34: mov     eax, esi
0x76DD36: pop     esi
0x76DD37: retn    4
