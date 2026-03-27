0x6C4890: push    esi
0x6C4891: mov     esi, ecx
0x6C4893: mov     dword ptr [esi], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@PBDPAVNiAVObject@@@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,char const *,NiAVObject *>::`vftable'
0x6C4899: call    NiTMap_Clear
0x6C489E: mov     eax, [esi+8]
0x6C48A1: push    eax
0x6C48A2: call    FormHeapFree
0x6C48A7: add     esp, 4
0x6C48AA: test    [esp+4+arg_0], 1
0x6C48AF: jz      short loc_6C48BA
0x6C48B1: push    esi
0x6C48B2: call    FormHeapFree
0x6C48B7: add     esp, 4
0x6C48BA: mov     eax, esi
0x6C48BC: pop     esi
0x6C48BD: retn    4
