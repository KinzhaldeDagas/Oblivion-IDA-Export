0x680070: push    esi
0x680071: mov     esi, ecx
0x680073: call    ??1?$NiTPointerMap@PAVTESForm@@PAV?$BSSimpleList@PAVAStarWorldNode@@@@@@UAE@XZ; NiTPointerMap<TESForm *,BSSimpleList<AStarWorldNode *> *>::~NiTPointerMap<TESForm *,BSSimpleList<AStarWorldNode *> *>(void)
0x680078: test    [esp+4+arg_0], 1
0x68007D: jz      short loc_680088
0x68007F: push    esi
0x680080: call    FormHeapFree
0x680085: add     esp, 4
0x680088: mov     eax, esi
0x68008A: pop     esi
0x68008B: retn    4
