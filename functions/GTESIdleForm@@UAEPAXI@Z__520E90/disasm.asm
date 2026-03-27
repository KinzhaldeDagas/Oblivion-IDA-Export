0x520E90: push    esi
0x520E91: mov     esi, ecx
0x520E93: call    ??1TESIdleForm@@UAE@XZ; TESIdleForm::~TESIdleForm(void)
0x520E98: test    byte ptr [esp+4+arg_0], 1
0x520E9D: jz      short loc_520EA8
0x520E9F: push    esi
0x520EA0: call    FormHeapFree
0x520EA5: add     esp, 4
0x520EA8: mov     eax, esi
0x520EAA: pop     esi
0x520EAB: retn    4
