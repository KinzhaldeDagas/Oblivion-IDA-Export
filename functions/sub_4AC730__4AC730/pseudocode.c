// Verified (Oblivion): tests (TESEffectShader::Data.cFlags at TESEffectShader+0x18) & mask. Direct callers establish 0x08 suppresses the particle-property path at MagicShaderHitEffect_InitializeVisual (callsite 0x6A1926), and 0x01 suppresses creation/setup of TextureEffectData (callsite 0x6A1B7C). Fallout's matching IsFlagSet helper also reads Data+0x18, but its larger EffectShaderData layout differs; Fallout similarity is corroborative only.
bool __thiscall TESEffectShader_HasFlagBits(TESEffectShader *this, unsigned __int8 mask)
{
  return (mask & this->Data) != 0; /*0x4ac73a*/
}
