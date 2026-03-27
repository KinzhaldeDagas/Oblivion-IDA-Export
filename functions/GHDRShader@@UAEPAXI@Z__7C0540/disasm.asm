0x7C0540: push    esi
0x7C0541: mov     esi, ecx
0x7C0543: call    ??1HDRShader@@UAE@XZ; HDRShader::~HDRShader(void)
0x7C0548: test    byte ptr [esp+4+arg_0], 1
0x7C054D: jz      short loc_7C0558
0x7C054F: push    esi
0x7C0550: call    FormHeapFree
0x7C0555: add     esp, 4
0x7C0558: mov     eax, esi
0x7C055A: pop     esi
0x7C055B: retn    4
