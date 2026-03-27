0x462240: push    esi
0x462241: mov     esi, ecx
0x462243: call    ??1?$NiTMap@IPAV?$NiTSimpleList@PAUExpiredCellData@@@@@@UAE@XZ; NiTMap<uint,NiTSimpleList<ExpiredCellData *> *>::~NiTMap<uint,NiTSimpleList<ExpiredCellData *> *>(void)
0x462248: test    [esp+4+arg_0], 1
0x46224D: jz      short loc_462258
0x46224F: push    esi
0x462250: call    FormHeapFree
0x462255: add     esp, 4
0x462258: mov     eax, esi
0x46225A: pop     esi
0x46225B: retn    4
