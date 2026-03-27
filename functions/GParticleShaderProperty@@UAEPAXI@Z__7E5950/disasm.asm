0x7E5950: push    esi
0x7E5951: mov     esi, ecx
0x7E5953: call    ??1ParticleShaderProperty@@UAE@XZ; ParticleShaderProperty::~ParticleShaderProperty(void)
0x7E5958: test    byte ptr [esp+4+arg_0], 1
0x7E595D: jz      short loc_7E5968
0x7E595F: push    esi
0x7E5960: call    FormHeapFree
0x7E5965: add     esp, 4
0x7E5968: mov     eax, esi
0x7E596A: pop     esi
0x7E596B: retn    4
