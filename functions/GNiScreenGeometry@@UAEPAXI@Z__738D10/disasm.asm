0x738D10: push    esi
0x738D11: mov     esi, ecx
0x738D13: mov     dword ptr [esi], offset ??_7NiScreenGeometry@@6B@; const NiScreenGeometry::`vftable'
0x738D19: call    ??1TallGrassTriShape@@UAE@XZ; TallGrassTriShape::~TallGrassTriShape(void)
0x738D1E: test    byte ptr [esp+4+arg_0], 1
0x738D23: jz      short loc_738D2E
0x738D25: push    esi
0x738D26: call    FormHeapFree
0x738D2B: add     esp, 4
0x738D2E: mov     eax, esi
0x738D30: pop     esi
0x738D31: retn    4
