0x780F50: push    esi
0x780F51: mov     esi, ecx
0x780F53: call    ??1NiD3DHLSLVertexShader@@UAE@XZ; NiD3DHLSLVertexShader::~NiD3DHLSLVertexShader(void)
0x780F58: test    byte ptr [esp+4+arg_0], 1
0x780F5D: jz      short loc_780F68
0x780F5F: push    esi
0x780F60: call    FormHeapFree
0x780F65: add     esp, 4
0x780F68: mov     eax, esi
0x780F6A: pop     esi
0x780F6B: retn    4
