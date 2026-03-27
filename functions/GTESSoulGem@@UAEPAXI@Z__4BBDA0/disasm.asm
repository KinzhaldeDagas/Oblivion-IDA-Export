0x4BBDA0: push    esi
0x4BBDA1: mov     esi, ecx
0x4BBDA3: call    ??1TESSoulGem@@UAE@XZ; TESSoulGem::~TESSoulGem(void)
0x4BBDA8: test    byte ptr [esp+4+arg_0], 1
0x4BBDAD: jz      short loc_4BBDB8
0x4BBDAF: push    esi
0x4BBDB0: call    FormHeapFree
0x4BBDB5: add     esp, 4
0x4BBDB8: mov     eax, esi
0x4BBDBA: pop     esi
0x4BBDBB: retn    4
