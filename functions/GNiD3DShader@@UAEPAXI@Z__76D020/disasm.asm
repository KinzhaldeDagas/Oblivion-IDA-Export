0x76D020: push    esi
0x76D021: mov     esi, ecx
0x76D023: call    ??1NiD3DShader@@UAE@XZ; NiD3DShader::~NiD3DShader(void)
0x76D028: test    byte ptr [esp+4+arg_0], 1
0x76D02D: jz      short loc_76D038
0x76D02F: push    esi
0x76D030: call    FormHeapFree
0x76D035: add     esp, 4
0x76D038: mov     eax, esi
0x76D03A: pop     esi
0x76D03B: retn    4
