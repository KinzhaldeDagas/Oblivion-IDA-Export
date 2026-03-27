0x7C1320: test    [esp+arg_0], 1
0x7C1325: push    esi
0x7C1326: mov     esi, ecx
0x7C1328: mov     dword ptr [esi], offset ??_7?$NiTListBase@V?$NiTPointerAllocator@I@@PAURenderedTextureData@BSTextureManager@@@@6B@; const NiTListBase<NiTPointerAllocator<uint>,BSTextureManager::RenderedTextureData *>::`vftable'
0x7C132E: jz      short loc_7C1339
0x7C1330: push    esi
0x7C1331: call    FormHeapFree
0x7C1336: add     esp, 4
0x7C1339: mov     eax, esi
0x7C133B: pop     esi
0x7C133C: retn    4
