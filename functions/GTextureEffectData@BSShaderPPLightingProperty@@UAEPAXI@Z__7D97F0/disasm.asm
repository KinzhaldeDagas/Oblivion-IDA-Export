0x7D97F0: push    esi
0x7D97F1: mov     esi, ecx
0x7D97F3: call    ??1TextureEffectData@BSShaderPPLightingProperty@@UAE@XZ; BSShaderPPLightingProperty::TextureEffectData::~TextureEffectData(void)
0x7D97F8: test    byte ptr [esp+4+arg_0], 1
0x7D97FD: jz      short loc_7D9808
0x7D97FF: push    esi
0x7D9800: call    FormHeapFree
0x7D9805: add     esp, 4
0x7D9808: mov     eax, esi
0x7D980A: pop     esi
0x7D980B: retn    4
