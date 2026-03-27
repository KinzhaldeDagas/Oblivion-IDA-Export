0x59FC30: push    esi
0x59FC31: mov     esi, ecx
0x59FC33: mov     dword ptr [esi], offset ??_7EffectSettingMenu@@6B@; const EffectSettingMenu::`vftable'
0x59FC39: call    ??1Menu@@UAE@XZ; Menu::~Menu(void)
0x59FC3E: test    byte ptr [esp+4+arg_0], 1
0x59FC43: jz      short loc_59FC4E
0x59FC45: push    esi
0x59FC46: call    FormHeapFree
0x59FC4B: add     esp, 4
0x59FC4E: mov     eax, esi
0x59FC50: pop     esi
0x59FC51: retn    4
