0x7BD3B0: push    esi
0x7BD3B1: mov     esi, ecx
0x7BD3B3: call    ??1SkyShader@@UAE@XZ; SkyShader::~SkyShader(void)
0x7BD3B8: test    byte ptr [esp+4+arg_0], 1
0x7BD3BD: jz      short loc_7BD3C8
0x7BD3BF: push    esi
0x7BD3C0: call    FormHeapFree
0x7BD3C5: add     esp, 4
0x7BD3C8: mov     eax, esi
0x7BD3CA: pop     esi
0x7BD3CB: retn    4
