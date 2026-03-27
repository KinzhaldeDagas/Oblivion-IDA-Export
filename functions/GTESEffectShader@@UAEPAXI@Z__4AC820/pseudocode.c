TESForm *__thiscall TESEffectShader::`scalar deleting destructor'(TESForm *this, char a2)
{
  TESEffectShader::~TESEffectShader(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
