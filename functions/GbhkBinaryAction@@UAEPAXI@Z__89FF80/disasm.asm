0x89FF80: push    esi
0x89FF81: mov     esi, ecx
0x89FF83: call    ??1bhkBinaryAction@@UAE@XZ; bhkBinaryAction::~bhkBinaryAction(void)
0x89FF88: test    byte ptr [esp+4+arg_0], 1
0x89FF8D: jz      short loc_89FF98
0x89FF8F: push    esi
0x89FF90: call    FormHeapFree
0x89FF95: add     esp, 4
0x89FF98: mov     eax, esi
0x89FF9A: pop     esi
0x89FF9B: retn    4
