0x44EDE0: push    esi
0x44EDE1: mov     esi, ecx
0x44EDE3: call    ??1?$NiTPointerMap@PAVTESForm@@_N@@UAE@XZ; NiTPointerMap<TESForm *,bool>::~NiTPointerMap<TESForm *,bool>(void)
0x44EDE8: test    [esp+4+arg_0], 1
0x44EDED: jz      short loc_44EDF8
0x44EDEF: push    esi
0x44EDF0: call    FormHeapFree
0x44EDF5: add     esp, 4
0x44EDF8: mov     eax, esi
0x44EDFA: pop     esi
0x44EDFB: retn    4
