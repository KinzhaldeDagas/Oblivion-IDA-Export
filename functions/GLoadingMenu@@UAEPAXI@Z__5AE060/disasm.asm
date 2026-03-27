0x5AE060: push    esi
0x5AE061: mov     esi, ecx
0x5AE063: call    ??1LoadingMenu@@UAE@XZ; LoadingMenu::~LoadingMenu(void)
0x5AE068: test    byte ptr [esp+4+arg_0], 1
0x5AE06D: jz      short loc_5AE078
0x5AE06F: push    esi
0x5AE070: call    FormHeapFree
0x5AE075: add     esp, 4
0x5AE078: mov     eax, esi
0x5AE07A: pop     esi
0x5AE07B: retn    4
