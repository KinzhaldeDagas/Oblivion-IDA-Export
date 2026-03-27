0x5853F0: push    esi
0x5853F1: mov     esi, ecx
0x5853F3: call    ??1Menu@@UAE@XZ; Menu::~Menu(void)
0x5853F8: test    byte ptr [esp+4+arg_0], 1
0x5853FD: jz      short loc_585408
0x5853FF: push    esi
0x585400: call    FormHeapFree
0x585405: add     esp, 4
0x585408: mov     eax, esi
0x58540A: pop     esi
0x58540B: retn    4
