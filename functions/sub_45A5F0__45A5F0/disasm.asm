0x45A5F0: push    esi
0x45A5F1: mov     esi, ecx
0x45A5F3: mov     dword ptr [esi], offset ??_7?$NiTMapBase@V?$DFALL@PAV?$NiTSimpleList@PAUExpiredCellData@@@@@@IPAV?$NiTSimpleList@PAUExpiredCellData@@@@@@6B@; const NiTMapBase<DFALL<NiTSimpleList<ExpiredCellData *> *>,uint,NiTSimpleList<ExpiredCellData *> *>::`vftable'
0x45A5F9: call    NiTMap_Clear
0x45A5FE: mov     eax, [esi+8]
0x45A601: push    eax
0x45A602: call    FormHeapFree
0x45A607: add     esp, 4
0x45A60A: test    [esp+4+arg_0], 1
0x45A60F: jz      short loc_45A61A
0x45A611: push    esi
0x45A612: call    FormHeapFree
0x45A617: add     esp, 4
0x45A61A: mov     eax, esi
0x45A61C: pop     esi
0x45A61D: retn    4
