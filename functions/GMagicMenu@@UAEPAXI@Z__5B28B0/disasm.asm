0x5B28B0: push    esi
0x5B28B1: mov     esi, ecx
0x5B28B3: call    ??1MagicMenu@@UAE@XZ; MagicMenu::~MagicMenu(void)
0x5B28B8: test    byte ptr [esp+4+arg_0], 1
0x5B28BD: jz      short loc_5B28C8
0x5B28BF: push    esi
0x5B28C0: call    FormHeapFree
0x5B28C5: add     esp, 4
0x5B28C8: mov     eax, esi
0x5B28CA: pop     esi
0x5B28CB: retn    4
