0x55EF10: push    esi
0x55EF11: mov     esi, ecx
0x55EF13: call    ??1?$NiTPointerMap@PAVTESObjectTREE@@PAV?$NiPointer@VBSTreeModel@@@@@@UAE@XZ; NiTPointerMap<TESObjectTREE *,NiPointer<BSTreeModel> *>::~NiTPointerMap<TESObjectTREE *,NiPointer<BSTreeModel> *>(void)
0x55EF18: test    [esp+4+arg_0], 1
0x55EF1D: jz      short loc_55EF28
0x55EF1F: push    esi
0x55EF20: call    FormHeapFree
0x55EF25: add     esp, 4
0x55EF28: mov     eax, esi
0x55EF2A: pop     esi
0x55EF2B: retn    4
