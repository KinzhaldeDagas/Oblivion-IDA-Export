0x4BC1C0: push    esi
0x4BC1C1: mov     esi, ecx
0x4BC1C3: call    ??1TESSubSpace@@UAE@XZ; TESSubSpace::~TESSubSpace(void)
0x4BC1C8: test    byte ptr [esp+4+arg_0], 1
0x4BC1CD: jz      short loc_4BC1D8
0x4BC1CF: push    esi
0x4BC1D0: call    FormHeapFree
0x4BC1D5: add     esp, 4
0x4BC1D8: mov     eax, esi
0x4BC1DA: pop     esi
0x4BC1DB: retn    4
