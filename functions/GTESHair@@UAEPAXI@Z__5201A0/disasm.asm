0x5201A0: push    esi
0x5201A1: mov     esi, ecx
0x5201A3: call    ??1TESHair@@UAE@XZ; TESHair::~TESHair(void)
0x5201A8: test    byte ptr [esp+4+arg_0], 1
0x5201AD: jz      short loc_5201B8
0x5201AF: push    esi
0x5201B0: call    FormHeapFree
0x5201B5: add     esp, 4
0x5201B8: mov     eax, esi
0x5201BA: pop     esi
0x5201BB: retn    4
