0x4E4B70: push    esi
0x4E4B71: mov     esi, ecx
0x4E4B73: mov     dword ptr [esi], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@PAVTESObjectREFR@@PAV?$BSSimpleList@PAVTESPathGridPoint@@@@@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,TESObjectREFR *,BSSimpleList<TESPathGridPoint *> *>::`vftable'
0x4E4B79: call    NiTMap_Clear
0x4E4B7E: mov     eax, [esi+8]
0x4E4B81: push    eax
0x4E4B82: call    FormHeapFree
0x4E4B87: add     esp, 4
0x4E4B8A: test    [esp+4+arg_0], 1
0x4E4B8F: jz      short loc_4E4B9A
0x4E4B91: push    esi
0x4E4B92: call    FormHeapFree
0x4E4B97: add     esp, 4
0x4E4B9A: mov     eax, esi
0x4E4B9C: pop     esi
0x4E4B9D: retn    4
