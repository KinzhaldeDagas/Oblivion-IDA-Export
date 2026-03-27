0x564CC0: push    esi
0x564CC1: mov     esi, ecx
0x564CC3: call    ??1BSTreeNode@@UAE@XZ; BSTreeNode::~BSTreeNode(void)
0x564CC8: test    byte ptr [esp+4+arg_0], 1
0x564CCD: jz      short loc_564CD8
0x564CCF: push    esi
0x564CD0: call    FormHeapFree
0x564CD5: add     esp, 4
0x564CD8: mov     eax, esi
0x564CDA: pop     esi
0x564CDB: retn    4
