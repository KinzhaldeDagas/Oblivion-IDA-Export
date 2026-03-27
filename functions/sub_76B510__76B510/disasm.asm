0x76B510: push    esi
0x76B511: mov     esi, ecx
0x76B513: mov     dword ptr [esi], offset ??_7?$NiTPointerMap@PAVNiRenderedTexture@@PAVNiDX9RenderedTextureData@@@@6B@; const NiTPointerMap<NiRenderedTexture *,NiDX9RenderedTextureData *>::`vftable'
0x76B519: call    NiTMap_Clear
0x76B51E: mov     ecx, esi
0x76B520: mov     dword ptr [esi], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@PAVNiRenderedTexture@@PAVNiDX9RenderedTextureData@@@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,NiRenderedTexture *,NiDX9RenderedTextureData *>::`vftable'
0x76B526: call    NiTMap_Clear
0x76B52B: mov     eax, [esi+8]
0x76B52E: push    eax
0x76B52F: call    FormHeapFree
0x76B534: add     esp, 4
0x76B537: test    [esp+4+arg_0], 1
0x76B53C: jz      short loc_76B547
0x76B53E: push    esi
0x76B53F: call    FormHeapFree
0x76B544: add     esp, 4
0x76B547: mov     eax, esi
0x76B549: pop     esi
0x76B54A: retn    4
