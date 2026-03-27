0x452B90: push    esi
0x452B91: mov     esi, ecx
0x452B93: mov     dword ptr [esi], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@IPAV?$BSSimpleList@I@@@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,uint,BSSimpleList<uint> *>::`vftable'
0x452B99: call    NiTMap_Clear
0x452B9E: mov     eax, [esi+8]
0x452BA1: push    eax
0x452BA2: call    FormHeapFree
0x452BA7: add     esp, 4
0x452BAA: test    [esp+4+arg_0], 1
0x452BAF: jz      short loc_452BBA
0x452BB1: push    esi
0x452BB2: call    FormHeapFree
0x452BB7: add     esp, 4
0x452BBA: mov     eax, esi
0x452BBC: pop     esi
0x452BBD: retn    4
