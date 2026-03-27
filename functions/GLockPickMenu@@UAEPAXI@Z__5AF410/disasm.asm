0x5AF410: push    esi
0x5AF411: mov     esi, ecx
0x5AF413: mov     dword ptr [esi], offset ??_7LockPickMenu@@6B@; const LockPickMenu::`vftable'
0x5AF419: call    ??1Menu@@UAE@XZ; Menu::~Menu(void)
0x5AF41E: test    byte ptr [esp+4+arg_0], 1
0x5AF423: jz      short loc_5AF42E
0x5AF425: push    esi
0x5AF426: call    FormHeapFree
0x5AF42B: add     esp, 4
0x5AF42E: mov     eax, esi
0x5AF430: pop     esi
0x5AF431: retn    4
