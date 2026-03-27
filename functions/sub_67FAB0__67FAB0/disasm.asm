0x67FAB0: push    esi
0x67FAB1: mov     esi, ecx
0x67FAB3: mov     dword ptr [esi], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@PAVTESForm@@PAV?$NiTPointerMap@PAVTESForm@@PAV?$BSSimpleList@PAVAStarWorldNode@@@@@@@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,TESForm *,NiTPointerMap<TESForm *,BSSimpleList<AStarWorldNode *> *> *>::`vftable'
0x67FAB9: call    NiTMap_Clear
0x67FABE: mov     eax, [esi+8]
0x67FAC1: push    eax
0x67FAC2: call    FormHeapFree
0x67FAC7: add     esp, 4
0x67FACA: test    [esp+4+arg_0], 1
0x67FACF: jz      short loc_67FADA
0x67FAD1: push    esi
0x67FAD2: call    FormHeapFree
0x67FAD7: add     esp, 4
0x67FADA: mov     eax, esi
0x67FADC: pop     esi
0x67FADD: retn    4
