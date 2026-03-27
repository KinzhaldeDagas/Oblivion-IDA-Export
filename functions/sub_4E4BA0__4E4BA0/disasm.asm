0x4E4BA0: push    esi
0x4E4BA1: mov     esi, ecx
0x4E4BA3: mov     dword ptr [esi], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@IPAV?$BSSimpleList@PAVTESPathGridPoint@@@@@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,uint,BSSimpleList<TESPathGridPoint *> *>::`vftable'
0x4E4BA9: call    NiTMap_Clear
0x4E4BAE: mov     eax, [esi+8]
0x4E4BB1: push    eax
0x4E4BB2: call    FormHeapFree
0x4E4BB7: add     esp, 4
0x4E4BBA: test    [esp+4+arg_0], 1
0x4E4BBF: jz      short loc_4E4BCA
0x4E4BC1: push    esi
0x4E4BC2: call    FormHeapFree
0x4E4BC7: add     esp, 4
0x4E4BCA: mov     eax, esi
0x4E4BCC: pop     esi
0x4E4BCD: retn    4
