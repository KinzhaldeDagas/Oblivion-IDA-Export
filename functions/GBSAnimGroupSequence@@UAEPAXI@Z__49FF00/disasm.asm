0x49FF00: push    esi
0x49FF01: mov     esi, ecx
0x49FF03: call    ??1BSAnimGroupSequence@@UAE@XZ; BSAnimGroupSequence::~BSAnimGroupSequence(void)
0x49FF08: test    byte ptr [esp+4+arg_0], 1
0x49FF0D: jz      short loc_49FF18
0x49FF0F: push    esi
0x49FF10: call    FormHeapFree
0x49FF15: add     esp, 4
0x49FF18: mov     eax, esi
0x49FF1A: pop     esi
0x49FF1B: retn    4
