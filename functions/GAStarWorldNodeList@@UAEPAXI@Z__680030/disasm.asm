0x680030: push    esi
0x680031: mov     esi, ecx
0x680033: call    ??1AStarWorldNodeList@@UAE@XZ; AStarWorldNodeList::~AStarWorldNodeList(void)
0x680038: test    byte ptr [esp+4+arg_0], 1
0x68003D: jz      short loc_680048
0x68003F: push    esi
0x680040: call    FormHeapFree
0x680045: add     esp, 4
0x680048: mov     eax, esi
0x68004A: pop     esi
0x68004B: retn    4
