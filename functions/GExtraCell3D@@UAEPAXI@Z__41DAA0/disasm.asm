0x41DAA0: push    esi
0x41DAA1: mov     esi, ecx
0x41DAA3: call    ??1ExtraCell3D@@UAE@XZ; ExtraCell3D::~ExtraCell3D(void)
0x41DAA8: test    byte ptr [esp+4+arg_0], 1
0x41DAAD: jz      short loc_41DAB8
0x41DAAF: push    esi
0x41DAB0: call    FormHeapFree
0x41DAB5: add     esp, 4
0x41DAB8: mov     eax, esi
0x41DABA: pop     esi
0x41DABB: retn    4
