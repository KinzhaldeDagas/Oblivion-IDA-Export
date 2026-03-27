0x5BC690: push    esi
0x5BC691: mov     esi, ecx
0x5BC693: call    ??1MessageMenu@@UAE@XZ; MessageMenu::~MessageMenu(void)
0x5BC698: test    byte ptr [esp+4+arg_0], 1
0x5BC69D: jz      short loc_5BC6A8
0x5BC69F: push    esi
0x5BC6A0: call    FormHeapFree
0x5BC6A5: add     esp, 4
0x5BC6A8: mov     eax, esi
0x5BC6AA: pop     esi
0x5BC6AB: retn    4
