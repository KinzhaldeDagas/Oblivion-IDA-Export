0x7493B0: test    [esp+arg_0], 1
0x7493B5: push    esi
0x7493B6: mov     esi, ecx
0x7493B8: mov     dword ptr [esi], offset ??_7?$NiTListBase@V?$NiTPointerAllocator@I@@V?$NiPointer@VNiPSysModifier@@@@@@6B@; const NiTListBase<NiTPointerAllocator<uint>,NiPointer<NiPSysModifier>>::`vftable'
0x7493BE: jz      short loc_7493C9
0x7493C0: push    esi
0x7493C1: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x7493C6: add     esp, 4
0x7493C9: mov     eax, esi
0x7493CB: pop     esi
0x7493CC: retn    4
