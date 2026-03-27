0x719AD0: push    esi
0x719AD1: mov     esi, ecx
0x719AD3: call    ??1TallGrassTriShape@@UAE@XZ; TallGrassTriShape::~TallGrassTriShape(void)
0x719AD8: test    byte ptr [esp+4+arg_0], 1
0x719ADD: jz      short loc_719AE8
0x719ADF: push    esi
0x719AE0: call    FormHeapFree
0x719AE5: add     esp, 4
0x719AE8: mov     eax, esi
0x719AEA: pop     esi
0x719AEB: retn    4
