0x9792E0: push    esi
0x9792E1: mov     esi, ecx
0x9792E3: call    ??1NiOBBLeaf@@UAE@XZ; NiOBBLeaf::~NiOBBLeaf(void)
0x9792E8: test    byte ptr [esp+4+arg_0], 1
0x9792ED: jz      short loc_9792F8
0x9792EF: push    esi
0x9792F0: call    FormHeapFree
0x9792F5: add     esp, 4
0x9792F8: mov     eax, esi
0x9792FA: pop     esi
0x9792FB: retn    4
