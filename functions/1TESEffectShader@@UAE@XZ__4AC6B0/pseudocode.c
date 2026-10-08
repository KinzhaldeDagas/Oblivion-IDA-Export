// Verified (Oblivion): destructor destroys embedded TESTexture members at +0x104 and +0xF8 before the TESForm base destructor.
void __thiscall TESEffectShader::~TESEffectShader(TESEffectShader *this)
{
  this->super.vtbl = (TESFormVtbl *)&TESEffectShader::`vftable'; /*0x4ac6d8*/
  j_TESForm_ClearComponentReferences(&this->super); /*0x4ac6e6*/
  TESTexture_destr(&this->ParticleShaderTexture.vtbl); /*0x4ac6f6*/
  TESTexture_destr(&this->TextureShaderTexture.vtbl); /*0x4ac706*/
  TESForm_destr(&this->super); /*0x4ac715*/
}
