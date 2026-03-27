0x5D9D70: push    esi
0x5D9D71: mov     esi, ecx
0x5D9D73: mov     dword ptr [esi], offset ??_7StatsMenu@@6B@; const StatsMenu::`vftable'
0x5D9D79: call    ??1Menu@@UAE@XZ; Menu::~Menu(void)
0x5D9D7E: test    byte ptr [esp+4+arg_0], 1
0x5D9D83: jz      short loc_5D9D8E
0x5D9D85: push    esi
0x5D9D86: call    FormHeapFree
0x5D9D8B: add     esp, 4
0x5D9D8E: mov     eax, esi
0x5D9D90: pop     esi
0x5D9D91: retn    4
