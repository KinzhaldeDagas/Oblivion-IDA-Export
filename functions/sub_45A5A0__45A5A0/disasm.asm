0x45A5A0: push    esi
0x45A5A1: mov     esi, ecx
0x45A5A3: mov     dword ptr [esi], offset ??_7?$NiTMapBase@V?$DFALL@PAV?$NiTSimpleList@PAUExpiredCellData@@@@@@IPAV?$NiTSimpleList@PAUExpiredCellData@@@@@@6B@; const NiTMapBase<DFALL<NiTSimpleList<ExpiredCellData *> *>,uint,NiTSimpleList<ExpiredCellData *> *>::`vftable'
0x45A5A9: call    NiTMap_Clear
0x45A5AE: mov     eax, [esi+8]
0x45A5B1: push    eax
0x45A5B2: call    FormHeapFree
0x45A5B7: add     esp, 4
0x45A5BA: pop     esi
0x45A5BB: retn
