0x67FAE0: push    esi
0x67FAE1: mov     esi, ecx
0x67FAE3: mov     dword ptr [esi], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@PAVTESForm@@PAV?$BSSimpleList@PAVAStarWorldNode@@@@@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,TESForm *,BSSimpleList<AStarWorldNode *> *>::`vftable'
0x67FAE9: call    NiTMap_Clear
0x67FAEE: mov     eax, [esi+8]
0x67FAF1: push    eax
0x67FAF2: call    FormHeapFree
0x67FAF7: add     esp, 4
0x67FAFA: test    [esp+4+arg_0], 1
0x67FAFF: jz      short loc_67FB0A
0x67FB01: push    esi
0x67FB02: call    FormHeapFree
0x67FB07: add     esp, 4
0x67FB0A: mov     eax, esi
0x67FB0C: pop     esi
0x67FB0D: retn    4
