0x5B87B0: push    esi
0x5B87B1: mov     esi, ecx
0x5B87B3: call    ??1MapMenu@@UAE@XZ; MapMenu::~MapMenu(void)
0x5B87B8: test    byte ptr [esp+4+arg_0], 1
0x5B87BD: jz      short loc_5B87C8
0x5B87BF: push    esi
0x5B87C0: call    FormHeapFree
0x5B87C5: add     esp, 4
0x5B87C8: mov     eax, esi
0x5B87CA: pop     esi
0x5B87CB: retn    4
