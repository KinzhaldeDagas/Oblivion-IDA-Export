0x6A16D0: push    esi
0x6A16D1: mov     esi, ecx
0x6A16D3: call    ??1MagicShaderHitEffect@@UAE@XZ; MagicShaderHitEffect::~MagicShaderHitEffect(void)
0x6A16D8: test    byte ptr [esp+4+arg_0], 1
0x6A16DD: jz      short loc_6A16E8
0x6A16DF: push    esi
0x6A16E0: call    FormHeapFree
0x6A16E5: add     esp, 4
0x6A16E8: mov     eax, esi
0x6A16EA: pop     esi
0x6A16EB: retn    4
