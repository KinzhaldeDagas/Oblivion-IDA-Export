// OBLIVION AUTHORITY (2026-08-30): Deep copy assignment for vector<unsigned short>, with self/empty/reuse/reallocate paths and exact end repair.
OB_stVectorUShort_010201A0 *__thiscall OB_stVectorUShort_CopyAssign_010201A0(
        OB_stVectorUShort_010201A0 *this,
        const OB_stVectorUShort_010201A0 *source)
{
  unsigned __int16 *begin; // ebx
  unsigned int v4; // edx
  unsigned __int16 *v6; // eax
  unsigned int v7; // ecx
  unsigned __int16 *v8; // eax
  unsigned __int16 *v9; // ecx
  unsigned int v10; // ecx
  int v11; // ecx
  const unsigned __int16 *v12; // ebx
  unsigned __int16 *v13; // ecx
  unsigned int v14; // eax

  if ( this == source ) /*0x79551a*/
    return this; /*0x79551a*/
  begin = source->begin; /*0x795521*/
  if ( !begin || (v4 = source->end - begin) == 0 ) /*0x795532*/
  {
    OB_stVectorUShort_Clear_010201A0(this); /*0x795534*/
    return this; /*0x79553f*/
  }
  v6 = this->begin; /*0x795542*/
  if ( v6 ) /*0x795547*/
    v7 = this->end - v6; /*0x795552*/
  else
    v7 = 0; /*0x795549*/
  if ( v4 <= v7 ) /*0x795556*/
  {
    OB_stVectorUShort_CopyRange_010201A0(begin, source->end, this->begin); /*0x79555b*/
    v8 = source->begin; /*0x795560*/
    if ( v8 ) /*0x795568*/
      v9 = &this->begin[source->end - v8]; /*0x795589*/
    else
      v9 = this->begin; /*0x795570*/
    this->end = v9; /*0x795575*/
    return this; /*0x79557b*/
  }
  if ( v6 ) /*0x795599*/
    v10 = this->capacityEnd - v6; /*0x7955a4*/
  else
    v10 = 0; /*0x79559b*/
  if ( v4 > v10 ) /*0x7955a8*/
  {
    if ( v6 ) /*0x7955e7*/
      FormHeapFree((unsigned int)this->begin); /*0x7955ea*/
    v13 = source->begin; /*0x7955f2*/
    if ( v13 ) /*0x7955f7*/
      v14 = source->end - v13; /*0x795602*/
    else
      v14 = 0; /*0x7955f9*/
    if ( OB_stVectorUShort_Buy_010201A0(this, v14) ) /*0x795607*/
      this->end = OB_stVectorUShort_UninitializedCopyRange_010201A0(source->begin, source->end, this->begin); /*0x795623*/
    return this; /*0x795629*/
  }
  if ( v6 ) /*0x7955ac*/
    v11 = this->end - v6; /*0x7955b7*/
  else
    v11 = 0; /*0x7955ae*/
  v12 = &begin[v11]; /*0x7955bc*/
  OB_stVectorUShort_CopyRange_010201A0(source->begin, v12, this->begin); /*0x7955c1*/
  this->end = OB_stVectorUShort_UninitializedCopyRange_010201A0(v12, source->end, this->end); /*0x7955db*/
  return this; /*0x79553b*/
}
