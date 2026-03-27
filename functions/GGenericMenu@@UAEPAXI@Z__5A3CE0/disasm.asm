0x5A3CE0: push    esi
0x5A3CE1: mov     esi, ecx
0x5A3CE3: call    ??1GenericMenu@@UAE@XZ; GenericMenu::~GenericMenu(void)
0x5A3CE8: test    byte ptr [esp+4+arg_0], 1
0x5A3CED: jz      short loc_5A3CF8
0x5A3CEF: push    esi
0x5A3CF0: call    FormHeapFree
0x5A3CF5: add     esp, 4
0x5A3CF8: mov     eax, esi
0x5A3CFA: pop     esi
0x5A3CFB: retn    4
