0x587AC0: push    esi
0x587AC1: mov     esi, ecx
0x587AC3: call    ??1TextEditMenu@@UAE@XZ; TextEditMenu::~TextEditMenu(void)
0x587AC8: test    byte ptr [esp+4+arg_0], 1
0x587ACD: jz      short loc_587AD8
0x587ACF: push    esi
0x587AD0: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x587AD5: add     esp, 4
0x587AD8: mov     eax, esi
0x587ADA: pop     esi
0x587ADB: retn    4
