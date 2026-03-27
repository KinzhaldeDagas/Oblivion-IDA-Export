0x5BD650: push    esi
0x5BD651: mov     esi, ecx
0x5BD653: mov     dword ptr [esi], offset ??_7OptionsMenu@@6B@; const OptionsMenu::`vftable'
0x5BD659: call    ??1Menu@@UAE@XZ; Menu::~Menu(void)
0x5BD65E: test    byte ptr [esp+4+arg_0], 1
0x5BD663: jz      short loc_5BD66E
0x5BD665: push    esi
0x5BD666: call    FormHeapFree
0x5BD66B: add     esp, 4
0x5BD66E: mov     eax, esi
0x5BD670: pop     esi
0x5BD671: retn    4
