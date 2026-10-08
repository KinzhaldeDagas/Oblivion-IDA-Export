// Oblivion 1.2.0.416: vector<stVec>::resize(newSize,value), with the 24-byte value passed by value; grows through insert-fill or shrinks through checked erase.
void __thiscall OB_stVector_stVec_ResizeFill_010201A0(
        OB_stVector_stVec_010201A0 *this,
        unsigned int newSize,
        OB_stVec_010201A0 value)
{
  OB_stVec_010201A0 *begin; // ecx
  int v5; // edi
  unsigned int v6; // eax
  OB_stVec_010201A0 *v7; // ebp
  OB_stVec_010201A0 *end; // edi
  OB_stVec_010201A0 *v9; // ebp
  OB_stVec_010201A0 *v10; // ebx
  bool v11; // cc
  OB_stVector24Iterator_010201A0 result; // [esp+14h] [ebp-14h] BYREF
  unsigned int v13; // [esp+24h] [ebp-4h]

  begin = this->begin; /*0x7856d9*/
  v5 = 0; /*0x7856dc*/
  v13 = 0; /*0x7856e0*/
  if ( begin ) /*0x7856e4*/
    v6 = this->end - begin; /*0x7856fe*/
  else
    v6 = 0; /*0x7856e6*/
  if ( v6 >= newSize ) /*0x785706*/
  {
    if ( begin ) /*0x785743*/
    {
      end = this->end; /*0x785745*/
      if ( newSize < end - begin ) /*0x78575f*/
      {
        if ( begin > end ) /*0x785763*/
          _invalid_parameter_noinfo(newSize, (int)end, (int)this); /*0x785765*/
        v9 = this->begin; /*0x78576a*/
        if ( v9 > this->end ) /*0x785770*/
          _invalid_parameter_noinfo(newSize, (int)end, (int)this); /*0x785772*/
        v10 = &v9[newSize]; /*0x78577a*/
        v11 = v10 <= this->end; /*0x78577e*/
        result.current = (unsigned __int8 *)v9; /*0x785781*/
        if ( !v11 || v10 < this->begin ) /*0x78578a*/
          _invalid_parameter_noinfo((int)v10, (int)end, (int)this); /*0x78578c*/
        OB_stVector24_EraseRange_010201A0( /*0x78579c*/
          (OB_stVector24_010201A0 *)this,
          &result,
          (OB_stVector24Iterator_010201A0)__PAIR64__((unsigned int)v10, (unsigned int)this),
          (OB_stVector24Iterator_010201A0)__PAIR64__((unsigned int)end, (unsigned int)this));
      }
    }
  }
  else
  {
    if ( begin ) /*0x78570a*/
      v5 = this->end - begin; /*0x785720*/
    v7 = this->end; /*0x785722*/
    if ( begin > v7 ) /*0x785727*/
      _invalid_parameter_noinfo(newSize, v5, (int)this); /*0x785729*/
    OB_stVector_stVec_InsertFill_010201A0( /*0x78573a*/
      this,
      (OB_stVector_stVecIterator_010201A0)__PAIR64__((unsigned int)v7, (unsigned int)this),
      newSize - v5,
      &value);
  }
  v13 = 0xFFFFFFFF; /*0x7857a5*/
  Shared_NoOpVirtual_60D0A0(&value); /*0x7857ad*/
}
