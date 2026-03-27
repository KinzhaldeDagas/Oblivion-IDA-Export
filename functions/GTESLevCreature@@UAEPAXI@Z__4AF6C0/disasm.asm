0x4AF6C0: push    esi
0x4AF6C1: mov     esi, ecx
0x4AF6C3: call    ??1TESLevCreature@@UAE@XZ; TESLevCreature::~TESLevCreature(void)
0x4AF6C8: test    byte ptr [esp+4+arg_0], 1
0x4AF6CD: jz      short loc_4AF6D8
0x4AF6CF: push    esi
0x4AF6D0: call    FormHeapFree
0x4AF6D5: add     esp, 4
0x4AF6D8: mov     eax, esi
0x4AF6DA: pop     esi
0x4AF6DB: retn    4
