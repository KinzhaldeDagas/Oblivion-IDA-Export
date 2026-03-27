0x8025D0: push    esi
0x8025D1: mov     esi, ecx
0x8025D3: call    ??1BSShader@@UAE@XZ; BSShader::~BSShader(void)
0x8025D8: test    byte ptr [esp+4+arg_0], 1
0x8025DD: jz      short loc_8025E8
0x8025DF: push    esi
0x8025E0: call    FormHeapFree
0x8025E5: add     esp, 4
0x8025E8: mov     eax, esi
0x8025EA: pop     esi
0x8025EB: retn    4
