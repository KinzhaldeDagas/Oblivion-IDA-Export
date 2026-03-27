0x683A10: push    esi
0x683A11: mov     esi, ecx
0x683A13: call    ??1PathBuilder@@UAE@XZ; PathBuilder::~PathBuilder(void)
0x683A18: test    byte ptr [esp+4+arg_0], 1
0x683A1D: jz      short loc_683A28
0x683A1F: push    esi
0x683A20: call    FormHeapFree
0x683A25: add     esp, 4
0x683A28: mov     eax, esi
0x683A2A: pop     esi
0x683A2B: retn    4
