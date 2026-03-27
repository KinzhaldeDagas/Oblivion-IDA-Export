0x4BBA10: push    esi
0x4BBA11: mov     esi, ecx
0x4BBA13: call    ??1TESSigilStone@@UAE@XZ; TESSigilStone::~TESSigilStone(void)
0x4BBA18: test    byte ptr [esp+4+arg_0], 1
0x4BBA1D: jz      short loc_4BBA28
0x4BBA1F: push    esi
0x4BBA20: call    FormHeapFree
0x4BBA25: add     esp, 4
0x4BBA28: mov     eax, esi
0x4BBA2A: pop     esi
0x4BBA2B: retn    4
