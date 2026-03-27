0x4F96C0: push    esi
0x4F96C1: mov     esi, ecx
0x4F96C3: call    ??1TESGlobal@@UAE@XZ; TESGlobal::~TESGlobal(void)
0x4F96C8: test    byte ptr [esp+4+arg_0], 1
0x4F96CD: jz      short loc_4F96D8
0x4F96CF: push    esi
0x4F96D0: call    FormHeapFree
0x4F96D5: add     esp, 4
0x4F96D8: mov     eax, esi
0x4F96DA: pop     esi
0x4F96DB: retn    4
