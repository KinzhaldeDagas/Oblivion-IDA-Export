// Oblivion CIndexedGeometry cleanup used after branch extraction: clears the float vector at +0xF8 and byte vector at +0x108, observed as primary wind weights and primary wind matrix indices.
void __thiscall OB_CIndexedGeometry_ClearPrimaryWindData_010201A0(OB_CIndexedGeometry_010201A0 *this)
{
  float *end; // ebx
  OB_stVector4_010201A0 *p_primaryWindWeights; // esi
  unsigned int *begin; // ebp
  unsigned __int8 *v5; // esi
  unsigned __int8 *v6; // ebx
  unsigned __int8 *v7; // eax
  unsigned __int8 *v8; // ebp
  rsize_t v9; // [esp+0h] [ebp-18h]
  OB_stVector4Iterator_010201A0 result; // [esp+10h] [ebp-8h] BYREF

  end = this->primaryWindWeights.end; /*0x788f09*/
  p_primaryWindWeights = (OB_stVector4_010201A0 *)&this->primaryWindWeights; /*0x788f15*/
  if ( this->primaryWindWeights.begin > end ) /*0x788f1b*/
    _invalid_parameter_noinfo((int)end, (int)this, (int)p_primaryWindWeights); /*0x788f1d*/
  begin = p_primaryWindWeights->begin; /*0x788f22*/
  if ( begin > p_primaryWindWeights->end ) /*0x788f28*/
    _invalid_parameter_noinfo((int)end, (int)this, (int)p_primaryWindWeights); /*0x788f2a*/
  OB_stVector4_EraseRange_010201A0( /*0x788f3a*/
    p_primaryWindWeights,
    &result,
    (OB_stVector4Iterator_010201A0)__PAIR64__((unsigned int)begin, (unsigned int)p_primaryWindWeights),
    (OB_stVector4Iterator_010201A0)__PAIR64__((unsigned int)end, (unsigned int)p_primaryWindWeights));
  v5 = this->primaryWindMatrixIndices.end; /*0x788f3f*/
  if ( this->primaryWindMatrixIndices.begin > v5 ) /*0x788f4b*/
    _invalid_parameter_noinfo((int)end, (int)this, (int)v5); /*0x788f4d*/
  v6 = this->primaryWindMatrixIndices.begin; /*0x788f52*/
  if ( v6 > this->primaryWindMatrixIndices.end ) /*0x788f5e*/
    _invalid_parameter_noinfo((int)v6, (int)this, (int)v5); /*0x788f60*/
  if ( v6 != v5 ) /*0x788f67*/
  {
    v7 = (unsigned __int8 *)(this->primaryWindMatrixIndices.end - v5); /*0x788f6f*/
    v8 = &v6[(_DWORD)v7]; /*0x788f73*/
    if ( (int)v7 > 0 ) /*0x788f76*/
      memmove_s( /*0x788f7c*/
        v6,
        __PAIR64__((unsigned int)v5, (unsigned int)v7),
        (const void *)(this->primaryWindMatrixIndices.end - v5),
        v9);
    this->primaryWindMatrixIndices.end = v8; /*0x788f84*/
  }
}
