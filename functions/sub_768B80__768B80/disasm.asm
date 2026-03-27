0x768B80: push    esi
0x768B81: mov     esi, ecx
0x768B83: mov     dword ptr [esi], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@PAVNiDynamicTexture@@PAVNiDX9DynamicTextureData@@@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,NiDynamicTexture *,NiDX9DynamicTextureData *>::`vftable'
0x768B89: call    NiTMap_Clear
0x768B8E: mov     eax, [esi+8]
0x768B91: push    eax
0x768B92: call    FormHeapFree
0x768B97: add     esp, 4
0x768B9A: test    [esp+4+arg_0], 1
0x768B9F: jz      short loc_768BAA
0x768BA1: push    esi
0x768BA2: call    FormHeapFree
0x768BA7: add     esp, 4
0x768BAA: mov     eax, esi
0x768BAC: pop     esi
0x768BAD: retn    4
