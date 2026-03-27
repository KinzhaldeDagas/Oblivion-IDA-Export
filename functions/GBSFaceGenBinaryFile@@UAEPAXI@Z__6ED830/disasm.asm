0x6ED830: push    esi
0x6ED831: mov     esi, ecx
0x6ED833: call    ??1BSFaceGenBinaryFile@@UAE@XZ; BSFaceGenBinaryFile::~BSFaceGenBinaryFile(void)
0x6ED838: test    byte ptr [esp+4+arg_0], 1
0x6ED83D: jz      short loc_6ED848
0x6ED83F: push    esi
0x6ED840: call    FormHeapFree
0x6ED845: add     esp, 4
0x6ED848: mov     eax, esi
0x6ED84A: pop     esi
0x6ED84B: retn    4
