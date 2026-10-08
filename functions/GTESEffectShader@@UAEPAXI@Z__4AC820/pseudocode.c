TESForm *__thiscall TESEffectShader::`scalar deleting destructor'(TESForm *this, char a2)
{
  TESEffectShader::~TESEffectShader((TESEffectShader *)this); /*0x4ac823*/
  if ( (a2 & 1) != 0 ) /*0x4ac82d*/
    FormHeapFree((unsigned int)this); /*0x4ac830*/
  return this; /*0x4ac83a*/
}
