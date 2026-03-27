0x4B9B10: push    esi
0x4B9B11: mov     esi, ecx
0x4B9B13: call    ??1TESObjectSTAT@@UAE@XZ; TESObjectSTAT::~TESObjectSTAT(void)
0x4B9B18: test    byte ptr [esp+4+arg_0], 1
0x4B9B1D: jz      short loc_4B9B28
0x4B9B1F: push    esi
0x4B9B20: call    FormHeapFree
0x4B9B25: add     esp, 4
0x4B9B28: mov     eax, esi
0x4B9B2A: pop     esi
0x4B9B2B: retn    4
