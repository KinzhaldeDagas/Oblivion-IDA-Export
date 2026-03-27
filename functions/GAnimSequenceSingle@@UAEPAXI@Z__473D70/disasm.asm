0x473D70: push    esi
0x473D71: mov     esi, ecx
0x473D73: call    ??1AnimSequenceSingle@@UAE@XZ; AnimSequenceSingle::~AnimSequenceSingle(void)
0x473D78: test    byte ptr [esp+4+arg_0], 1
0x473D7D: jz      short loc_473D88
0x473D7F: push    esi
0x473D80: call    FormHeapFree
0x473D85: add     esp, 4
0x473D88: mov     eax, esi
0x473D8A: pop     esi
0x473D8B: retn    4
