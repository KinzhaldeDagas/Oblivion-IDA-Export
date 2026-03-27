0x80D0F0: push    esi
0x80D0F1: mov     esi, ecx
0x80D0F3: call    ??1HairShader@@UAE@XZ; HairShader::~HairShader(void)
0x80D0F8: test    byte ptr [esp+4+arg_0], 1
0x80D0FD: jz      short loc_80D108
0x80D0FF: push    esi
0x80D100: call    FormHeapFree
0x80D105: add     esp, 4
0x80D108: mov     eax, esi
0x80D10A: pop     esi
0x80D10B: retn    4
