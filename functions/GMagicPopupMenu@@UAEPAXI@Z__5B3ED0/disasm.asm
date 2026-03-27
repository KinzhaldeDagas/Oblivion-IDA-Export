0x5B3ED0: push    esi
0x5B3ED1: mov     esi, ecx
0x5B3ED3: mov     dword ptr [esi], offset ??_7MagicPopupMenu@@6B@; const MagicPopupMenu::`vftable'
0x5B3ED9: call    ??1Menu@@UAE@XZ; Menu::~Menu(void)
0x5B3EDE: test    byte ptr [esp+4+arg_0], 1
0x5B3EE3: jz      short loc_5B3EEE
0x5B3EE5: push    esi
0x5B3EE6: call    FormHeapFree
0x5B3EEB: add     esp, 4
0x5B3EEE: mov     eax, esi
0x5B3EF0: pop     esi
0x5B3EF1: retn    4
