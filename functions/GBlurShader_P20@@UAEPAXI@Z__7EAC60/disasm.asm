0x7EAC60: push    esi
0x7EAC61: mov     esi, ecx
0x7EAC63: call    ??1BlurShader_P20@@UAE@XZ; BlurShader_P20::~BlurShader_P20(void)
0x7EAC68: test    byte ptr [esp+4+arg_0], 1
0x7EAC6D: jz      short loc_7EAC78
0x7EAC6F: push    esi
0x7EAC70: call    FormHeapFree
0x7EAC75: add     esp, 4
0x7EAC78: mov     eax, esi
0x7EAC7A: pop     esi
0x7EAC7B: retn    4
