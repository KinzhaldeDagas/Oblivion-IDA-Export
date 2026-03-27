0x5900F0: push    esi
0x5900F1: mov     esi, ecx
0x5900F3: call    ??1TileMenu@@UAE@XZ; TileMenu::~TileMenu(void)
0x5900F8: test    byte ptr [esp+4+arg_0], 1
0x5900FD: jz      short loc_590108
0x5900FF: push    esi
0x590100: call    FormHeapFree
0x590105: add     esp, 4
0x590108: mov     eax, esi
0x59010A: pop     esi
0x59010B: retn    4
