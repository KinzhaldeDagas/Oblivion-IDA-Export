0x7E8DF0: push    esi
0x7E8DF1: mov     esi, ecx
0x7E8DF3: call    ??1TallGrassShader@@UAE@XZ; TallGrassShader::~TallGrassShader(void)
0x7E8DF8: test    byte ptr [esp+4+arg_0], 1
0x7E8DFD: jz      short loc_7E8E08
0x7E8DFF: push    esi
0x7E8E00: call    FormHeapFree
0x7E8E05: add     esp, 4
0x7E8E08: mov     eax, esi
0x7E8E0A: pop     esi
0x7E8E0B: retn    4
