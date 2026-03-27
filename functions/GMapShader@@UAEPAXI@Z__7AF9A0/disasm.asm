0x7AF9A0: push    esi
0x7AF9A1: mov     esi, ecx
0x7AF9A3: call    ??1MapShader@@UAE@XZ; MapShader::~MapShader(void)
0x7AF9A8: test    byte ptr [esp+4+arg_0], 1
0x7AF9AD: jz      short loc_7AF9B8
0x7AF9AF: push    esi
0x7AF9B0: call    FormHeapFree
0x7AF9B5: add     esp, 4
0x7AF9B8: mov     eax, esi
0x7AF9BA: pop     esi
0x7AF9BB: retn    4
