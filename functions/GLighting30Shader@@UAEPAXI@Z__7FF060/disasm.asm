0x7FF060: push    esi
0x7FF061: mov     esi, ecx
0x7FF063: call    ??1Lighting30Shader@@UAE@XZ; Lighting30Shader::~Lighting30Shader(void)
0x7FF068: test    byte ptr [esp+4+arg_0], 1
0x7FF06D: jz      short loc_7FF078
0x7FF06F: push    esi
0x7FF070: call    FormHeapFree
0x7FF075: add     esp, 4
0x7FF078: mov     eax, esi
0x7FF07A: pop     esi
0x7FF07B: retn    4
