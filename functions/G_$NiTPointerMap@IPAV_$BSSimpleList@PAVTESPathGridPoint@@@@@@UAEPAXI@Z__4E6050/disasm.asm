0x4E6050: push    esi
0x4E6051: mov     esi, ecx
0x4E6053: call    ??1?$NiTPointerMap@IPAV?$BSSimpleList@PAVTESPathGridPoint@@@@@@UAE@XZ; NiTPointerMap<uint,BSSimpleList<TESPathGridPoint *> *>::~NiTPointerMap<uint,BSSimpleList<TESPathGridPoint *> *>(void)
0x4E6058: test    [esp+4+arg_0], 1
0x4E605D: jz      short loc_4E6068
0x4E605F: push    esi
0x4E6060: call    FormHeapFree
0x4E6065: add     esp, 4
0x4E6068: mov     eax, esi
0x4E606A: pop     esi
0x4E606B: retn    4
