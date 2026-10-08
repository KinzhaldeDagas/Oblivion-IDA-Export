// Oblivion compact float-vector push_back. Appends a 4-byte float in place when capacity remains; otherwise delegates to the reallocation/insertion path. Shared by spline tangent lengths and indexed-geometry float streams.
float *__thiscall OB_stVector_float_PushBack_010201A0(OB_stVector16_010201A0 *this, const float *value)
{
  void *begin; // edx
  unsigned int v4; // ecx
  float *v5; // eax
  void *end; // edi
  OB_stVectorFloatIterator_010201A0 result; // [esp+4h] [ebp-8h] BYREF

  begin = this->begin; /*0x785f36*/
  if ( begin ) /*0x785f3b*/
    v4 = ((char *)this->end - (char *)begin) >> 2; /*0x785f46*/
  else
    v4 = 0; /*0x785f3d*/
  if ( begin && v4 < ((char *)this->capacityEnd - (char *)begin) >> 2 ) /*0x785f57*/
  {
    v5 = (float *)((char *)this->end + 4); /*0x785f62*/
    v5[0xFFFFFFFF] = *value; /*0x785f65*/
    this->end = v5; /*0x785f68*/
  }
  else
  {
    end = this->end; /*0x785f73*/
    if ( begin > end ) /*0x785f78*/
      _invalid_parameter_noinfo(); /*0x785f7a*/
    return (float *)OB_stVector_float_InsertOne_010201A0( /*0x785f8d*/
                      (OB_stVectorFloat_010201A0 *)this,
                      &result,
                      (OB_stVectorFloatIterator_010201A0)__PAIR64__((unsigned int)end, (unsigned int)this),
                      value);
  }
  return v5; /*0x785f6b*/
}
