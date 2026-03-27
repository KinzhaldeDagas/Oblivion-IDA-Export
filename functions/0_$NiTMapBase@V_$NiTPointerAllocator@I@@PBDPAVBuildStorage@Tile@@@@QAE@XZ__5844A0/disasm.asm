0x5844A0: push    esi
0x5844A1: mov     esi, ecx
0x5844A3: mov     dword ptr [esi], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@PBDPAVBuildStorage@Tile@@@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,char const *,Tile::BuildStorage *>::`vftable'
0x5844A9: call    NiTMap_Clear
0x5844AE: mov     eax, [esi+8]
0x5844B1: push    eax
0x5844B2: call    FormHeapFree
0x5844B7: add     esp, 4
0x5844BA: test    [esp+4+arg_0], 1
0x5844BF: jz      short loc_5844CA
0x5844C1: push    esi
0x5844C2: call    FormHeapFree
0x5844C7: add     esp, 4
0x5844CA: mov     eax, esi
0x5844CC: pop     esi
0x5844CD: retn    4
