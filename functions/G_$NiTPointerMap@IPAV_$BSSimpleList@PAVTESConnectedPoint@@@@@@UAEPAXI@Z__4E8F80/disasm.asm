0x4E8F80: push    esi
0x4E8F81: mov     esi, ecx
0x4E8F83: call    ??1?$NiTPointerMap@IPAV?$BSSimpleList@PAVTESConnectedPoint@@@@@@UAE@XZ; NiTPointerMap<uint,BSSimpleList<TESConnectedPoint *> *>::~NiTPointerMap<uint,BSSimpleList<TESConnectedPoint *> *>(void)
0x4E8F88: test    [esp+4+arg_0], 1
0x4E8F8D: jz      short loc_4E8F98
0x4E8F8F: push    esi
0x4E8F90: call    FormHeapFree
0x4E8F95: add     esp, 4
0x4E8F98: mov     eax, esi
0x4E8F9A: pop     esi
0x4E8F9B: retn    4
