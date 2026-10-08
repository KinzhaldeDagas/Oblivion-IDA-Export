// Oblivion compact stVec-vector push_back. Appends a 0x18-byte stVec in place when capacity remains; otherwise delegates to the reallocation/insertion path. Used for synchronized spline control/tangent/control-curve vectors.
OB_stVec_010201A0 *__thiscall OB_stVector_stVec_PushBack_010201A0(
        OB_stVector16_010201A0 *this,
        const OB_stVec_010201A0 *value)
{
  void *begin; // edi
  unsigned int v4; // ecx
  unsigned __int8 *v5; // edi
  OB_stVec_010201A0 *v6; // eax
  void *end; // ebx
  OB_stVector_stVecIterator_010201A0 result; // [esp+8h] [ebp-8h] BYREF

  begin = this->begin; /*0x785e97*/
  if ( begin ) /*0x785e9c*/
    v4 = ((char *)this->end - (char *)begin) / 0x18; /*0x785eb6*/
  else
    v4 = 0; /*0x785e9e*/
  if ( !begin || v4 >= ((char *)this->capacityEnd - (char *)begin) / 0x18 ) /*0x785ed4*/
  {
    end = this->end; /*0x785f08*/
    if ( begin > end ) /*0x785f0d*/
      _invalid_parameter_noinfo(); /*0x785f0f*/
    OB_stVector_stVec_InsertOne_010201A0( /*0x785f22*/
      (OB_stVector_stVec_010201A0 *)this,
      &result,
      (OB_stVector_stVecIterator_010201A0)__PAIR64__((unsigned int)end, (unsigned int)this),
      value);
    JUMPOUT(0x785F27); /*0x785f27*/
  }
  v5 = (unsigned __int8 *)this->end; /*0x785ede*/
  LOBYTE(result.owner) = 0; /*0x785ee1*/
  v6 = (OB_stVec_010201A0 *)OB_stVector24_UninitializedFillN_010201A0(v5, 1u, (const unsigned __int8 *)value); /*0x785ef1*/
  this->end = v5 + 0x18; /*0x785efc*/
  return v6; /*0x785eff*/
}
