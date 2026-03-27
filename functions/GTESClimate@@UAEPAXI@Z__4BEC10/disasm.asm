0x4BEC10: push    esi
0x4BEC11: mov     esi, ecx
0x4BEC13: call    ??1TESClimate@@UAE@XZ; TESClimate::~TESClimate(void)
0x4BEC18: test    byte ptr [esp+4+arg_0], 1
0x4BEC1D: jz      short loc_4BEC28
0x4BEC1F: push    esi
0x4BEC20: call    FormHeapFree
0x4BEC25: add     esp, 4
0x4BEC28: mov     eax, esi
0x4BEC2A: pop     esi
0x4BEC2B: retn    4
