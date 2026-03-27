0x5D4880: push    esi
0x5D4881: mov     esi, ecx
0x5D4883: call    ??1SigilStoneMenu@@UAE@XZ; SigilStoneMenu::~SigilStoneMenu(void)
0x5D4888: test    byte ptr [esp+4+arg_0], 1
0x5D488D: jz      short loc_5D4898
0x5D488F: push    esi
0x5D4890: call    FormHeapFree
0x5D4895: add     esp, 4
0x5D4898: mov     eax, esi
0x5D489A: pop     esi
0x5D489B: retn    4
