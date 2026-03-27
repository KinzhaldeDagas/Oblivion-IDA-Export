0x80AE70: push    esi
0x80AE71: mov     esi, ecx
0x80AE73: call    ??1SkinShader@@UAE@XZ; SkinShader::~SkinShader(void)
0x80AE78: test    byte ptr [esp+4+arg_0], 1
0x80AE7D: jz      short loc_80AE88
0x80AE7F: push    esi
0x80AE80: call    FormHeapFree
0x80AE85: add     esp, 4
0x80AE88: mov     eax, esi
0x80AE8A: pop     esi
0x80AE8B: retn    4
