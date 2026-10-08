unsigned int __thiscall sub_52F3C0(NiTLargeArrayUInt32 *this, unsigned int index, unsigned int value)
{
  unsigned int count; // eax
  unsigned int result; // eax
  unsigned int v6; // eax
  unsigned int *data; // edx

  sub_5A56F0((unsigned int *)this); /*0x52f3c4*/
  count = this->count; /*0x52f3c9*/
  if ( index <= count ) /*0x52f3d2*/
  {
    v6 = count + 1; /*0x52f3f8*/
    if ( this->capacity < v6 ) /*0x52f3fe*/
      NiTLargeArray_Resize32((unsigned int *)this, v6 + this->growBy); /*0x52f408*/
    unknown_libname_16( /*0x52f422*/
      (unsigned int)&this->data[index + 1],
      (unsigned int)&this->data[index],
      4 * (this->count - index));
    ++this->count; /*0x52f427*/
    data = this->data; /*0x52f42e*/
    this->nonzeroCount = this->count; /*0x52f431*/
    result = value; /*0x52f434*/
    data[index] = value; /*0x52f43b*/
  }
  else
  {
    if ( index >= this->capacity ) /*0x52f3d7*/
      NiTLargeArray_Resize32((unsigned int *)this, index + this->growBy); /*0x52f3e1*/
    return NiTLargeArray32_SetSlot(this, index, &value); /*0x52f3ee*/
  }
  return result; /*0x52f3f3*/
}
