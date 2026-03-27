0x5897C0: push    esi
0x5897C1: mov     esi, ecx
0x5897C3: call    ??1Extra@Tile@@UAE@XZ; Tile::Extra::~Extra(void)
0x5897C8: test    byte ptr [esp+4+arg_0], 1
0x5897CD: jz      short loc_5897D8
0x5897CF: push    esi
0x5897D0: call    FormHeapFree
0x5897D5: add     esp, 4
0x5897D8: mov     eax, esi
0x5897DA: pop     esi
0x5897DB: retn    4
