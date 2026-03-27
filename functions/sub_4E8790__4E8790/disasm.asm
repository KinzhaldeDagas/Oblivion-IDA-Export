0x4E8790: push    esi
0x4E8791: mov     esi, ecx
0x4E8793: mov     dword ptr [esi], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@IPAV?$BSSimpleList@PAVTESConnectedPoint@@@@@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,uint,BSSimpleList<TESConnectedPoint *> *>::`vftable'
0x4E8799: call    NiTMap_Clear
0x4E879E: mov     eax, [esi+8]
0x4E87A1: push    eax
0x4E87A2: call    FormHeapFree
0x4E87A7: add     esp, 4
0x4E87AA: test    [esp+4+arg_0], 1
0x4E87AF: jz      short loc_4E87BA
0x4E87B1: push    esi
0x4E87B2: call    FormHeapFree
0x4E87B7: add     esp, 4
0x4E87BA: mov     eax, esi
0x4E87BC: pop     esi
0x4E87BD: retn    4
