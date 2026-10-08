// OBLIVION AUTHORITY (2026-08-30): Deep copy assignment for vector<unsigned int>, covering self, empty, capacity-reuse, and reallocation paths. CIndexedGeometry::CombineStrips uses it for per-LOD triangle totals.
OB_stVectorUInt32_010201A0 *__thiscall OB_stVectorUInt32_CopyAssign_010201A0(
        OB_stVectorUInt32_010201A0 *this,
        const OB_stVectorUInt32_010201A0 *source)
{
  unsigned int *begin; // ebx
  unsigned int v4; // edx
  unsigned int *v6; // eax
  unsigned int v7; // ecx
  unsigned int *v8; // eax
  unsigned int *v9; // ecx
  unsigned int v10; // ecx
  int v11; // ecx
  const unsigned int *v12; // ebx
  unsigned int *v13; // ecx
  unsigned int v14; // eax

  if ( this == source ) /*0x78558a*/
    return this; /*0x78558a*/
  begin = source->begin; /*0x785591*/
  if ( !begin || (v4 = source->end - begin) == 0 ) /*0x7855a3*/
  {
    OB_stVector4_Clear_010201A0((OB_stVector4_010201A0 *)this); /*0x7855a5*/
    return this; /*0x7855b0*/
  }
  v6 = this->begin; /*0x7855b3*/
  if ( v6 ) /*0x7855b8*/
    v7 = this->end - v6; /*0x7855c3*/
  else
    v7 = 0; /*0x7855ba*/
  if ( v4 <= v7 ) /*0x7855c8*/
  {
    OB_stVector4_CopyRange_010201A0(begin, source->end, this->begin); /*0x7855cd*/
    v8 = source->begin; /*0x7855d2*/
    if ( v8 ) /*0x7855da*/
      v9 = &this->begin[source->end - v8]; /*0x7855fc*/
    else
      v9 = this->begin; /*0x7855e2*/
    this->end = v9; /*0x7855e7*/
    return this; /*0x7855ed*/
  }
  if ( v6 ) /*0x78560c*/
    v10 = this->capacity - v6; /*0x785617*/
  else
    v10 = 0; /*0x78560e*/
  if ( v4 > v10 ) /*0x78561c*/
  {
    if ( v6 ) /*0x78565c*/
      FormHeapFree((unsigned int)this->begin); /*0x78565f*/
    v13 = source->begin; /*0x785667*/
    if ( v13 ) /*0x78566c*/
      v14 = source->end - v13; /*0x785677*/
    else
      v14 = 0; /*0x78566e*/
    if ( OB_stVectorUInt32_Buy_010201A0(this, v14) ) /*0x78567d*/
      this->end = OB_stVector4_UninitializedCopyRange_010201A0(source->begin, source->end, this->begin); /*0x785699*/
    return this; /*0x78569f*/
  }
  if ( v6 ) /*0x785620*/
    v11 = this->end - v6; /*0x78562b*/
  else
    v11 = 0; /*0x785622*/
  v12 = &begin[v11]; /*0x785631*/
  OB_stVector4_CopyRange_010201A0(source->begin, v12, this->begin); /*0x785636*/
  this->end = OB_stVector4_UninitializedCopyRange_010201A0(v12, source->end, this->end); /*0x785650*/
  return this; /*0x7855ac*/
}
