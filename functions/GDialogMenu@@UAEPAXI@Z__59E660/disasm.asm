0x59E660: push    esi
0x59E661: mov     esi, ecx
0x59E663: call    ??1DialogMenu@@UAE@XZ; DialogMenu::~DialogMenu(void)
0x59E668: test    byte ptr [esp+4+arg_0], 1
0x59E66D: jz      short loc_59E678
0x59E66F: push    esi
0x59E670: call    FormHeapFree
0x59E675: add     esp, 4
0x59E678: mov     eax, esi
0x59E67A: pop     esi
0x59E67B: retn    4
