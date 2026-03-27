0x6E0FC0: push    esi
0x6E0FC1: mov     esi, ecx
0x6E0FC3: mov     dword ptr [esi], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@PBDV?$NiPointer@VNiSequence@@@@@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,char const *,NiPointer<NiSequence>>::`vftable'
0x6E0FC9: call    NiTMap_Clear
0x6E0FCE: mov     eax, [esi+8]
0x6E0FD1: push    eax
0x6E0FD2: call    FormHeapFree
0x6E0FD7: add     esp, 4
0x6E0FDA: test    [esp+4+arg_0], 1
0x6E0FDF: jz      short loc_6E0FEA
0x6E0FE1: push    esi
0x6E0FE2: call    FormHeapFree
0x6E0FE7: add     esp, 4
0x6E0FEA: mov     eax, esi
0x6E0FEC: pop     esi
0x6E0FED: retn    4
