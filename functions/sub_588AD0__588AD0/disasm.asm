0x588AD0: push    esi
0x588AD1: mov     esi, ecx
0x588AD3: mov     eax, [esi+4]
0x588AD6: push    eax
0x588AD7: mov     dword ptr [esi], offset ??_7?$NiTArray@PAVStringListElement@Tile@@@@6B@; const NiTArray<Tile::StringListElement *>::`vftable'
0x588ADD: call    FormHeapFree
0x588AE2: add     esp, 4
0x588AE5: test    [esp+4+arg_0], 1
0x588AEA: jz      short loc_588AF5
0x588AEC: push    esi
0x588AED: call    FormHeapFree
0x588AF2: add     esp, 4
0x588AF5: mov     eax, esi
0x588AF7: pop     esi
0x588AF8: retn    4
