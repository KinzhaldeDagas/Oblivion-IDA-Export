0x575740: push    esi
0x575741: mov     esi, ecx
0x575743: call    ??1?$NiTList@PAVCharData@FontManager@@@@UAE@XZ; NiTList<FontManager::CharData *>::~NiTList<FontManager::CharData *>(void)
0x575748: test    [esp+4+arg_0], 1
0x57574D: jz      short loc_575758
0x57574F: push    esi
0x575750: call    FormHeapFree
0x575755: add     esp, 4
0x575758: mov     eax, esi
0x57575A: pop     esi
0x57575B: retn    4
