0x5D3630: push    esi
0x5D3631: mov     esi, ecx
0x5D3633: call    ??1SaveMenu@@UAE@XZ; SaveMenu::~SaveMenu(void)
0x5D3638: test    byte ptr [esp+4+arg_0], 1
0x5D363D: jz      short loc_5D3648
0x5D363F: push    esi
0x5D3640: call    FormHeapFree
0x5D3645: add     esp, 4
0x5D3648: mov     eax, esi
0x5D364A: pop     esi
0x5D364B: retn    4
