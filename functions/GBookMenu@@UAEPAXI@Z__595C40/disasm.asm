0x595C40: push    esi
0x595C41: mov     esi, ecx
0x595C43: mov     dword ptr [esi], offset ??_7BookMenu@@6B@; const BookMenu::`vftable'
0x595C49: call    ??1Menu@@UAE@XZ; Menu::~Menu(void)
0x595C4E: test    byte ptr [esp+4+arg_0], 1
0x595C53: jz      short loc_595C5E
0x595C55: push    esi
0x595C56: call    FormHeapFree
0x595C5B: add     esp, 4
0x595C5E: mov     eax, esi
0x595C60: pop     esi
0x595C61: retn    4
