0x575760: push    esi
0x575761: mov     esi, ecx
0x575763: call    ??1?$NiTList@PAVTextLine@FontManager@@@@UAE@XZ; NiTList<FontManager::TextLine *>::~NiTList<FontManager::TextLine *>(void)
0x575768: test    [esp+4+arg_0], 1
0x57576D: jz      short loc_575778
0x57576F: push    esi
0x575770: call    FormHeapFree
0x575775: add     esp, 4
0x575778: mov     eax, esi
0x57577A: pop     esi
0x57577B: retn    4
