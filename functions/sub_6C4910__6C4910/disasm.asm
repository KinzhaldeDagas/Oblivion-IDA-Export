0x6C4910: push    esi
0x6C4911: mov     esi, ecx
0x6C4913: mov     dword ptr [esi], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@PBDPAVNiControllerSequence@@@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,char const *,NiControllerSequence *>::`vftable'
0x6C4919: call    NiTMap_Clear
0x6C491E: mov     eax, [esi+8]
0x6C4921: push    eax
0x6C4922: call    FormHeapFree
0x6C4927: add     esp, 4
0x6C492A: test    [esp+4+arg_0], 1
0x6C492F: jz      short loc_6C493A
0x6C4931: push    esi
0x6C4932: call    FormHeapFree
0x6C4937: add     esp, 4
0x6C493A: mov     eax, esi
0x6C493C: pop     esi
0x6C493D: retn    4
