0x7B0D00: push    esi
0x7B0D01: mov     esi, ecx
0x7B0D03: call    ??1BlurShader@@UAE@XZ; BlurShader::~BlurShader(void)
0x7B0D08: test    byte ptr [esp+4+arg_0], 1
0x7B0D0D: jz      short loc_7B0D18
0x7B0D0F: push    esi
0x7B0D10: call    FormHeapFree
0x7B0D15: add     esp, 4
0x7B0D18: mov     eax, esi
0x7B0D1A: pop     esi
0x7B0D1B: retn    4
