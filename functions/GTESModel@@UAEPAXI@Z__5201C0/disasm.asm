0x5201C0: push    esi
0x5201C1: mov     esi, ecx
0x5201C3: call    ??1TESModel@@UAE@XZ; TESModel::~TESModel(void)
0x5201C8: test    byte ptr [esp+4+arg_0], 1
0x5201CD: jz      short loc_5201D8
0x5201CF: push    esi
0x5201D0: call    FormHeapFree
0x5201D5: add     esp, 4
0x5201D8: mov     eax, esi
0x5201DA: pop     esi
0x5201DB: retn    4
