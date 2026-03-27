0x768BE0: push    esi
0x768BE1: mov     esi, ecx
0x768BE3: mov     dword ptr [esi], offset ??_7?$NiTPointerListBase@V?$NiTPointerAllocator@I@@PAVNiD3DShaderInterface@@@@6B@; const NiTPointerListBase<NiTPointerAllocator<uint>,NiD3DShaderInterface *>::`vftable'
0x768BE9: call    NiTPointerList__FreeAllNodes
0x768BEE: test    [esp+4+arg_0], 1
0x768BF3: mov     dword ptr [esi], offset ??_7?$NiTListBase@V?$NiTPointerAllocator@I@@PAVNiD3DShaderInterface@@@@6B@; const NiTListBase<NiTPointerAllocator<uint>,NiD3DShaderInterface *>::`vftable'
0x768BF9: jz      short loc_768C04
0x768BFB: push    esi
0x768BFC: call    FormHeapFree
0x768C01: add     esp, 4
0x768C04: mov     eax, esi
0x768C06: pop     esi
0x768C07: retn    4
