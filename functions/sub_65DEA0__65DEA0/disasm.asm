0x65DEA0: push    esi
0x65DEA1: mov     esi, ecx
0x65DEA3: mov     dword ptr [esi], offset ??_7?$NiTMapBase@V?$DFALL@E@@IE@@6B@; const NiTMapBase<DFALL<uchar>,uint,uchar>::`vftable'
0x65DEA9: call    NiTMap_Clear
0x65DEAE: mov     eax, [esi+8]
0x65DEB1: push    eax
0x65DEB2: call    FormHeapFree
0x65DEB7: add     esp, 4
0x65DEBA: pop     esi
0x65DEBB: retn
