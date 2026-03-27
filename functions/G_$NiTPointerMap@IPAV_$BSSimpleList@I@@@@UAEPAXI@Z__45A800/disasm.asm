0x45A800: push    esi
0x45A801: mov     esi, ecx
0x45A803: call    ??1?$NiTPointerMap@IPAV?$BSSimpleList@I@@@@UAE@XZ; NiTPointerMap<uint,BSSimpleList<uint> *>::~NiTPointerMap<uint,BSSimpleList<uint> *>(void)
0x45A808: test    [esp+4+arg_0], 1
0x45A80D: jz      short loc_45A818
0x45A80F: push    esi
0x45A810: call    FormHeapFree
0x45A815: add     esp, 4
0x45A818: mov     eax, esi
0x45A81A: pop     esi
0x45A81B: retn    4
