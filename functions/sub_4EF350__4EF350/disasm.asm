0x4EF350: push    esi
0x4EF351: mov     esi, ecx
0x4EF353: mov     dword ptr [esi], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@IPAV?$BSSimpleList@PAVTESObjectREFR@@@@@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,uint,BSSimpleList<TESObjectREFR *> *>::`vftable'
0x4EF359: call    NiTMap_Clear
0x4EF35E: mov     eax, [esi+8]
0x4EF361: push    eax
0x4EF362: call    FormHeapFree
0x4EF367: add     esp, 4
0x4EF36A: test    [esp+4+arg_0], 1
0x4EF36F: jz      short loc_4EF37A
0x4EF371: push    esi
0x4EF372: call    FormHeapFree
0x4EF377: add     esp, 4
0x4EF37A: mov     eax, esi
0x4EF37C: pop     esi
0x4EF37D: retn    4
