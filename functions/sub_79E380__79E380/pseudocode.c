// Oblivion st_vector<SFrondTexture>::clear. Validates begin/end and erases the initialized range while retaining capacity; CFrondEngine::Parse calls it before token 13008 repopulates textures.
void __thiscall OB_stVector_SFrondTexture_Clear_010201A0(OB_stVector16_010201A0 *this)
{
  int v1; // edi
  OB_SFrondTexture_010201A0 *end; // ebx
  OB_SFrondTexture_010201A0 *begin; // edi
  OB_stVectorIterator_SFrondTexture_010201A0 result; // [esp+Ch] [ebp-8h] BYREF

  end = (OB_SFrondTexture_010201A0 *)this->end; /*0x79e387*/
  if ( this->begin > end ) /*0x79e38e*/
    _invalid_parameter_noinfo((int)end, v1, (int)this); /*0x79e390*/
  begin = (OB_SFrondTexture_010201A0 *)this->begin; /*0x79e395*/
  if ( begin > this->end ) /*0x79e39b*/
    _invalid_parameter_noinfo((int)end, (int)begin, (int)this); /*0x79e39d*/
  OB_stVector_SFrondTexture_EraseRange_010201A0(this, &result, this, begin, this, end); /*0x79e3ad*/
}
