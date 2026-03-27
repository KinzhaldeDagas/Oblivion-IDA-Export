0x7E44C0: push    esi
0x7E44C1: mov     esi, ecx
0x7E44C3: call    ??1ParticleShader@@UAE@XZ; ParticleShader::~ParticleShader(void)
0x7E44C8: test    byte ptr [esp+4+arg_0], 1
0x7E44CD: jz      short loc_7E44D8
0x7E44CF: push    esi
0x7E44D0: call    FormHeapFree
0x7E44D5: add     esp, 4
0x7E44D8: mov     eax, esi
0x7E44DA: pop     esi
0x7E44DB: retn    4
