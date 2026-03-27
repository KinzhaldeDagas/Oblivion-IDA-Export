0x42AE10: push    esi
0x42AE11: mov     esi, ecx
0x42AE13: call    ??1ExtraContainerChanges@@UAE@XZ; ExtraContainerChanges::~ExtraContainerChanges(void)
0x42AE18: test    byte ptr [esp+4+arg_0], 1
0x42AE1D: jz      short loc_42AE28
0x42AE1F: push    esi
0x42AE20: call    FormHeapFree
0x42AE25: add     esp, 4
0x42AE28: mov     eax, esi
0x42AE2A: pop     esi
0x42AE2B: retn    4
