// Oblivion st_vector<SFrondVertex>::clear. Validates begin/end and erases the entire initialized range without releasing capacity.
void __thiscall OB_stVector_SFrondVertex_Clear_010201A0(OB_stVector16_010201A0 *this)
{
  int v1; // edi
  OB_SFrondVertex_010201A0 *end; // ebx
  OB_SFrondVertex_010201A0 *begin; // edi
  OB_stVectorIterator_SFrondVertex_010201A0 result; // [esp+Ch] [ebp-8h] BYREF

  end = (OB_SFrondVertex_010201A0 *)this->end; /*0x79abd7*/
  if ( this->begin > end ) /*0x79abde*/
    _invalid_parameter_noinfo((int)end, v1, (int)this); /*0x79abe0*/
  begin = (OB_SFrondVertex_010201A0 *)this->begin; /*0x79abe5*/
  if ( begin > this->end ) /*0x79abeb*/
    _invalid_parameter_noinfo((int)end, (int)begin, (int)this); /*0x79abed*/
  OB_stVector_SFrondVertex_EraseRange_010201A0(this, &result, this, begin, this, end); /*0x79abfd*/
}
