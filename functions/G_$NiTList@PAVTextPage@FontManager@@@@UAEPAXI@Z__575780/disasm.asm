0x575780: push    esi
0x575781: mov     esi, ecx
0x575783: call    ??1?$NiTList@PAVTextPage@FontManager@@@@UAE@XZ; NiTList<FontManager::TextPage *>::~NiTList<FontManager::TextPage *>(void)
0x575788: test    [esp+4+arg_0], 1
0x57578D: jz      short loc_575798
0x57578F: push    esi
0x575790: call    FormHeapFree
0x575795: add     esp, 4
0x575798: mov     eax, esi
0x57579A: pop     esi
0x57579B: retn    4
