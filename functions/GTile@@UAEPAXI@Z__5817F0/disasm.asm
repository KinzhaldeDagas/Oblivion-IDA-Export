0x5817F0: push    esi
0x5817F1: mov     esi, ecx
0x5817F3: call    ??1Tile@@UAE@XZ; Tile::~Tile(void)
0x5817F8: test    byte ptr [esp+4+arg_0], 1
0x5817FD: jz      short loc_581808
0x5817FF: push    esi
0x581800: call    FormHeapFree
0x581805: add     esp, 4
0x581808: mov     eax, esi
0x58180A: pop     esi
0x58180B: retn    4
