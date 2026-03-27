0x4F9D90: push    esi
0x4F9D91: mov     esi, ecx
0x4F9D93: call    ??1TESLoadScreen@@UAE@XZ; TESLoadScreen::~TESLoadScreen(void)
0x4F9D98: test    byte ptr [esp+4+arg_0], 1
0x4F9D9D: jz      short loc_4F9DA8
0x4F9D9F: push    esi
0x4F9DA0: call    FormHeapFree
0x4F9DA5: add     esp, 4
0x4F9DA8: mov     eax, esi
0x4F9DAA: pop     esi
0x4F9DAB: retn    4
