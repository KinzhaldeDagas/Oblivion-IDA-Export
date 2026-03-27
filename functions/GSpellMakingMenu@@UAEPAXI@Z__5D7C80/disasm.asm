0x5D7C80: push    esi
0x5D7C81: mov     esi, ecx
0x5D7C83: call    ??1SpellMakingMenu@@UAE@XZ; SpellMakingMenu::~SpellMakingMenu(void)
0x5D7C88: test    byte ptr [esp+4+arg_0], 1
0x5D7C8D: jz      short loc_5D7C98
0x5D7C8F: push    esi
0x5D7C90: call    FormHeapFree
0x5D7C95: add     esp, 4
0x5D7C98: mov     eax, esi
0x5D7C9A: pop     esi
0x5D7C9B: retn    4
