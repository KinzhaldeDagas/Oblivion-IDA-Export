0x67E140: push    esi
0x67E141: mov     esi, ecx
0x67E143: call    ??1AStarNodeList@@UAE@XZ; AStarNodeList::~AStarNodeList(void)
0x67E148: test    byte ptr [esp+4+arg_0], 1
0x67E14D: jz      short loc_67E158
0x67E14F: push    esi
0x67E150: call    FormHeapFree
0x67E155: add     esp, 4
0x67E158: mov     eax, esi
0x67E15A: pop     esi
0x67E15B: retn    4
