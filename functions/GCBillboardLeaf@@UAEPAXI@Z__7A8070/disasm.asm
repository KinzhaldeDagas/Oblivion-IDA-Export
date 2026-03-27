0x7A8070: push    esi
0x7A8071: mov     esi, ecx
0x7A8073: call    ??1CBillboardLeaf@@UAE@XZ; CBillboardLeaf::~CBillboardLeaf(void)
0x7A8078: test    byte ptr [esp+4+arg_0], 1
0x7A807D: jz      short loc_7A8088
0x7A807F: push    esi
0x7A8080: call    FormHeapFree
0x7A8085: add     esp, 4
0x7A8088: mov     eax, esi
0x7A808A: pop     esi
0x7A808B: retn    4
