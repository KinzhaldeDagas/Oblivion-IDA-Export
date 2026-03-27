0x45A5C0: push    esi
0x45A5C1: mov     esi, ecx
0x45A5C3: mov     dword ptr [esi], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@EPAV?$BSSimpleList@PAULoadFormHeader@@@@@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,uchar,BSSimpleList<LoadFormHeader *> *>::`vftable'
0x45A5C9: call    NiTMap_Clear
0x45A5CE: mov     eax, [esi+8]
0x45A5D1: push    eax
0x45A5D2: call    FormHeapFree
0x45A5D7: add     esp, 4
0x45A5DA: test    [esp+4+arg_0], 1
0x45A5DF: jz      short loc_45A5EA
0x45A5E1: push    esi
0x45A5E2: call    FormHeapFree
0x45A5E7: add     esp, 4
0x45A5EA: mov     eax, esi
0x45A5EC: pop     esi
0x45A5ED: retn    4
