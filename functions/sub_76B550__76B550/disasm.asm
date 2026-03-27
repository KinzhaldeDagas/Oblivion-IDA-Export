0x76B550: push    esi
0x76B551: mov     esi, ecx
0x76B553: mov     dword ptr [esi], offset ??_7?$NiTPointerMap@PAVNiRenderedCubeMap@@PAVNiDX9RenderedCubeMapData@@@@6B@; const NiTPointerMap<NiRenderedCubeMap *,NiDX9RenderedCubeMapData *>::`vftable'
0x76B559: call    NiTMap_Clear
0x76B55E: mov     ecx, esi
0x76B560: mov     dword ptr [esi], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@PAVNiRenderedCubeMap@@PAVNiDX9RenderedCubeMapData@@@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,NiRenderedCubeMap *,NiDX9RenderedCubeMapData *>::`vftable'
0x76B566: call    NiTMap_Clear
0x76B56B: mov     eax, [esi+8]
0x76B56E: push    eax
0x76B56F: call    FormHeapFree
0x76B574: add     esp, 4
0x76B577: test    [esp+4+arg_0], 1
0x76B57C: jz      short loc_76B587
0x76B57E: push    esi
0x76B57F: call    FormHeapFree
0x76B584: add     esp, 4
0x76B587: mov     eax, esi
0x76B589: pop     esi
0x76B58A: retn    4
