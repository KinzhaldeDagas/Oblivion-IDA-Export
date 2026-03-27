0x587CD0: push    esi
0x587CD1: mov     esi, ecx
0x587CD3: call    ??1VideoMenu@@UAE@XZ; VideoMenu::~VideoMenu(void)
0x587CD8: test    byte ptr [esp+4+arg_0], 1
0x587CDD: jz      short loc_587CE8
0x587CDF: push    esi
0x587CE0: call    FormHeapFree
0x587CE5: add     esp, 4
0x587CE8: mov     eax, esi
0x587CEA: pop     esi
0x587CEB: retn    4
