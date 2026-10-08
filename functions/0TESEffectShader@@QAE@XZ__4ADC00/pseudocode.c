// Verified (Oblivion): constructs the 0x110-byte TESEffectShader. Its 0xE0-byte Data member begins at +0x18 and is followed by TESTexture TextureShaderTexture (+0xF8) and ParticleShaderTexture (+0x104). Fallout's layout is 0x170 bytes with a larger EffectShaderData block and a third texture; this is a confirmed layout divergence.
TESEffectShader *__thiscall TESEffectShader::TESEffectShader(TESEffectShader *this)
{
  TESForm_constr(&this->super); /*0x4adc29*/
  this->super.vtbl = (TESFormVtbl *)&TESEffectShader::`vftable'; /*0x4adc3b*/
  TESEffectShaderData_InitializeDefaults(&this->Data);// Verified (Oblivion): constructor initializes TESEffectShaderData at +0x18, then constructs TextureShaderTexture at +0xF8 and ParticleShaderTexture at +0x104. The data layout ends at +0xF8. /*0x4adc41*/
  TESTexture_constr(&this->TextureShaderTexture); /*0x4adc4c*/
  TESTexture_constr(&this->ParticleShaderTexture); /*0x4adc5c*/
  this->super.member.type = kFormType_EffectShader; /*0x4adc68*/
  TESEffectShaderData_InitializeDefaults(&this->Data); /*0x4adc6c*/
  j_TESForm_InitializeComponents(&this->super); /*0x4adc73*/
  return this; /*0x4adc7a*/
}
