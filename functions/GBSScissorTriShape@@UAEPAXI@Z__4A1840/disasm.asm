0x4A1840: push    esi
0x4A1841: mov     esi, ecx
0x4A1843: mov     dword ptr [esi], offset ??_7BSScissorTriShape@@6B@; const BSScissorTriShape::`vftable'
0x4A1849: call    ??1TallGrassTriShape@@UAE@XZ; TallGrassTriShape::~TallGrassTriShape(void)
0x4A184E: test    byte ptr [esp+4+arg_0], 1
0x4A1853: jz      short loc_4A185E
0x4A1855: push    esi
0x4A1856: call    FormHeapFree
0x4A185B: add     esp, 4
0x4A185E: mov     eax, esi
0x4A1860: pop     esi
0x4A1861: retn    4
