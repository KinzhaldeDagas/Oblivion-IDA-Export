0x73D8F0: push    esi
0x73D8F1: mov     esi, ecx
0x73D8F3: mov     dword ptr [esi], offset ??_7NiSortAdjustNode@@6B@; const NiSortAdjustNode::`vftable'
0x73D8F9: call    ??1NiBSPNode@@UAE@XZ; NiBSPNode::~NiBSPNode(void)
0x73D8FE: test    byte ptr [esp+4+arg_0], 1
0x73D903: jz      short loc_73D90E
0x73D905: push    esi
0x73D906: call    FormHeapFree
0x73D90B: add     esp, 4
0x73D90E: mov     eax, esi
0x73D910: pop     esi
0x73D911: retn    4
