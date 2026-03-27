0x4B2620: push    esi
0x4B2621: mov     esi, ecx
0x4B2623: mov     dword ptr [esi], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@IPAV?$BSSimpleList@PAUBASE_DISTANT_DATA@@@@@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,uint,BSSimpleList<BASE_DISTANT_DATA *> *>::`vftable'
0x4B2629: call    NiTMap_Clear
0x4B262E: mov     eax, [esi+8]
0x4B2631: push    eax
0x4B2632: call    FormHeapFree
0x4B2637: add     esp, 4
0x4B263A: test    [esp+4+arg_0], 1
0x4B263F: jz      short loc_4B264A
0x4B2641: push    esi
0x4B2642: call    FormHeapFree
0x4B2647: add     esp, 4
0x4B264A: mov     eax, esi
0x4B264C: pop     esi
0x4B264D: retn    4
