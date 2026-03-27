0x5BD050: push    esi
0x5BD051: mov     esi, ecx
0x5BD053: mov     dword ptr [esi], offset ??_7NegotiateMenu@@6B@; const NegotiateMenu::`vftable'
0x5BD059: call    ??1Menu@@UAE@XZ; Menu::~Menu(void)
0x5BD05E: test    byte ptr [esp+4+arg_0], 1
0x5BD063: jz      short loc_5BD06E
0x5BD065: push    esi
0x5BD066: call    FormHeapFree
0x5BD06B: add     esp, 4
0x5BD06E: mov     eax, esi
0x5BD070: pop     esi
0x5BD071: retn    4
