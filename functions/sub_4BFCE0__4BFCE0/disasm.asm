0x4BFCE0: push    esi
0x4BFCE1: mov     esi, ecx
0x4BFCE3: mov     eax, [esi+4]
0x4BFCE6: push    eax
0x4BFCE7: mov     dword ptr [esi], offset ??_7?$NiTArray@PAVNiAGDDataBlock@NiAdditionalGeometryData@@@@6B@; const NiTArray<NiAdditionalGeometryData::NiAGDDataBlock *>::`vftable'
0x4BFCED: call    FormHeapFree
0x4BFCF2: add     esp, 4
0x4BFCF5: test    [esp+4+arg_0], 1
0x4BFCFA: jz      short loc_4BFD05
0x4BFCFC: push    esi
0x4BFCFD: call    FormHeapFree
0x4BFD02: add     esp, 4
0x4BFD05: mov     eax, esi
0x4BFD07: pop     esi
0x4BFD08: retn    4
