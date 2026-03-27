0x5C4E20: push    esi
0x5C4E21: mov     esi, ecx
0x5C4E23: call    ??1RaceSexMenu@@UAE@XZ; RaceSexMenu::~RaceSexMenu(void)
0x5C4E28: test    byte ptr [esp+4+arg_0], 1
0x5C4E2D: jz      short loc_5C4E38
0x5C4E2F: push    esi
0x5C4E30: call    FormHeapFree
0x5C4E35: add     esp, 4
0x5C4E38: mov     eax, esi
0x5C4E3A: pop     esi
0x5C4E3B: retn    4
