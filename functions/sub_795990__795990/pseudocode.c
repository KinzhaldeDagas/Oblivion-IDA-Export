// OBLIVION AUTHORITY (2026-08-30): Resizes vector<unsigned short> with 2-byte arithmetic; grows through insert-fill and shrinks through checked erase.
void __thiscall OB_stVectorUShort_ResizeFill_010201A0(
        OB_stVectorUShort_010201A0 *this,
        unsigned int newSize,
        unsigned __int16 value)
{
  int v3; // edi
  unsigned __int16 *begin; // ecx
  unsigned int v6; // eax
  int v7; // edi
  unsigned __int16 *v8; // ebp
  unsigned __int16 *end; // ebp
  unsigned __int16 *v10; // edi
  unsigned __int16 *v11; // edi
  OB_stVectorUShortIterator_010201A0 result; // [esp+10h] [ebp-8h] BYREF

  begin = this->begin; /*0x795998*/
  if ( begin ) /*0x79599e*/
    v6 = this->end - begin; /*0x7959a9*/
  else
    v6 = 0; /*0x7959a0*/
  if ( v6 >= newSize ) /*0x7959b1*/
  {
    if ( begin ) /*0x7959eb*/
    {
      end = this->end; /*0x7959ed*/
      if ( newSize < end - begin ) /*0x7959f8*/
      {
        if ( begin > end ) /*0x7959fc*/
          _invalid_parameter_noinfo(newSize, v3, (int)this); /*0x7959fe*/
        v10 = this->begin; /*0x795a03*/
        if ( v10 > this->end ) /*0x795a09*/
          _invalid_parameter_noinfo(newSize, (int)v10, (int)this); /*0x795a0b*/
        result.current = v10; /*0x795a10*/
        v11 = &v10[newSize]; /*0x795a14*/
        if ( v11 > this->end || v11 < this->begin ) /*0x795a1f*/
          _invalid_parameter_noinfo(newSize, (int)v11, (int)this); /*0x795a21*/
        OB_stVectorUShort_EraseRange_010201A0( /*0x795a31*/
          this,
          &result,
          (OB_stVectorUShortIterator_010201A0)__PAIR64__((unsigned int)v11, (unsigned int)this),
          (OB_stVectorUShortIterator_010201A0)__PAIR64__((unsigned int)end, (unsigned int)this));
      }
    }
  }
  else
  {
    if ( begin ) /*0x7959b5*/
      v7 = this->end - begin; /*0x7959c0*/
    else
      v7 = 0; /*0x7959b7*/
    v8 = this->end; /*0x7959c2*/
    if ( begin > v8 ) /*0x7959c7*/
      _invalid_parameter_noinfo(newSize, v7, (int)this); /*0x7959c9*/
    OB_stVectorUShort_InsertFill_010201A0( /*0x7959da*/
      this,
      (OB_stVectorUShortIterator_010201A0)__PAIR64__((unsigned int)v8, (unsigned int)this),
      newSize - v7,
      &value);
  }
}
