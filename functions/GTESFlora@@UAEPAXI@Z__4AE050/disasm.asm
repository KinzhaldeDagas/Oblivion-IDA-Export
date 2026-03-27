0x4AE050: push    esi
0x4AE051: mov     esi, ecx
0x4AE053: call    ??1TESFlora@@UAE@XZ; TESFlora::~TESFlora(void)
0x4AE058: test    byte ptr [esp+4+arg_0], 1
0x4AE05D: jz      short loc_4AE068
0x4AE05F: push    esi
0x4AE060: call    FormHeapFree
0x4AE065: add     esp, 4
0x4AE068: mov     eax, esi
0x4AE06A: pop     esi
0x4AE06B: retn    4
