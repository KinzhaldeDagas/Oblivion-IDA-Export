0x4EDDC0: push    esi
0x4EDDC1: mov     esi, ecx
0x4EDDC3: call    ??1TESWaterForm@@UAE@XZ; TESWaterForm::~TESWaterForm(void)
0x4EDDC8: test    byte ptr [esp+4+arg_0], 1
0x4EDDCD: jz      short loc_4EDDD8
0x4EDDCF: push    esi
0x4EDDD0: call    FormHeapFree
0x4EDDD5: add     esp, 4
0x4EDDD8: mov     eax, esi
0x4EDDDA: pop     esi
0x4EDDDB: retn    4
