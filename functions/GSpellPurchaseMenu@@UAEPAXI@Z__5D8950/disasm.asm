0x5D8950: push    esi
0x5D8951: mov     esi, ecx
0x5D8953: mov     dword ptr [esi], offset ??_7SpellPurchaseMenu@@6B@; const SpellPurchaseMenu::`vftable'
0x5D8959: call    ??1Menu@@UAE@XZ; Menu::~Menu(void)
0x5D895E: test    byte ptr [esp+4+arg_0], 1
0x5D8963: jz      short loc_5D896E
0x5D8965: push    esi
0x5D8966: call    FormHeapFree
0x5D896B: add     esp, 4
0x5D896E: mov     eax, esi
0x5D8970: pop     esi
0x5D8971: retn    4
