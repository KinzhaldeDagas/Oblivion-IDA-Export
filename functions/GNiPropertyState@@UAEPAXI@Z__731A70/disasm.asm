0x731A70: push    esi
0x731A71: mov     esi, ecx
0x731A73: call    ??1NiPropertyState@@UAE@XZ; NiPropertyState::~NiPropertyState(void)
0x731A78: test    byte ptr [esp+4+arg_0], 1
0x731A7D: jz      short loc_731A88
0x731A7F: push    esi
0x731A80: call    FormHeapFree
0x731A85: add     esp, 4
0x731A88: mov     eax, esi
0x731A8A: pop     esi
0x731A8B: retn    4
