0x5A6AE0: push    esi
0x5A6AE1: mov     esi, ecx
0x5A6AE3: call    ??1HUDMainMenu@@UAE@XZ; HUDMainMenu::~HUDMainMenu(void)
0x5A6AE8: test    byte ptr [esp+4+arg_0], 1
0x5A6AED: jz      short loc_5A6AF8
0x5A6AEF: push    esi
0x5A6AF0: call    FormHeapFree
0x5A6AF5: add     esp, 4
0x5A6AF8: mov     eax, esi
0x5A6AFA: pop     esi
0x5A6AFB: retn    4
