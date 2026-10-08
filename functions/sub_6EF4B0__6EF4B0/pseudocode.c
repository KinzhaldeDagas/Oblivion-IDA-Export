// Oblivion body: resizes a byte vector; erases a checked suffix when shrinking and delegates to byte insert-fill with the supplied byte when growing.
void __thiscall OB_stVectorByte_ResizeFill_010201A0(
        OB_stVectorByte_010201A0 *this,
        unsigned int newSize,
        unsigned __int8 fillValue)
{
  int v3; // ebx
  unsigned __int8 *begin; // eax
  unsigned __int8 *v6; // ecx
  unsigned __int8 *v7; // ebx
  unsigned __int8 *v8; // ebp
  unsigned __int8 *end; // ebp
  unsigned __int8 *v10; // ebx
  unsigned __int8 *v11; // edi
  bool v12; // cc
  OB_stVectorByteIterator_010201A0 result; // [esp+10h] [ebp-8h] BYREF

  begin = this->begin; /*0x6ef4b8*/
  if ( begin ) /*0x6ef4be*/
    v6 = (unsigned __int8 *)(this->end - begin); /*0x6ef4c7*/
  else
    v6 = 0; /*0x6ef4c0*/
  if ( (unsigned int)v6 >= newSize ) /*0x6ef4cf*/
  {
    if ( begin ) /*0x6ef507*/
    {
      end = this->end; /*0x6ef509*/
      if ( newSize < end - begin ) /*0x6ef512*/
      {
        if ( begin > end ) /*0x6ef516*/
          _invalid_parameter_noinfo(v3, newSize, (int)this); /*0x6ef518*/
        v10 = this->begin; /*0x6ef51d*/
        if ( v10 > this->end ) /*0x6ef523*/
          _invalid_parameter_noinfo((int)v10, newSize, (int)this); /*0x6ef525*/
        v11 = &v10[newSize]; /*0x6ef52a*/
        v12 = &v10[newSize] <= this->end; /*0x6ef52c*/
        result.current = v10; /*0x6ef52f*/
        if ( !v12 || v11 < this->begin ) /*0x6ef538*/
          _invalid_parameter_noinfo((int)v10, (int)v11, (int)this); /*0x6ef53a*/
        OB_stVectorByte_EraseRange_010201A0( /*0x6ef54a*/
          this,
          &result,
          (OB_stVectorByteIterator_010201A0)__PAIR64__((unsigned int)v11, (unsigned int)this),
          (OB_stVectorByteIterator_010201A0)__PAIR64__((unsigned int)end, (unsigned int)this));
      }
    }
  }
  else
  {
    if ( begin ) /*0x6ef4d3*/
      v7 = (unsigned __int8 *)(this->end - begin); /*0x6ef4dc*/
    else
      v7 = 0; /*0x6ef4d5*/
    v8 = this->end; /*0x6ef4de*/
    if ( begin > v8 ) /*0x6ef4e3*/
      _invalid_parameter_noinfo((int)v7, newSize, (int)this); /*0x6ef4e5*/
    OB_stVectorByte_InsertFill_010201A0( /*0x6ef4f6*/
      this,
      (OB_stVectorByteIterator_010201A0)__PAIR64__((unsigned int)v8, (unsigned int)this),
      newSize - (_DWORD)v7,
      &fillValue);
  }
}
