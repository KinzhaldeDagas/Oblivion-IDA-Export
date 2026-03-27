0x4E6030: push    esi
0x4E6031: mov     esi, ecx
0x4E6033: call    ??1?$NiTPointerMap@PAVTESObjectREFR@@PAV?$BSSimpleList@PAVTESPathGridPoint@@@@@@UAE@XZ; NiTPointerMap<TESObjectREFR *,BSSimpleList<TESPathGridPoint *> *>::~NiTPointerMap<TESObjectREFR *,BSSimpleList<TESPathGridPoint *> *>(void)
0x4E6038: test    [esp+4+arg_0], 1
0x4E603D: jz      short loc_4E6048
0x4E603F: push    esi
0x4E6040: call    FormHeapFree
0x4E6045: add     esp, 4
0x4E6048: mov     eax, esi
0x4E604A: pop     esi
0x4E604B: retn    4
