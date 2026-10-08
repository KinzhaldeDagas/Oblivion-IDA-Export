// OBLIVION AUTHORITY (2026-08-30): Deep copy assignment for vector<vector<unsigned short*>>. The 4-byte inner element type selects the shared inner-vector copy machinery.
OB_stVector_stVectorUShortPtr_010201A0 *__thiscall OB_stVector_stVectorUShortPtr_CopyAssign_010201A0(
        OB_stVector_stVectorUShortPtr_010201A0 *this,
        const OB_stVector_stVectorUShortPtr_010201A0 *source)
{
  OB_stVectorUShortPtr_010201A0 *begin; // edx
  unsigned int v4; // ebx
  OB_stVector4_010201A0 *v6; // ecx
  unsigned int v7; // eax
  OB_stVector4_010201A0 *v8; // eax
  OB_stVectorUShortPtr_010201A0 *v9; // eax
  OB_stVectorUShortPtr_010201A0 *v10; // edi
  unsigned int v11; // eax
  int v12; // eax
  const OB_stVectorUShortPtr_010201A0 *v13; // ebx
  OB_stVectorUShortPtr_010201A0 *v14; // ecx
  unsigned int v15; // eax

  if ( this == source ) /*0x796d1a*/
    return this; /*0x796d1a*/
  begin = source->begin; /*0x796d20*/
  if ( !begin || (v4 = source->end - begin) == 0 ) /*0x796d33*/
  {
    OB_stVector_stVectorUShortPtr_Clear_010201A0(this); /*0x796d35*/
    return this; /*0x796d40*/
  }
  v6 = (OB_stVector4_010201A0 *)this->begin; /*0x796d43*/
  if ( v6 ) /*0x796d48*/
    v7 = ((char *)this->end - (char *)v6) >> 4; /*0x796d53*/
  else
    v7 = 0; /*0x796d4a*/
  if ( v4 <= v7 ) /*0x796d58*/
  {
    v8 = (OB_stVector4_010201A0 *)OB_stVector_stVectorUShortPtr_CopyAssignRange_010201A0( /*0x796d5d*/
                                    begin,
                                    source->end,
                                    this->begin);
    OB_stVector4_DestroyRange_010201A0(v8, (OB_stVector4_010201A0 *)this->end); /*0x796d6d*/
    v9 = source->begin; /*0x796d72*/
    if ( v9 ) /*0x796d7a*/
      v10 = &this->begin[source->end - v9]; /*0x796d9b*/
    else
      v10 = this->begin; /*0x796d81*/
    this->end = v10; /*0x796d86*/
    return this; /*0x796d8d*/
  }
  if ( v6 ) /*0x796dac*/
    v11 = ((char *)this->capacityEnd - (char *)v6) >> 4; /*0x796db7*/
  else
    v11 = 0; /*0x796dae*/
  if ( v4 > v11 ) /*0x796dbc*/
  {
    if ( v6 ) /*0x796dfe*/
    {
      OB_stVector4_DestroyRangeThunk_010201A0(v6, (OB_stVector4_010201A0 *)this->end); /*0x796e07*/
      FormHeapFree((unsigned int)this->begin); /*0x796e10*/
    }
    v14 = source->begin; /*0x796e18*/
    if ( v14 ) /*0x796e1d*/
      v15 = source->end - v14; /*0x796e28*/
    else
      v15 = 0; /*0x796e1f*/
    if ( OB_stVector16_Buy_010201A0((OB_stVector16_010201A0 *)this, v15) ) /*0x796e2e*/
      this->end = OB_stVector_stVectorUShortPtr_UninitializedCopyRangeThunk_010201A0( /*0x796e4a*/
                    source->begin,
                    source->end,
                    this->begin);
    return this; /*0x796e50*/
  }
  if ( v6 ) /*0x796dc0*/
    v12 = ((char *)this->end - (char *)v6) >> 4; /*0x796dcb*/
  else
    v12 = 0; /*0x796dc2*/
  v13 = &begin[v12]; /*0x796dd4*/
  OB_stVector_stVectorUShortPtr_CopyAssignRange_010201A0(begin, v13, this->begin); /*0x796dd8*/
  this->end = OB_stVector_stVectorUShortPtr_UninitializedCopyRangeThunk_010201A0(v13, source->end, this->end); /*0x796df2*/
  return this; /*0x796d3c*/
}
