0x7B1DE0: push    esi
0x7B1DE1: mov     esi, ecx
0x7B1DE3: call    ??1MenuBGShader@@UAE@XZ; MenuBGShader::~MenuBGShader(void)
0x7B1DE8: test    byte ptr [esp+4+arg_0], 1
0x7B1DED: jz      short loc_7B1DF8
0x7B1DEF: push    esi
0x7B1DF0: call    FormHeapFree
0x7B1DF5: add     esp, 4
0x7B1DF8: mov     eax, esi
0x7B1DFA: pop     esi
0x7B1DFB: retn    4
