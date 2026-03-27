0x8091B0: push    esi
0x8091B1: mov     esi, ecx
0x8091B3: call    ??1ParallaxShader@@UAE@XZ; ParallaxShader::~ParallaxShader(void)
0x8091B8: test    byte ptr [esp+4+arg_0], 1
0x8091BD: jz      short loc_8091C8
0x8091BF: push    esi
0x8091C0: call    FormHeapFree
0x8091C5: add     esp, 4
0x8091C8: mov     eax, esi
0x8091CA: pop     esi
0x8091CB: retn    4
