0x4AC730: mov     al, [esp+mask]; Verified (Oblivion): tests (TESEffectShader::Data.cFlags at TESEffectShader+0x18) & mask. Direct callers establish 0x08 suppresses the particle-property path at MagicShaderHitEffect_InitializeVisual (callsite 0x6A1926), and 0x01 suppresses creation/setup of TextureEffectData (callsite 0x6A1B7C). Fallout's matching IsFlagSet helper also reads Data+0x18, but its larger EffectShaderData layout differs; Fallout similarity is corroborative only.
0x4AC734: test    [ecx+18h], al
0x4AC737: setnz   al
0x4AC73A: retn    4
