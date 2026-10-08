// Oblivion 1.2.0.416: vector<stVec> copy assignment with self, empty, reuse, capacity-reuse, and reallocation cases.
OB_stVector_stVec_010201A0 *__thiscall OB_stVector_stVec_CopyAssign_010201A0(
        OB_stVector_stVec_010201A0 *this,
        const OB_stVector_stVec_010201A0 *other)
{
  OB_stVec_010201A0 *begin; // ebp
  unsigned int v5; // ecx
  unsigned __int8 *v7; // edi
  unsigned int v8; // eax
  unsigned __int8 *v9; // eax
  OB_stVec_010201A0 *v10; // eax
  OB_stVec_010201A0 *v11; // ecx
  unsigned int v12; // eax
  unsigned int v13; // eax
  const unsigned __int8 *othera; // [esp+Ch] [ebp+4h]

  if ( this == other ) /*0x78540a*/
    return this; /*0x78556c*/
  begin = other->begin; /*0x785411*/
  if ( !begin || (v5 = other->end - begin) == 0 ) /*0x78542e*/
  {
    OB_stVector24_Clear_010201A0((OB_stVector24_010201A0 *)this); /*0x785432*/
    return this; /*0x78543c*/
  }
  v7 = (unsigned __int8 *)this->begin; /*0x785440*/
  if ( v7 ) /*0x785445*/
    v8 = ((char *)this->end - (char *)v7) / 0x18; /*0x78545f*/
  else
    v8 = 0; /*0x785447*/
  if ( v5 > v8 ) /*0x785463*/
  {
    if ( v7 ) /*0x7854c8*/
      v12 = ((char *)this->capacityEnd - (char *)v7) / 0x18; /*0x7854e2*/
    else
      v12 = 0; /*0x7854ca*/
    if ( v5 <= v12 ) /*0x7854e6*/
    {
      othera = (const unsigned __int8 *)&begin[OB_stVector24_Size_010201A0((const OB_stVector24_010201A0 *)this)]; /*0x7854f9*/
      OB_stVector24_CopyRangeAdapter_010201A0((const unsigned __int8 *)begin, othera, v7); /*0x7854fd*/
      this->end = (OB_stVec_010201A0 *)OB_stVector24_UninitializedCopyRangeThunk_010201A0( /*0x78551a*/
                                         othera,
                                         (const unsigned __int8 *)other->end,
                                         (unsigned __int8 *)this->end);
      return this; /*0x785522*/
    }
    if ( v7 ) /*0x785527*/
    {
      OB_stVector24_DestroyRange_010201A0(v7, (unsigned __int8 *)this->end); /*0x785530*/
      FormHeapFree((unsigned int)this->begin); /*0x785539*/
    }
    v13 = OB_stVector24_Size_010201A0((const OB_stVector24_010201A0 *)other); /*0x785543*/
    if ( OB_stVector24_Buy_010201A0((OB_stVector24_010201A0 *)this, v13) ) /*0x78554b*/
      this->end = (OB_stVec_010201A0 *)OB_stVector24_UninitializedCopyRangeThunk_010201A0( /*0x785567*/
                                         (const unsigned __int8 *)other->begin,
                                         (const unsigned __int8 *)other->end,
                                         (unsigned __int8 *)this->begin);
    return this; /*0x785567*/
  }
  v9 = OB_stVector24_CopyRangeAdapter_010201A0( /*0x78546b*/
         (const unsigned __int8 *)begin,
         (const unsigned __int8 *)other->end,
         (unsigned __int8 *)this->begin);
  OB_stVector24_DestroyRange_010201A0(v9, (unsigned __int8 *)this->end); /*0x78547a*/
  v10 = other->begin; /*0x78547f*/
  if ( v10 ) /*0x785484*/
    v11 = &this->begin[other->end - v10]; /*0x7854b8*/
  else
    v11 = this->begin; /*0x78548d*/
  this->end = v11; /*0x785491*/
  return this; /*0x78543a*/
}
