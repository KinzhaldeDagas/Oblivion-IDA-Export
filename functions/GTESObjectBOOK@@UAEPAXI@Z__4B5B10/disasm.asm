0x4B5B10: push    esi
0x4B5B11: mov     esi, ecx
0x4B5B13: call    ??1TESObjectBOOK@@UAE@XZ; TESObjectBOOK::~TESObjectBOOK(void)
0x4B5B18: test    byte ptr [esp+4+arg_0], 1
0x4B5B1D: jz      short loc_4B5B28
0x4B5B1F: push    esi
0x4B5B20: call    FormHeapFree
0x4B5B25: add     esp, 4
0x4B5B28: mov     eax, esi
0x4B5B2A: pop     esi
0x4B5B2B: retn    4
