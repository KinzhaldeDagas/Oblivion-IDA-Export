0x585920: push    esi
0x585921: mov     esi, ecx
0x585923: call    ??1?$NiTList@V?$BSStringT@D@@@@UAE@XZ; NiTList<BSStringT<char>>::~NiTList<BSStringT<char>>(void)
0x585928: test    [esp+4+arg_0], 1
0x58592D: jz      short loc_585938
0x58592F: push    esi
0x585930: call    FormHeapFree
0x585935: add     esp, 4
0x585938: mov     eax, esi
0x58593A: pop     esi
0x58593B: retn    4
