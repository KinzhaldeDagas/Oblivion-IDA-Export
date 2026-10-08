// vector<float>::push_back(const float&). Appends directly when end!=capacity; otherwise builds the checked end iterator and delegates to single-element insert.
void __thiscall OB_stVectorFloat_PushBack_010201A0(OB_stVectorFloat_010201A0 *this, const float *value)
{
  int v2; // ebx
  float *begin; // edx
  unsigned int size; // ecx
  float *newEnd; // eax
  float *end; // edi
  OB_stVectorFloatIterator_010201A0 iteratorResult; // [esp+4h] [ebp-8h] BYREF

  begin = this->begin; /*0x799786*/
  if ( begin ) /*0x79978b*/
    size = this->end - begin; /*0x799796*/
  else
    size = 0; /*0x79978d*/
  if ( begin && size < this->capacity - begin ) /*0x7997a7*/
  {
    newEnd = this->end + 1; /*0x7997b2*/
    newEnd[0xFFFFFFFF] = *value; /*0x7997b5*/
    this->end = newEnd; /*0x7997b8*/
  }
  else
  {
    end = this->end; /*0x7997c3*/
    if ( begin > end ) /*0x7997c8*/
      _invalid_parameter_noinfo(v2, (int)end, (int)this); /*0x7997ca*/
    OB_stVectorFloat_InsertOne_010201A0( /*0x7997dd*/
      this,
      &iteratorResult,
      (OB_stVectorFloatIterator_010201A0)__PAIR64__((unsigned int)end, (unsigned int)this),
      value);
  }
}
