unsigned int __thiscall sub_6FEB00(MEF_RefPointerArray16 *this, LONG *element)
{
  unsigned int usedEnd; // edi

  usedEnd = this->usedEnd; /*0x6feb08*/
  if ( usedEnd >= this->capacity ) /*0x6feb0e*/
    NiTObjectArray_Resize16(this, usedEnd + this->growBy); /*0x6feb19*/
  NiTObjectArray_SetAt(this, usedEnd, (void **)element); /*0x6feb26*/
  return usedEnd; /*0x6feb2d*/
}
