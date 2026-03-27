0x7D5470: push    esi
0x7D5471: mov     esi, ecx
0x7D5473: call    ??1?$NiTPointerList@V?$NiPointer@VNiTriBasedGeom@@@@@@UAE@XZ; NiTPointerList<NiPointer<NiTriBasedGeom>>::~NiTPointerList<NiPointer<NiTriBasedGeom>>(void)
0x7D5478: test    [esp+4+arg_0], 1
0x7D547D: jz      short loc_7D5488
0x7D547F: push    esi
0x7D5480: call    FormHeapFree
0x7D5485: add     esp, 4
0x7D5488: mov     eax, esi
0x7D548A: pop     esi
0x7D548B: retn    4
