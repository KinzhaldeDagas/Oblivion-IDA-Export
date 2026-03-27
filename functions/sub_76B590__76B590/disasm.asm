0x76B590: push    esi
0x76B591: mov     esi, ecx
0x76B593: mov     dword ptr [esi], offset ??_7?$NiTPointerMap@PAVNiDynamicTexture@@PAVNiDX9DynamicTextureData@@@@6B@; const NiTPointerMap<NiDynamicTexture *,NiDX9DynamicTextureData *>::`vftable'
0x76B599: call    NiTMap_Clear
0x76B59E: mov     ecx, esi
0x76B5A0: mov     dword ptr [esi], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@PAVNiDynamicTexture@@PAVNiDX9DynamicTextureData@@@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,NiDynamicTexture *,NiDX9DynamicTextureData *>::`vftable'
0x76B5A6: call    NiTMap_Clear
0x76B5AB: mov     eax, [esi+8]
0x76B5AE: push    eax
0x76B5AF: call    FormHeapFree
0x76B5B4: add     esp, 4
0x76B5B7: test    [esp+4+arg_0], 1
0x76B5BC: jz      short loc_76B5C7
0x76B5BE: push    esi
0x76B5BF: call    FormHeapFree
0x76B5C4: add     esp, 4
0x76B5C7: mov     eax, esi
0x76B5C9: pop     esi
0x76B5CA: retn    4
