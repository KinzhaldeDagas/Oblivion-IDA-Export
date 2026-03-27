0x4F1DE0: push    esi
0x4F1DE1: mov     esi, ecx
0x4F1DE3: call    ??1TESWorldSpace@@UAE@XZ; TESWorldSpace::~TESWorldSpace(void)
0x4F1DE8: test    byte ptr [esp+4+arg_0], 1
0x4F1DED: jz      short loc_4F1DF8
0x4F1DEF: push    esi
0x4F1DF0: call    FormHeapFree
0x4F1DF5: add     esp, 4
0x4F1DF8: mov     eax, esi
0x4F1DFA: pop     esi
0x4F1DFB: retn    4
