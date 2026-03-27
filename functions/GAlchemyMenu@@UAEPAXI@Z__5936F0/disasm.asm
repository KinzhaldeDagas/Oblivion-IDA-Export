0x5936F0: push    esi
0x5936F1: mov     esi, ecx
0x5936F3: call    ??1AlchemyMenu@@UAE@XZ; AlchemyMenu::~AlchemyMenu(void)
0x5936F8: test    byte ptr [esp+4+arg_0], 1
0x5936FD: jz      short loc_593708
0x5936FF: push    esi
0x593700: call    FormHeapFree
0x593705: add     esp, 4
0x593708: mov     eax, esi
0x59370A: pop     esi
0x59370B: retn    4
