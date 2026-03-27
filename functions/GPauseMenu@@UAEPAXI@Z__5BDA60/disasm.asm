0x5BDA60: push    esi
0x5BDA61: mov     esi, ecx
0x5BDA63: mov     dword ptr [esi], offset ??_7PauseMenu@@6B@; const PauseMenu::`vftable'
0x5BDA69: call    ??1Menu@@UAE@XZ; Menu::~Menu(void)
0x5BDA6E: test    byte ptr [esp+4+arg_0], 1
0x5BDA73: jz      short loc_5BDA7E
0x5BDA75: push    esi
0x5BDA76: call    FormHeapFree
0x5BDA7B: add     esp, 4
0x5BDA7E: mov     eax, esi
0x5BDA80: pop     esi
0x5BDA81: retn    4
