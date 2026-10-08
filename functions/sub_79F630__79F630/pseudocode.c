// Oblivion st_vector<SFrondGuide>::clear. Validates begin/end and erases the entire initialized range while retaining capacity.
void __thiscall OB_stVector_SFrondGuide_Clear_010201A0(OB_stVector16_010201A0 *this)
{
  int v1; // edi
  OB_SFrondGuide_010201A0 *end; // ebx
  OB_SFrondGuide_010201A0 *begin; // edi
  OB_stVectorIterator_SFrondGuide_010201A0 result; // [esp+Ch] [ebp-8h] BYREF

  end = (OB_SFrondGuide_010201A0 *)this->end; /*0x79f637*/
  if ( this->begin > end ) /*0x79f63e*/
    _invalid_parameter_noinfo((int)end, v1, (int)this); /*0x79f640*/
  begin = (OB_SFrondGuide_010201A0 *)this->begin; /*0x79f645*/
  if ( begin > this->end ) /*0x79f64b*/
    _invalid_parameter_noinfo((int)end, (int)begin, (int)this); /*0x79f64d*/
  OB_stVector_SFrondGuide_EraseRange_010201A0(this, &result, this, begin, this, end); /*0x79f65d*/
}
