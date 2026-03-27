0x8048C0: push    esi
0x8048C1: mov     esi, ecx
0x8048C3: call    ??1CopyShader@@UAE@XZ; CopyShader::~CopyShader(void)
0x8048C8: test    byte ptr [esp+4+arg_0], 1
0x8048CD: jz      short loc_8048D8
0x8048CF: push    esi
0x8048D0: call    FormHeapFree
0x8048D5: add     esp, 4
0x8048D8: mov     eax, esi
0x8048DA: pop     esi
0x8048DB: retn    4
