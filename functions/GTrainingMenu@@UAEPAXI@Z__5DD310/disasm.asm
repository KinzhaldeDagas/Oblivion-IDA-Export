0x5DD310: push    esi
0x5DD311: mov     esi, ecx
0x5DD313: mov     dword ptr [esi], offset ??_7TrainingMenu@@6B@; const TrainingMenu::`vftable'
0x5DD319: call    ??1Menu@@UAE@XZ; Menu::~Menu(void)
0x5DD31E: test    byte ptr [esp+4+arg_0], 1
0x5DD323: jz      short loc_5DD32E
0x5DD325: push    esi
0x5DD326: call    FormHeapFree
0x5DD32B: add     esp, 4
0x5DD32E: mov     eax, esi
0x5DD330: pop     esi
0x5DD331: retn    4
