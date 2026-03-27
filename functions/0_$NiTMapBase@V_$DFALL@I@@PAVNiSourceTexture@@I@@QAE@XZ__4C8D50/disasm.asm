0x4C8D50: push    esi
0x4C8D51: mov     esi, ecx
0x4C8D53: mov     dword ptr [esi], offset ??_7?$NiTMapBase@V?$DFALL@I@@PAVNiSourceTexture@@I@@6B@; const NiTMapBase<DFALL<uint>,NiSourceTexture *,uint>::`vftable'
0x4C8D59: call    NiTMap_Clear
0x4C8D5E: mov     eax, [esi+8]
0x4C8D61: push    eax
0x4C8D62: call    FormHeapFree
0x4C8D67: add     esp, 4
0x4C8D6A: test    [esp+4+arg_0], 1
0x4C8D6F: jz      short loc_4C8D7A
0x4C8D71: push    esi
0x4C8D72: call    FormHeapFree
0x4C8D77: add     esp, 4
0x4C8D7A: mov     eax, esi
0x4C8D7C: pop     esi
0x4C8D7D: retn    4
