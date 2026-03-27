0x51C620: push    esi
0x51C621: mov     esi, ecx
0x51C623: call    ??1TESClass@@UAE@XZ; TESClass::~TESClass(void)
0x51C628: test    byte ptr [esp+4+arg_0], 1
0x51C62D: jz      short loc_51C638
0x51C62F: push    esi
0x51C630: call    FormHeapFree
0x51C635: add     esp, 4
0x51C638: mov     eax, esi
0x51C63A: pop     esi
0x51C63B: retn    4
