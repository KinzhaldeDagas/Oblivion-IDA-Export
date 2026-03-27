0x5334D0: push    esi
0x5334D1: mov     esi, ecx
0x5334D3: call    ??1CellMopp@@UAE@XZ; CellMopp::~CellMopp(void)
0x5334D8: test    byte ptr [esp+4+arg_0], 1
0x5334DD: jz      short loc_5334E8
0x5334DF: push    esi
0x5334E0: call    FormHeapFree
0x5334E5: add     esp, 4
0x5334E8: mov     eax, esi
0x5334EA: pop     esi
0x5334EB: retn    4
