0x4B25F0: push    esi
0x4B25F1: mov     esi, ecx
0x4B25F3: mov     dword ptr [esi], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@IPAVTESTextureList@@@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,uint,TESTextureList *>::`vftable'
0x4B25F9: call    NiTMap_Clear
0x4B25FE: mov     eax, [esi+8]
0x4B2601: push    eax
0x4B2602: call    FormHeapFree
0x4B2607: add     esp, 4
0x4B260A: test    [esp+4+arg_0], 1
0x4B260F: jz      short loc_4B261A
0x4B2611: push    esi
0x4B2612: call    FormHeapFree
0x4B2617: add     esp, 4
0x4B261A: mov     eax, esi
0x4B261C: pop     esi
0x4B261D: retn    4
