0x5A9BB0: push    esi
0x5A9BB1: mov     esi, ecx
0x5A9BB3: mov     dword ptr [esi], offset ??_7InventoryMenu@@6B@; const InventoryMenu::`vftable'
0x5A9BB9: call    ??1Menu@@UAE@XZ; Menu::~Menu(void)
0x5A9BBE: test    byte ptr [esp+4+arg_0], 1
0x5A9BC3: jz      short loc_5A9BCE
0x5A9BC5: push    esi
0x5A9BC6: call    FormHeapFree
0x5A9BCB: add     esp, 4
0x5A9BCE: mov     eax, esi
0x5A9BD0: pop     esi
0x5A9BD1: retn    4
