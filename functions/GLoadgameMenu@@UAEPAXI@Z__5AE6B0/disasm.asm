0x5AE6B0: push    esi
0x5AE6B1: mov     esi, ecx
0x5AE6B3: call    ??1LoadgameMenu@@UAE@XZ; LoadgameMenu::~LoadgameMenu(void)
0x5AE6B8: test    byte ptr [esp+4+arg_0], 1
0x5AE6BD: jz      short loc_5AE6C8
0x5AE6BF: push    esi
0x5AE6C0: call    FormHeapFree
0x5AE6C5: add     esp, 4
0x5AE6C8: mov     eax, esi
0x5AE6CA: pop     esi
0x5AE6CB: retn    4
