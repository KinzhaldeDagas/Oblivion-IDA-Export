0x680050: push    esi
0x680051: mov     esi, ecx
0x680053: call    ??1?$NiTPointerMap@PAVTESForm@@PAV?$NiTPointerMap@PAVTESForm@@PAV?$BSSimpleList@PAVAStarWorldNode@@@@@@@@UAE@XZ; NiTPointerMap<TESForm *,NiTPointerMap<TESForm *,BSSimpleList<AStarWorldNode *> *> *>::~NiTPointerMap<TESForm *,NiTPointerMap<TESForm *,BSSimpleList<AStarWorldNode *> *> *>(void)
0x680058: test    [esp+4+arg_0], 1
0x68005D: jz      short loc_680068
0x68005F: push    esi
0x680060: call    FormHeapFree
0x680065: add     esp, 4
0x680068: mov     eax, esi
0x68006A: pop     esi
0x68006B: retn    4
