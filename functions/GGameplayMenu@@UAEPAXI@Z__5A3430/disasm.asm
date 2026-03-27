0x5A3430: push    esi
0x5A3431: mov     esi, ecx
0x5A3433: mov     dword ptr [esi], offset ??_7GameplayMenu@@6B@; const GameplayMenu::`vftable'
0x5A3439: call    ??1Menu@@UAE@XZ; Menu::~Menu(void)
0x5A343E: test    byte ptr [esp+4+arg_0], 1
0x5A3443: jz      short loc_5A344E
0x5A3445: push    esi
0x5A3446: call    FormHeapFree
0x5A344B: add     esp, 4
0x5A344E: mov     eax, esi
0x5A3450: pop     esi
0x5A3451: retn    4
