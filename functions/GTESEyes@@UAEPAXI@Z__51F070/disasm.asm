0x51F070: push    esi
0x51F071: mov     esi, ecx
0x51F073: call    ??1TESEyes@@UAE@XZ; TESEyes::~TESEyes(void)
0x51F078: test    byte ptr [esp+4+arg_0], 1
0x51F07D: jz      short loc_51F088
0x51F07F: push    esi
0x51F080: call    FormHeapFree
0x51F085: add     esp, 4
0x51F088: mov     eax, esi
0x51F08A: pop     esi
0x51F08B: retn    4
