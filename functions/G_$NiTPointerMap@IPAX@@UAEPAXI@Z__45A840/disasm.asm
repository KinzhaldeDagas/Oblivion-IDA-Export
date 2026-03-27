0x45A840: push    esi
0x45A841: mov     esi, ecx
0x45A843: call    ??1?$NiTPointerMap@IPAX@@UAE@XZ; NiTPointerMap<uint,void *>::~NiTPointerMap<uint,void *>(void)
0x45A848: test    [esp+4+arg_0], 1
0x45A84D: jz      short loc_45A858
0x45A84F: push    esi
0x45A850: call    FormHeapFree
0x45A855: add     esp, 4
0x45A858: mov     eax, esi
0x45A85A: pop     esi
0x45A85B: retn    4
