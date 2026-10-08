// OBLIVION AUTHORITY (2026-08-30): Resizes vector<vector<unsigned short>> using an empty inner fill value. Growth delegates to the decoded outer insert-fill; shrink destroys erased inner owners.
void __thiscall OB_stVector_stVectorUShort_ResizeFill_010201A0(
        OB_stVector_stVectorUShort_010201A0 *this,
        unsigned int newSize,
        OB_stVectorUShort_010201A0 value)
{
  OB_stVectorUShort_010201A0 *begin; // ecx
  int v5; // ebx
  unsigned int v6; // eax
  OB_stVectorUShort_010201A0 *v7; // ebp
  OB_stVectorUShort_010201A0 *end; // ebp
  OB_stVectorUShort_010201A0 *v9; // ebx
  OB_stVectorUShort_010201A0 *v10; // edi
  bool v11; // cc
  OB_stVector_stVectorUShortIterator_010201A0 result; // [esp+14h] [ebp-14h] BYREF
  int v13; // [esp+24h] [ebp-4h]

  begin = this->begin; /*0x797619*/
  v5 = 0; /*0x79761c*/
  v13 = 0; /*0x797620*/
  if ( begin ) /*0x797624*/
    v6 = this->end - begin; /*0x79762f*/
  else
    v6 = 0; /*0x797626*/
  if ( v6 >= newSize ) /*0x797638*/
  {
    if ( begin ) /*0x797667*/
    {
      end = this->end; /*0x797669*/
      if ( newSize < end - begin ) /*0x797675*/
      {
        if ( begin > end ) /*0x797679*/
          _invalid_parameter_noinfo(0, newSize, (int)this); /*0x79767b*/
        v9 = this->begin; /*0x797680*/
        if ( v9 > this->end ) /*0x797686*/
          _invalid_parameter_noinfo((int)v9, newSize, (int)this); /*0x797688*/
        v10 = &v9[newSize]; /*0x797690*/
        v11 = v10 <= this->end; /*0x797692*/
        result.current = v9; /*0x797695*/
        if ( !v11 || v10 < this->begin ) /*0x79769e*/
          _invalid_parameter_noinfo((int)v9, (int)v10, (int)this); /*0x7976a0*/
        OB_stVector_stVectorUShort_EraseRange_010201A0( /*0x7976b0*/
          this,
          &result,
          (OB_stVector_stVectorUShortIterator_010201A0)__PAIR64__((unsigned int)v10, (unsigned int)this),
          (OB_stVector_stVectorUShortIterator_010201A0)__PAIR64__((unsigned int)end, (unsigned int)this));
      }
    }
  }
  else
  {
    if ( begin ) /*0x79763c*/
      v5 = this->end - begin; /*0x797643*/
    v7 = this->end; /*0x797646*/
    if ( begin > v7 ) /*0x79764b*/
      _invalid_parameter_noinfo(v5, newSize, (int)this); /*0x79764d*/
    OB_stVector_stVectorUShort_InsertFill_010201A0( /*0x79765e*/
      this,
      (OB_stVector_stVectorUShortIterator_010201A0)__PAIR64__((unsigned int)v7, (unsigned int)this),
      newSize - v5,
      &value);
  }
  if ( value.begin ) /*0x7976bb*/
    FormHeapFree((unsigned int)value.begin); /*0x7976be*/
}
