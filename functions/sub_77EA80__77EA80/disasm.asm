0x77EA80: push    esi
0x77EA81: mov     esi, ecx
0x77EA83: mov     dword ptr [esi], offset ??_7?$NiTPointerMap@IPAVNiVBChip@@@@6B@; const NiTPointerMap<uint,NiVBChip *>::`vftable'
0x77EA89: call    NiTMap_Clear
0x77EA8E: mov     ecx, esi
0x77EA90: mov     dword ptr [esi], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@IPAVNiVBChip@@@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,uint,NiVBChip *>::`vftable'
0x77EA96: call    NiTMap_Clear
0x77EA9B: mov     eax, [esi+8]
0x77EA9E: push    eax
0x77EA9F: call    FormHeapFree
0x77EAA4: add     esp, 4
0x77EAA7: test    [esp+4+arg_0], 1
0x77EAAC: jz      short loc_77EAB7
0x77EAAE: push    esi
0x77EAAF: call    FormHeapFree
0x77EAB4: add     esp, 4
0x77EAB7: mov     eax, esi
0x77EAB9: pop     esi
0x77EABA: retn    4
