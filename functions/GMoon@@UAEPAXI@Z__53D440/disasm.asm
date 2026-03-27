0x53D440: push    esi
0x53D441: mov     esi, ecx
0x53D443: call    ??1Moon@@UAE@XZ; Moon::~Moon(void)
0x53D448: test    byte ptr [esp+4+arg_0], 1
0x53D44D: jz      short loc_53D458
0x53D44F: push    esi
0x53D450: call    FormHeapFree
0x53D455: add     esp, 4
0x53D458: mov     eax, esi
0x53D45A: pop     esi
0x53D45B: retn    4
