0x7EC870: push    esi
0x7EC871: mov     esi, ecx
0x7EC873: call    ??1GethitShader@@UAE@XZ; GethitShader::~GethitShader(void)
0x7EC878: test    byte ptr [esp+4+arg_0], 1
0x7EC87D: jz      short loc_7EC888
0x7EC87F: push    esi
0x7EC880: call    FormHeapFree
0x7EC885: add     esp, 4
0x7EC888: mov     eax, esi
0x7EC88A: pop     esi
0x7EC88B: retn    4
