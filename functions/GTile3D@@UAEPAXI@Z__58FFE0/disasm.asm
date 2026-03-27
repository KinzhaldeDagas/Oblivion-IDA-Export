0x58FFE0: push    esi
0x58FFE1: mov     esi, ecx
0x58FFE3: call    ??1Tile3D@@UAE@XZ; Tile3D::~Tile3D(void)
0x58FFE8: test    byte ptr [esp+4+arg_0], 1
0x58FFED: jz      short loc_58FFF8
0x58FFEF: push    esi
0x58FFF0: call    FormHeapFree
0x58FFF5: add     esp, 4
0x58FFF8: mov     eax, esi
0x58FFFA: pop     esi
0x58FFFB: retn    4
