0x768B50: push    esi
0x768B51: mov     esi, ecx
0x768B53: mov     dword ptr [esi], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@PAVNiRenderedCubeMap@@PAVNiDX9RenderedCubeMapData@@@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,NiRenderedCubeMap *,NiDX9RenderedCubeMapData *>::`vftable'
0x768B59: call    NiTMap_Clear
0x768B5E: mov     eax, [esi+8]
0x768B61: push    eax
0x768B62: call    FormHeapFree
0x768B67: add     esp, 4
0x768B6A: test    [esp+4+arg_0], 1
0x768B6F: jz      short loc_768B7A
0x768B71: push    esi
0x768B72: call    FormHeapFree
0x768B77: add     esp, 4
0x768B7A: mov     eax, esi
0x768B7C: pop     esi
0x768B7D: retn    4
