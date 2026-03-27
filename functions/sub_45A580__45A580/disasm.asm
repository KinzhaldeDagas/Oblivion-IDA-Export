0x45A580: push    esi
0x45A581: mov     esi, ecx
0x45A583: mov     dword ptr [esi], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@EPAV?$BSSimpleList@PAULoadFormHeader@@@@@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,uchar,BSSimpleList<LoadFormHeader *> *>::`vftable'
0x45A589: call    NiTMap_Clear
0x45A58E: mov     eax, [esi+8]
0x45A591: push    eax
0x45A592: call    FormHeapFree
0x45A597: add     esp, 4
0x45A59A: pop     esi
0x45A59B: retn
