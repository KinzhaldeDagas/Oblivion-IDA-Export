TESEffectShader *__thiscall TESEffectShader::TESEffectShader(TESEffectShader *this)
{
  TESForm_constr((TESForm *)this);
  *(_DWORD *)this = &TESEffectShader::`vftable';
  sub_4AC9C0((float *)this + 6);
  TESTexture_constr((TESTexture *)((char *)this + 0xF8));
  TESTexture_constr((TESTexture *)((char *)this + 0x104));
  *((_BYTE *)this + 4) = 0x43;
  sub_4AC9C0((float *)this + 6);
  j_TESForm_InitializeComponents((TESForm *)this);
  return this;
}
