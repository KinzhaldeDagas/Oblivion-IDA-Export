0x5BE240: push    esi
0x5BE241: mov     esi, ecx
0x5BE243: mov     dword ptr [esi], offset ??_7PersuasionMenu@@6B@; const PersuasionMenu::`vftable'
0x5BE249: call    ??1Menu@@UAE@XZ; Menu::~Menu(void)
0x5BE24E: test    byte ptr [esp+4+arg_0], 1
0x5BE253: jz      short loc_5BE25E
0x5BE255: push    esi
0x5BE256: call    FormHeapFree
0x5BE25B: add     esp, 4
0x5BE25E: mov     eax, esi
0x5BE260: pop     esi
0x5BE261: retn    4
