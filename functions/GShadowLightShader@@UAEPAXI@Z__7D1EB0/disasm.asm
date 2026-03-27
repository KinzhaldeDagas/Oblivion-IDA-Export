0x7D1EB0: push    esi
0x7D1EB1: mov     esi, ecx
0x7D1EB3: call    ??1ShadowLightShader@@UAE@XZ; ShadowLightShader::~ShadowLightShader(void)
0x7D1EB8: test    byte ptr [esp+4+arg_0], 1
0x7D1EBD: jz      short loc_7D1EC8
0x7D1EBF: push    esi
0x7D1EC0: call    FormHeapFree
0x7D1EC5: add     esp, 4
0x7D1EC8: mov     eax, esi
0x7D1ECA: pop     esi
0x7D1ECB: retn    4
