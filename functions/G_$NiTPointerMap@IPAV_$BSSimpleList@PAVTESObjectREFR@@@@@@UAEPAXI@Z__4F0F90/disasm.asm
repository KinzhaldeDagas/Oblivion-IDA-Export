0x4F0F90: push    esi
0x4F0F91: mov     esi, ecx
0x4F0F93: call    ??1?$NiTPointerMap@IPAV?$BSSimpleList@PAVTESObjectREFR@@@@@@UAE@XZ; NiTPointerMap<uint,BSSimpleList<TESObjectREFR *> *>::~NiTPointerMap<uint,BSSimpleList<TESObjectREFR *> *>(void)
0x4F0F98: test    [esp+4+arg_0], 1
0x4F0F9D: jz      short loc_4F0FA8
0x4F0F9F: push    esi
0x4F0FA0: call    FormHeapFree
0x4F0FA5: add     esp, 4
0x4F0FA8: mov     eax, esi
0x4F0FAA: pop     esi
0x4F0FAB: retn    4
