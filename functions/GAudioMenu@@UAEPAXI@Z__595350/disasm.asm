0x595350: push    esi
0x595351: mov     esi, ecx
0x595353: mov     dword ptr [esi], offset ??_7AudioMenu@@6B@; const AudioMenu::`vftable'
0x595359: call    ??1Menu@@UAE@XZ; Menu::~Menu(void)
0x59535E: test    byte ptr [esp+4+arg_0], 1
0x595363: jz      short loc_59536E
0x595365: push    esi
0x595366: call    FormHeapFree
0x59536B: add     esp, 4
0x59536E: mov     eax, esi
0x595370: pop     esi
0x595371: retn    4
