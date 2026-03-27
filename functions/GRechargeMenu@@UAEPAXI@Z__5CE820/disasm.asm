0x5CE820: push    esi
0x5CE821: mov     esi, ecx
0x5CE823: call    ??1RechargeMenu@@UAE@XZ; RechargeMenu::~RechargeMenu(void)
0x5CE828: test    byte ptr [esp+4+arg_0], 1
0x5CE82D: jz      short loc_5CE838
0x5CE82F: push    esi
0x5CE830: call    FormHeapFree
0x5CE835: add     esp, 4
0x5CE838: mov     eax, esi
0x5CE83A: pop     esi
0x5CE83B: retn    4
