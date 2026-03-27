0x5A9960: push    esi
0x5A9961: mov     esi, ecx
0x5A9963: call    ??1HUDSubtitleMenu@@UAE@XZ; HUDSubtitleMenu::~HUDSubtitleMenu(void)
0x5A9968: test    byte ptr [esp+4+arg_0], 1
0x5A996D: jz      short loc_5A9978
0x5A996F: push    esi
0x5A9970: call    FormHeapFree
0x5A9975: add     esp, 4
0x5A9978: mov     eax, esi
0x5A997A: pop     esi
0x5A997B: retn    4
