0x775D60: push    esi
0x775D61: mov     esi, ecx
0x775D63: mov     dword ptr [esi], offset ??_7?$NiTPointerMap@W4_D3DFORMAT@@PAVRenderTargetInfo@DisplayFormatInfo@NiDX9DeviceDesc@@@@6B@; const NiTPointerMap<_D3DFORMAT,NiDX9DeviceDesc::DisplayFormatInfo::RenderTargetInfo *>::`vftable'
0x775D69: call    NiTMap_Clear
0x775D6E: mov     ecx, esi
0x775D70: mov     dword ptr [esi], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@W4_D3DFORMAT@@PAVRenderTargetInfo@DisplayFormatInfo@NiDX9DeviceDesc@@@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,_D3DFORMAT,NiDX9DeviceDesc::DisplayFormatInfo::RenderTargetInfo *>::`vftable'
0x775D76: call    NiTMap_Clear
0x775D7B: mov     eax, [esi+8]
0x775D7E: push    eax
0x775D7F: call    FormHeapFree
0x775D84: add     esp, 4
0x775D87: test    [esp+4+arg_0], 1
0x775D8C: jz      short loc_775D97
0x775D8E: push    esi
0x775D8F: call    FormHeapFree
0x775D94: add     esp, 4
0x775D97: mov     eax, esi
0x775D99: pop     esi
0x775D9A: retn    4
