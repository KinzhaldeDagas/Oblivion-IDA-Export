// OBLIVION AUTHORITY (2026-08-30): Deep copy assignment for vector<vector<unsigned short>>. Reuses outer capacity when possible, otherwise destroys/frees and allocates exact 0x10-byte owner storage.
OB_stVector_stVectorUShort_010201A0 *__thiscall OB_stVector_stVectorUShort_CopyAssign_010201A0(
        OB_stVector_stVectorUShort_010201A0 *this,
        const OB_stVector_stVectorUShort_010201A0 *source)
{
  OB_stVectorUShort_010201A0 *begin; // edx
  unsigned int v4; // ebx
  OB_stVector4_010201A0 *v6; // ecx
  unsigned int v7; // eax
  OB_stVector4_010201A0 *v8; // eax
  OB_stVectorUShort_010201A0 *v9; // eax
  OB_stVectorUShort_010201A0 *v10; // edi
  unsigned int v11; // eax
  int v12; // eax
  const OB_stVectorUShort_010201A0 *v13; // ebx
  OB_stVectorUShort_010201A0 *v14; // ecx
  unsigned int v15; // eax

  if ( this == source ) /*0x796bca*/
    return this; /*0x796bca*/
  begin = source->begin; /*0x796bd0*/
  if ( !begin || (v4 = source->end - begin) == 0 ) /*0x796be3*/
  {
    OB_stVector_stVectorUShort_Clear_010201A0(this); /*0x796be5*/
    return this; /*0x796bf0*/
  }
  v6 = (OB_stVector4_010201A0 *)this->begin; /*0x796bf3*/
  if ( v6 ) /*0x796bf8*/
    v7 = ((char *)this->end - (char *)v6) >> 4; /*0x796c03*/
  else
    v7 = 0; /*0x796bfa*/
  if ( v4 <= v7 ) /*0x796c08*/
  {
    v8 = (OB_stVector4_010201A0 *)OB_stVector_stVectorUShort_CopyAssignRange_010201A0(begin, source->end, this->begin); /*0x796c0d*/
    OB_stVector4_DestroyRange_010201A0(v8, (OB_stVector4_010201A0 *)this->end); /*0x796c1d*/
    v9 = source->begin; /*0x796c22*/
    if ( v9 ) /*0x796c2a*/
      v10 = &this->begin[source->end - v9]; /*0x796c4b*/
    else
      v10 = this->begin; /*0x796c31*/
    this->end = v10; /*0x796c36*/
    return this; /*0x796c3d*/
  }
  if ( v6 ) /*0x796c5c*/
    v11 = ((char *)this->capacityEnd - (char *)v6) >> 4; /*0x796c67*/
  else
    v11 = 0; /*0x796c5e*/
  if ( v4 > v11 ) /*0x796c6c*/
  {
    if ( v6 ) /*0x796cae*/
    {
      OB_stVector4_DestroyRangeThunk_010201A0(v6, (OB_stVector4_010201A0 *)this->end); /*0x796cb7*/
      FormHeapFree((unsigned int)this->begin); /*0x796cc0*/
    }
    v14 = source->begin; /*0x796cc8*/
    if ( v14 ) /*0x796ccd*/
      v15 = source->end - v14; /*0x796cd8*/
    else
      v15 = 0; /*0x796ccf*/
    if ( OB_stVector16_Buy_010201A0((OB_stVector16_010201A0 *)this, v15) ) /*0x796cde*/
      this->end = OB_stVector_stVectorUShort_UninitializedCopyRangeThunk_010201A0( /*0x796cfa*/
                    source->begin,
                    source->end,
                    this->begin);
    return this; /*0x796d00*/
  }
  if ( v6 ) /*0x796c70*/
    v12 = ((char *)this->end - (char *)v6) >> 4; /*0x796c7b*/
  else
    v12 = 0; /*0x796c72*/
  v13 = &begin[v12]; /*0x796c84*/
  OB_stVector_stVectorUShort_CopyAssignRange_010201A0(begin, v13, this->begin); /*0x796c88*/
  this->end = OB_stVector_stVectorUShort_UninitializedCopyRangeThunk_010201A0(v13, source->end, this->end); /*0x796ca2*/
  return this; /*0x796bec*/
}
