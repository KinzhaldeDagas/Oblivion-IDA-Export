0x52D0E0: push    esi
0x52D0E1: mov     esi, ecx
0x52D0E3: call    ??1TESRace@@UAE@XZ; TESRace::~TESRace(void)
0x52D0E8: test    byte ptr [esp+4+arg_0], 1
0x52D0ED: jz      short loc_52D0F8
0x52D0EF: push    esi
0x52D0F0: call    FormHeapFree
0x52D0F5: add     esp, 4
0x52D0F8: mov     eax, esi
0x52D0FA: pop     esi
0x52D0FB: retn    4
