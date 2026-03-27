0x571F70: push    esi
0x571F71: mov     esi, ecx
0x571F73: call    ??1DebugTextExtraData@@UAE@XZ; DebugTextExtraData::~DebugTextExtraData(void)
0x571F78: test    byte ptr [esp+4+arg_0], 1
0x571F7D: jz      short loc_571F88
0x571F7F: push    esi
0x571F80: call    FormHeapFree
0x571F85: add     esp, 4
0x571F88: mov     eax, esi
0x571F8A: pop     esi
0x571F8B: retn    4
