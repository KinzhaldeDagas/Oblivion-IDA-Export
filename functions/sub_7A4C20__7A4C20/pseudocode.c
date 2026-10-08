// Clears the leaf-texture vector through erase(begin,end), retaining allocated capacity.
void __thiscall OB_stVector_SIdvLeafTexture_Clear_010201A0(OB_stVector_SIdvLeafTexture_010201A0 *this)
{
  int v1; // edi
  OB_SIdvLeafTexture_010201A0 *end; // ebx
  OB_SIdvLeafTexture_010201A0 *begin; // edi
  OB_stVectorIterator_SIdvLeafTexture_010201A0 result; // [esp+Ch] [ebp-8h] BYREF

  end = this->end; /*0x7a4c27*/
  if ( this->begin > end ) /*0x7a4c2e*/
    _invalid_parameter_noinfo((int)end, v1, (int)this); /*0x7a4c30*/
  begin = this->begin; /*0x7a4c35*/
  if ( begin > this->end ) /*0x7a4c3b*/
    _invalid_parameter_noinfo((int)end, (int)begin, (int)this); /*0x7a4c3d*/
  OB_stVector_SIdvLeafTexture_EraseRange_010201A0(this, &result, this, begin, this, end); /*0x7a4c4d*/
}
