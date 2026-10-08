0x7498C0: push    esi
0x7498C1: mov     esi, ecx
0x7498C3: mov     dword ptr [esi], offset ??_7?$NiTPointerListBase@V?$NiTPointerAllocator@I@@V?$NiPointer@VNiPSysModifier@@@@@@6B@; const NiTPointerListBase<NiTPointerAllocator<uint>,NiPointer<NiPSysModifier>>::`vftable'
0x7498C9: call    NiTPointerList__FreeAllNodes; Free every active NiTPointerList node through the list's FreeNode virtual and clear head/tail/count. The generic list helper does not destroy payload objects; owner code must do that separately when required.
0x7498CE: test    [esp+4+arg_0], 1
0x7498D3: mov     dword ptr [esi], offset ??_7?$NiTListBase@V?$NiTPointerAllocator@I@@V?$NiPointer@VNiPSysModifier@@@@@@6B@; const NiTListBase<NiTPointerAllocator<uint>,NiPointer<NiPSysModifier>>::`vftable'
0x7498D9: jz      short loc_7498E4
0x7498DB: push    esi
0x7498DC: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x7498E1: add     esp, 4
0x7498E4: mov     eax, esi
0x7498E6: pop     esi
0x7498E7: retn    4
