// OBLIVION AUTHORITY (2026-08-30): Resizes a vector<unsigned int>, inserting fill values when growing and erasing the tail when shrinking; used for per-LOD triangle totals.
void __thiscall OB_stVectorUInt32_ResizeFill_010201A0(
        OB_stVectorUInt32_010201A0 *this,
        unsigned int newSize,
        unsigned int value)
{
  int v3; // edi
  unsigned int *begin; // ecx
  unsigned int v6; // eax
  int v7; // edi
  unsigned int *v8; // ebp
  unsigned int *end; // ebp
  unsigned int *v10; // edi
  unsigned int *v11; // edi
  OB_stVector4Iterator_010201A0 result; // [esp+10h] [ebp-8h] BYREF

  begin = this->begin; /*0x795728*/
  if ( begin ) /*0x79572e*/
    v6 = this->end - begin; /*0x795739*/
  else
    v6 = 0; /*0x795730*/
  if ( v6 >= newSize ) /*0x795742*/
  {
    if ( begin ) /*0x79577d*/
    {
      end = this->end; /*0x79577f*/
      if ( newSize < end - begin ) /*0x79578b*/
      {
        if ( begin > end ) /*0x79578f*/
          _invalid_parameter_noinfo(newSize, v3, (int)this); /*0x795791*/
        v10 = this->begin; /*0x795796*/
        if ( v10 > this->end ) /*0x79579c*/
          _invalid_parameter_noinfo(newSize, (int)v10, (int)this); /*0x79579e*/
        result.current = v10; /*0x7957a3*/
        v11 = &v10[newSize]; /*0x7957a7*/
        if ( v11 > this->end || v11 < this->begin ) /*0x7957b2*/
          _invalid_parameter_noinfo(newSize, (int)v11, (int)this); /*0x7957b4*/
        OB_stVector4_EraseRange_010201A0( /*0x7957c4*/
          (OB_stVector4_010201A0 *)this,
          &result,
          (OB_stVector4Iterator_010201A0)__PAIR64__((unsigned int)v11, (unsigned int)this),
          (OB_stVector4Iterator_010201A0)__PAIR64__((unsigned int)end, (unsigned int)this));
      }
    }
  }
  else
  {
    if ( begin ) /*0x795746*/
      v7 = this->end - begin; /*0x795751*/
    else
      v7 = 0; /*0x795748*/
    v8 = this->end; /*0x795754*/
    if ( begin > v8 ) /*0x795759*/
      _invalid_parameter_noinfo(newSize, v7, (int)this); /*0x79575b*/
    OB_stVectorUInt32_InsertFill_010201A0( /*0x79576c*/
      this,
      (OB_stVector4Iterator_010201A0)__PAIR64__((unsigned int)v8, (unsigned int)this),
      newSize - v7,
      &value);
  }
}
