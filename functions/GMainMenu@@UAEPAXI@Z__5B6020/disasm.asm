0x5B6020: push    esi
0x5B6021: mov     esi, ecx
0x5B6023: call    ??1MainMenu@@UAE@XZ; MainMenu::~MainMenu(void)
0x5B6028: test    byte ptr [esp+4+arg_0], 1
0x5B602D: jz      short loc_5B6038
0x5B602F: push    esi
0x5B6030: call    FormHeapFree
0x5B6035: add     esp, 4
0x5B6038: mov     eax, esi
0x5B603A: pop     esi
0x5B603B: retn    4
