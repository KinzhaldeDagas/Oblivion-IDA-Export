0x7C3200: push    esi
0x7C3201: mov     esi, ecx
0x7C3203: call    ??1TallGrassShaderProperty@@UAE@XZ; TallGrassShaderProperty::~TallGrassShaderProperty(void)
0x7C3208: test    byte ptr [esp+4+arg_0], 1
0x7C320D: jz      short loc_7C3218
0x7C320F: push    esi
0x7C3210: call    FormHeapFree
0x7C3215: add     esp, 4
0x7C3218: mov     eax, esi
0x7C321A: pop     esi
0x7C321B: retn    4
