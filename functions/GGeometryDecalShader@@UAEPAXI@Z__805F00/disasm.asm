0x805F00: push    esi
0x805F01: mov     esi, ecx
0x805F03: call    ??1GeometryDecalShader@@UAE@XZ; GeometryDecalShader::~GeometryDecalShader(void)
0x805F08: test    byte ptr [esp+4+arg_0], 1
0x805F0D: jz      short loc_805F18
0x805F0F: push    esi
0x805F10: call    FormHeapFree
0x805F15: add     esp, 4
0x805F18: mov     eax, esi
0x805F1A: pop     esi
0x805F1B: retn    4
