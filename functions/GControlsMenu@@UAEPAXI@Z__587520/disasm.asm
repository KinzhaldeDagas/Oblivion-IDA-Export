0x587520: push    esi
0x587521: mov     esi, ecx
0x587523: mov     dword ptr [esi], offset ??_7ControlsMenu@@6B@; const ControlsMenu::`vftable'
0x587529: call    ??1Menu@@UAE@XZ; Menu::~Menu(void)
0x58752E: test    byte ptr [esp+4+arg_0], 1
0x587533: jz      short loc_58753E
0x587535: push    esi
0x587536: call    FormHeapFree
0x58753B: add     esp, 4
0x58753E: mov     eax, esi
0x587540: pop     esi
0x587541: retn    4
