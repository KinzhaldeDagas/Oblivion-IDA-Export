0x419550: push    esi
0x419551: mov     esi, ecx
0x419553: call    ??1MagicItemForm@@UAE@XZ; MagicItemForm::~MagicItemForm(void)
0x419558: test    byte ptr [esp+4+arg_0], 1
0x41955D: jz      short loc_419568
0x41955F: push    esi
0x419560: call    FormHeapFree
0x419565: add     esp, 4
0x419568: mov     eax, esi
0x41956A: pop     esi
0x41956B: retn    4
