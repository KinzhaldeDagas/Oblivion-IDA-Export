0x59C9D0: push    esi
0x59C9D1: mov     esi, ecx
0x59C9D3: call    ??1CreditsMenu@@UAE@XZ; CreditsMenu::~CreditsMenu(void)
0x59C9D8: test    byte ptr [esp+4+arg_0], 1
0x59C9DD: jz      short loc_59C9E8
0x59C9DF: push    esi
0x59C9E0: call    FormHeapFree
0x59C9E5: add     esp, 4
0x59C9E8: mov     eax, esi
0x59C9EA: pop     esi
0x59C9EB: retn    4
