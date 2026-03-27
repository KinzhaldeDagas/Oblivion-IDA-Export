0x7E1100: push    esi
0x7E1101: mov     esi, ecx
0x7E1103: call    ??1WaterShaderHeightMap@@UAE@XZ; WaterShaderHeightMap::~WaterShaderHeightMap(void)
0x7E1108: test    byte ptr [esp+4+arg_0], 1
0x7E110D: jz      short loc_7E1118
0x7E110F: push    esi
0x7E1110: call    FormHeapFree
0x7E1115: add     esp, 4
0x7E1118: mov     eax, esi
0x7E111A: pop     esi
0x7E111B: retn    4
