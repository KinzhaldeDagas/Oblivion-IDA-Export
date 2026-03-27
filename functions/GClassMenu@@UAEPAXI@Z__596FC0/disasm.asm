0x596FC0: push    esi
0x596FC1: mov     esi, ecx
0x596FC3: call    ??1ClassMenu@@UAE@XZ; ClassMenu::~ClassMenu(void)
0x596FC8: test    byte ptr [esp+4+arg_0], 1
0x596FCD: jz      short loc_596FD8
0x596FCF: push    esi
0x596FD0: call    FormHeapFree
0x596FD5: add     esp, 4
0x596FD8: mov     eax, esi
0x596FDA: pop     esi
0x596FDB: retn    4
