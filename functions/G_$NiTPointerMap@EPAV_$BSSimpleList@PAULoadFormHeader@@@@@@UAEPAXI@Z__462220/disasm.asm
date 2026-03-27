0x462220: push    esi
0x462221: mov     esi, ecx
0x462223: call    ??1?$NiTPointerMap@EPAV?$BSSimpleList@PAULoadFormHeader@@@@@@UAE@XZ; NiTPointerMap<uchar,BSSimpleList<LoadFormHeader *> *>::~NiTPointerMap<uchar,BSSimpleList<LoadFormHeader *> *>(void)
0x462228: test    [esp+4+arg_0], 1
0x46222D: jz      short loc_462238
0x46222F: push    esi
0x462230: call    FormHeapFree
0x462235: add     esp, 4
0x462238: mov     eax, esi
0x46223A: pop     esi
0x46223B: retn    4
