0x5D1060: push    esi
0x5D1061: mov     esi, ecx
0x5D1063: call    ??1RepairMenu@@UAE@XZ; RepairMenu::~RepairMenu(void)
0x5D1068: test    byte ptr [esp+4+arg_0], 1
0x5D106D: jz      short loc_5D1078
0x5D106F: push    esi
0x5D1070: call    FormHeapFree
0x5D1075: add     esp, 4
0x5D1078: mov     eax, esi
0x5D107A: pop     esi
0x5D107B: retn    4
