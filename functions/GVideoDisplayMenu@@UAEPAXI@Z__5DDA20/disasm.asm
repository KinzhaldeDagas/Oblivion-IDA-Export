0x5DDA20: push    esi
0x5DDA21: mov     esi, ecx
0x5DDA23: mov     dword ptr [esi], offset ??_7VideoDisplayMenu@@6B@; const VideoDisplayMenu::`vftable'
0x5DDA29: call    ??1Menu@@UAE@XZ; Menu::~Menu(void)
0x5DDA2E: test    byte ptr [esp+4+arg_0], 1
0x5DDA33: jz      short loc_5DDA3E
0x5DDA35: push    esi
0x5DDA36: call    FormHeapFree
0x5DDA3B: add     esp, 4
0x5DDA3E: mov     eax, esi
0x5DDA40: pop     esi
0x5DDA41: retn    4
