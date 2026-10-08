// Pushes one 4-byte value into an OB_stVector4. Writes directly at end when capacity remains, otherwise calls the checked insert-one helper. Oblivion uses it for CBranch pointers and other pointer-sized SpeedTree lists.
void __thiscall OB_stVector4_PushBack_010201A0(OB_stVector4_010201A0 *this, const unsigned int *value)
{
  int v2; // ebx
  unsigned int *begin; // edx
  unsigned int v5; // ecx
  unsigned int *end; // eax
  unsigned int *v7; // edi
  OB_stVector4Iterator_010201A0 result; // [esp+4h] [ebp-8h] BYREF

  begin = this->begin; /*0x791776*/
  if ( begin ) /*0x79177b*/
    v5 = this->end - begin; /*0x791786*/
  else
    v5 = 0; /*0x79177d*/
  if ( begin && v5 < this->capacity - begin ) /*0x791797*/
  {
    end = this->end; /*0x791799*/
    *end = *value; /*0x7917a2*/
    this->end = end + 1; /*0x7917a7*/
  }
  else
  {
    v7 = this->end; /*0x7917b2*/
    if ( begin > v7 ) /*0x7917b7*/
      _invalid_parameter_noinfo(v2, (int)v7, (int)this); /*0x7917b9*/
    OB_stVector4_InsertOne_010201A0( /*0x7917cc*/
      this,
      &result,
      (OB_stVector4Iterator_010201A0)__PAIR64__((unsigned int)v7, (unsigned int)this),
      value);
  }
}
