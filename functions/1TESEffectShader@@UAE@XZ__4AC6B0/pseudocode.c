void __thiscall TESEffectShader::~TESEffectShader(TESForm *this)
{
  this->vtbl = (TESFormVtbl *)&TESEffectShader::`vftable';
  j_TESForm_ClearComponentReferences(this);
  TESTexture_destr((_DWORD *)this + 0x41);
  TESTexture_destr((_DWORD *)this + 0x3E);
  TESForm_destr(this);
}
