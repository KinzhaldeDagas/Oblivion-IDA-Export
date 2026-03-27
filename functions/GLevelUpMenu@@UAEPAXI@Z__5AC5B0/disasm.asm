0x5AC5B0: push    esi
0x5AC5B1: mov     esi, ecx
0x5AC5B3: mov     dword ptr [esi], offset ??_7LevelUpMenu@@6B@; const LevelUpMenu::`vftable'
0x5AC5B9: call    ??1Menu@@UAE@XZ; Menu::~Menu(void)
0x5AC5BE: test    byte ptr [esp+4+arg_0], 1
0x5AC5C3: jz      short loc_5AC5CE
0x5AC5C5: push    esi
0x5AC5C6: call    FormHeapFree
0x5AC5CB: add     esp, 4
0x5AC5CE: mov     eax, esi
0x5AC5D0: pop     esi
0x5AC5D1: retn    4
