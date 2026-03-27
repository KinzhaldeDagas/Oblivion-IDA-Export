0x780D40: push    esi
0x780D41: mov     esi, ecx
0x780D43: call    ??1NiD3DPixelShader@@UAE@XZ; NiD3DPixelShader::~NiD3DPixelShader(void)
0x780D48: test    byte ptr [esp+4+arg_0], 1
0x780D4D: jz      short loc_780D58
0x780D4F: push    esi
0x780D50: call    FormHeapFree
0x780D55: add     esp, 4
0x780D58: mov     eax, esi
0x780D5A: pop     esi
0x780D5B: retn    4
