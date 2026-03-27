0x5A4810: push    esi
0x5A4811: mov     esi, ecx
0x5A4813: mov     dword ptr [esi], offset ??_7HUDInfoMenu@@6B@; const HUDInfoMenu::`vftable'
0x5A4819: mov     dword ptr ds:0B3B33Ch, 0
0x5A4823: call    ??1Menu@@UAE@XZ; Menu::~Menu(void)
0x5A4828: test    [esp+4+arg_0], 1
0x5A482D: jz      short loc_5A4838
0x5A482F: push    esi
0x5A4830: call    FormHeapFree
0x5A4835: add     esp, 4
0x5A4838: mov     eax, esi
0x5A483A: pop     esi
0x5A483B: retn    4
