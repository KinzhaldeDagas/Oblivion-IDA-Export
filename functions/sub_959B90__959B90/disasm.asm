0x959B90: push    esi
0x959B91: mov     esi, ecx
0x959B93: mov     eax, [esi+4]
0x959B96: push    eax
0x959B97: mov     dword ptr [esi], offset ??_7?$NiTArray@PAVRecord@NiPick@@@@6B@; const NiTArray<NiPick::Record *>::`vftable'
0x959B9D: call    FormHeapFree
0x959BA2: add     esp, 4
0x959BA5: test    [esp+4+arg_0], 1
0x959BAA: jz      short loc_959BB5
0x959BAC: push    esi
0x959BAD: call    FormHeapFree
0x959BB2: add     esp, 4
0x959BB5: mov     eax, esi
0x959BB7: pop     esi
0x959BB8: retn    4
