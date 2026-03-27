0x7F58B0: push    esi
0x7F58B1: mov     esi, ecx
0x7F58B3: call    ??1NighteyeShader@@UAE@XZ; NighteyeShader::~NighteyeShader(void)
0x7F58B8: test    byte ptr [esp+4+arg_0], 1
0x7F58BD: jz      short loc_7F58C8
0x7F58BF: push    esi
0x7F58C0: call    FormHeapFree
0x7F58C5: add     esp, 4
0x7F58C8: mov     eax, esi
0x7F58CA: pop     esi
0x7F58CB: retn    4
