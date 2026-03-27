0x4A1D50: push    esi
0x4A1D51: mov     esi, ecx
0x4A1D53: mov     dword ptr [esi], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@PBVBSFileEntry@@V?$NiPointer@VNiTexture@@@@@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,BSFileEntry const *,NiPointer<NiTexture>>::`vftable'
0x4A1D59: call    NiTMap_Clear
0x4A1D5E: mov     eax, [esi+8]
0x4A1D61: push    eax
0x4A1D62: call    FormHeapFree
0x4A1D67: add     esp, 4
0x4A1D6A: test    [esp+4+arg_0], 1
0x4A1D6F: jz      short loc_4A1D7A
0x4A1D71: push    esi
0x4A1D72: call    FormHeapFree
0x4A1D77: add     esp, 4
0x4A1D7A: mov     eax, esi
0x4A1D7C: pop     esi
0x4A1D7D: retn    4
