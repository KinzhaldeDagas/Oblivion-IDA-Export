0x5C0CF0: push    esi
0x5C0CF1: mov     esi, ecx
0x5C0CF3: mov     dword ptr [esi], offset ??_7QuickKeysMenu@@6B@; const QuickKeysMenu::`vftable'
0x5C0CF9: call    ??1Menu@@UAE@XZ; Menu::~Menu(void)
0x5C0CFE: test    byte ptr [esp+4+arg_0], 1
0x5C0D03: jz      short loc_5C0D0E
0x5C0D05: push    esi
0x5C0D06: call    FormHeapFree
0x5C0D0B: add     esp, 4
0x5C0D0E: mov     eax, esi
0x5C0D10: pop     esi
0x5C0D11: retn    4
