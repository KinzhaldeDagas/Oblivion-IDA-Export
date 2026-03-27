0x6B9CF0: push    esi
0x6B9CF1: mov     esi, ecx
0x6B9CF3: call    ??1AverageEntry@@UAE@XZ; AverageEntry::~AverageEntry(void)
0x6B9CF8: test    byte ptr [esp+4+arg_0], 1
0x6B9CFD: jz      short loc_6B9D08
0x6B9CFF: push    esi
0x6B9D00: call    FormHeapFree
0x6B9D05: add     esp, 4
0x6B9D08: mov     eax, esi
0x6B9D0A: pop     esi
0x6B9D0B: retn    4
