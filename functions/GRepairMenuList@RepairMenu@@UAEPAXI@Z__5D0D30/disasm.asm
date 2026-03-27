0x5D0D30: push    esi
0x5D0D31: mov     esi, ecx
0x5D0D33: call    ??1RepairMenuList@RepairMenu@@UAE@XZ; RepairMenu::RepairMenuList::~RepairMenuList(void)
0x5D0D38: test    byte ptr [esp+4+arg_0], 1
0x5D0D3D: jz      short loc_5D0D48
0x5D0D3F: push    esi
0x5D0D40: call    FormHeapFree
0x5D0D45: add     esp, 4
0x5D0D48: mov     eax, esi
0x5D0D4A: pop     esi
0x5D0D4B: retn    4
