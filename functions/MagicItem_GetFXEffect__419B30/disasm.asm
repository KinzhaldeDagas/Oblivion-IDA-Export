0x419B30: push    ecx; Verified (Oblivion): MagicItem_GetFXEffect returns the effect's EffectSetting pointer; MagicShaderHitEffect constructors/PostLink dereference its +0x78 EffectSetting::effectShader field.
0x419B31: push    esi
0x419B32: mov     esi, ecx
