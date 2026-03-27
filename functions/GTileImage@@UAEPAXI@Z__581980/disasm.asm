0x581980: push    esi
0x581981: mov     esi, ecx
0x581983: call    ??1TileImage@@UAE@XZ; TileImage::~TileImage(void)
0x581988: test    byte ptr [esp+4+arg_0], 1
0x58198D: jz      short loc_581998
0x58198F: push    esi
0x581990: call    FormHeapFree
0x581995: add     esp, 4
0x581998: mov     eax, esi
0x58199A: pop     esi
0x58199B: retn    4
