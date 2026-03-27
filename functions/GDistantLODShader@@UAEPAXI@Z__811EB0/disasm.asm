0x811EB0: push    esi
0x811EB1: mov     esi, ecx
0x811EB3: call    ??1DistantLODShader@@UAE@XZ; DistantLODShader::~DistantLODShader(void)
0x811EB8: test    byte ptr [esp+4+arg_0], 1
0x811EBD: jz      short loc_811EC8
0x811EBF: push    esi
0x811EC0: call    FormHeapFree
0x811EC5: add     esp, 4
0x811EC8: mov     eax, esi
0x811ECA: pop     esi
0x811ECB: retn    4
