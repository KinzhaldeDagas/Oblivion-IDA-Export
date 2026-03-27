0x7C1940: push    esi
0x7C1941: mov     esi, ecx
0x7C1943: call    ??1?$NiTPointerList@PAURenderedTextureData@BSTextureManager@@@@UAE@XZ; NiTPointerList<BSTextureManager::RenderedTextureData *>::~NiTPointerList<BSTextureManager::RenderedTextureData *>(void)
0x7C1948: test    [esp+4+arg_0], 1
0x7C194D: jz      short loc_7C1958
0x7C194F: push    esi
0x7C1950: call    FormHeapFree
0x7C1955: add     esp, 4
0x7C1958: mov     eax, esi
0x7C195A: pop     esi
0x7C195B: retn    4
