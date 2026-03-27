0x5D56F0: push    esi
0x5D56F1: mov     esi, ecx
0x5D56F3: mov     dword ptr [esi], offset ??_7SkillsMenu@@6B@; const SkillsMenu::`vftable'
0x5D56F9: call    ??1Menu@@UAE@XZ; Menu::~Menu(void)
0x5D56FE: test    byte ptr [esp+4+arg_0], 1
0x5D5703: jz      short loc_5D570E
0x5D5705: push    esi
0x5D5706: call    FormHeapFree
0x5D570B: add     esp, 4
0x5D570E: mov     eax, esi
0x5D5710: pop     esi
0x5D5711: retn    4
