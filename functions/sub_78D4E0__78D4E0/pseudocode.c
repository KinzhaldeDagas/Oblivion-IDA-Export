// Oblivion byte-vector push_back: appends in available capacity or delegates to checked insert-one at end. Called by CIndexedGeometry::AddVertexWind for matrix indices.
void __thiscall OB_stVectorByte_PushBack_010201A0(OB_stVectorByte_010201A0 *this, const unsigned __int8 *value)
{
  int v2; // ebx
  unsigned __int8 *begin; // eax
  unsigned __int8 *v5; // edx
  unsigned __int8 *end; // eax
  unsigned __int8 *v7; // edi
  OB_stVectorByteIterator_010201A0 result; // [esp+4h] [ebp-8h] BYREF

  begin = this->begin; /*0x78d4e6*/
  if ( begin ) /*0x78d4eb*/
    v5 = (unsigned __int8 *)(this->end - begin); /*0x78d4f4*/
  else
    v5 = 0; /*0x78d4ed*/
  if ( begin && v5 < (unsigned __int8 *)(this->capacityEnd - begin) ) /*0x78d501*/
  {
    end = this->end; /*0x78d503*/
    *end = *value; /*0x78d50c*/
    this->end = end + 1; /*0x78d511*/
  }
  else
  {
    v7 = this->end; /*0x78d51c*/
    if ( begin > v7 ) /*0x78d521*/
      _invalid_parameter_noinfo(v2, (int)v7, (int)this); /*0x78d523*/
    OB_stVectorByte_InsertOne_010201A0( /*0x78d536*/
      this,
      &result,
      (OB_stVectorByteIterator_010201A0)__PAIR64__((unsigned int)v7, (unsigned int)this),
      value);
  }
}
