// OBLIVION AUTHORITY (2026-08-30): Resizes vector<vector<unsigned short*>>. Its 4-byte pointer element permits structural reuse of the shared vector<vector<4-byte>> insert helper; the semantic type is fixed by CIndexedGeometry callers.
void __thiscall OB_stVector_stVectorUShortPtr_ResizeFill_010201A0(
        OB_stVector_stVectorUShortPtr_010201A0 *this,
        unsigned int newSize,
        OB_stVectorUShortPtr_010201A0 value)
{
  OB_stVectorUShortPtr_010201A0 *begin; // ecx
  int v5; // ebx
  unsigned int v6; // eax
  OB_stVectorFloat_010201A0 *v7; // ebp
  OB_stVectorUShortPtr_010201A0 *end; // ebp
  OB_stVectorUShortPtr_010201A0 *v9; // ebx
  OB_stVectorUShortPtr_010201A0 *v10; // edi
  bool v11; // cc
  OB_stVector_stVectorUShortPtrIterator_010201A0 result; // [esp+14h] [ebp-14h] BYREF
  int v13; // [esp+24h] [ebp-4h]

  begin = this->begin; /*0x797709*/
  v5 = 0; /*0x79770c*/
  v13 = 0; /*0x797710*/
  if ( begin ) /*0x797714*/
    v6 = this->end - begin; /*0x79771f*/
  else
    v6 = 0; /*0x797716*/
  if ( v6 >= newSize ) /*0x797728*/
  {
    if ( begin ) /*0x797757*/
    {
      end = this->end; /*0x797759*/
      if ( newSize < end - begin ) /*0x797765*/
      {
        if ( begin > end ) /*0x797769*/
          _invalid_parameter_noinfo(0, newSize, (int)this); /*0x79776b*/
        v9 = this->begin; /*0x797770*/
        if ( v9 > this->end ) /*0x797776*/
          _invalid_parameter_noinfo((int)v9, newSize, (int)this); /*0x797778*/
        v10 = &v9[newSize]; /*0x797780*/
        v11 = v10 <= this->end; /*0x797782*/
        result.current = v9; /*0x797785*/
        if ( !v11 || v10 < this->begin ) /*0x79778e*/
          _invalid_parameter_noinfo((int)v9, (int)v10, (int)this); /*0x797790*/
        OB_stVector_stVectorUShortPtr_EraseRange_010201A0( /*0x7977a0*/
          this,
          &result,
          (OB_stVector_stVectorUShortPtrIterator_010201A0)__PAIR64__((unsigned int)v10, (unsigned int)this),
          (OB_stVector_stVectorUShortPtrIterator_010201A0)__PAIR64__((unsigned int)end, (unsigned int)this));
      }
    }
  }
  else
  {
    if ( begin ) /*0x79772c*/
      v5 = this->end - begin; /*0x797733*/
    v7 = (OB_stVectorFloat_010201A0 *)this->end; /*0x797736*/
    if ( begin > (OB_stVectorUShortPtr_010201A0 *)v7 ) /*0x79773b*/
      _invalid_parameter_noinfo(v5, newSize, (int)this); /*0x79773d*/
    OB_stVector_stVectorFloat_InsertFill_010201A0( /*0x79774e*/
      (OB_stVector_stVectorFloat_010201A0 *)this,
      (OB_stVector_stVectorFloat_010201A0 *)this,
      v7,
      newSize - v5,
      (const OB_stVectorFloat_010201A0 *)&value);
  }
  if ( value.begin ) /*0x7977ab*/
    FormHeapFree((unsigned int)value.begin); /*0x7977ae*/
}
