0x4B4A10: push    esi
0x4B4A11: mov     esi, ecx
0x4B4A13: call    ??1TESObjectAPPA@@UAE@XZ; TESObjectAPPA::~TESObjectAPPA(void)
0x4B4A18: test    byte ptr [esp+4+arg_0], 1
0x4B4A1D: jz      short loc_4B4A28
0x4B4A1F: push    esi
0x4B4A20: call    FormHeapFree
0x4B4A25: add     esp, 4
0x4B4A28: mov     eax, esi
0x4B4A2A: pop     esi
0x4B4A2B: retn    4
