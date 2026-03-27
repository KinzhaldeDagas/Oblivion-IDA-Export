0x780E30: push    esi
0x780E31: mov     esi, ecx
0x780E33: call    ??1NiD3DHLSLPixelShader@@UAE@XZ; NiD3DHLSLPixelShader::~NiD3DHLSLPixelShader(void)
0x780E38: test    byte ptr [esp+4+arg_0], 1
0x780E3D: jz      short loc_780E48
0x780E3F: push    esi
0x780E40: call    FormHeapFree
0x780E45: add     esp, 4
0x780E48: mov     eax, esi
0x780E4A: pop     esi
0x780E4B: retn    4
