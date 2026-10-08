// OBLIVION AUTHORITY (2026-08-30): push_back for vector<unsigned int>; appends directly when capacity remains or uses the checked insert-one path. Its observed caller is CIndexedGeometry vertex-color storage.
void __thiscall OB_stVectorUInt32_PushBack_010201A0(OB_stVectorUInt32_010201A0 *this, const unsigned int *value)
{
  int v2; // ebx
  unsigned int *begin; // edx
  unsigned int v5; // ecx
  unsigned int *end; // eax
  unsigned int *v7; // edi
  OB_stVector4Iterator_010201A0 result; // [esp+4h] [ebp-8h] BYREF

  begin = this->begin; /*0x795c36*/
  if ( begin ) /*0x795c3b*/
    v5 = this->end - begin; /*0x795c46*/
  else
    v5 = 0; /*0x795c3d*/
  if ( begin && v5 < this->capacity - begin ) /*0x795c57*/
  {
    end = this->end; /*0x795c59*/
    *end = *value; /*0x795c62*/
    this->end = end + 1; /*0x795c67*/
  }
  else
  {
    v7 = this->end; /*0x795c72*/
    if ( begin > v7 ) /*0x795c77*/
      _invalid_parameter_noinfo(v2, (int)v7, (int)this); /*0x795c79*/
    OB_stVectorUInt32_InsertOne_010201A0( /*0x795c8c*/
      this,
      &result,
      (OB_stVector4Iterator_010201A0)__PAIR64__((unsigned int)v7, (unsigned int)this),
      value);
  }
}
