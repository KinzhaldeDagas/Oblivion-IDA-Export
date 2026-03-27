0x768B20: push    esi
0x768B21: mov     esi, ecx
0x768B23: mov     dword ptr [esi], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@PAVNiRenderedTexture@@PAVNiDX9RenderedTextureData@@@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,NiRenderedTexture *,NiDX9RenderedTextureData *>::`vftable'
0x768B29: call    NiTMap_Clear
0x768B2E: mov     eax, [esi+8]
0x768B31: push    eax
0x768B32: call    FormHeapFree
0x768B37: add     esp, 4
0x768B3A: test    [esp+4+arg_0], 1
0x768B3F: jz      short loc_768B4A
0x768B41: push    esi
0x768B42: call    FormHeapFree
0x768B47: add     esp, 4
0x768B4A: mov     eax, esi
0x768B4C: pop     esi
0x768B4D: retn    4
