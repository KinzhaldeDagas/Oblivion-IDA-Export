unsigned int __thiscall sub_526A30(MEF_RefPointerArray16 *this, LONG *a2)
{
  unsigned int usedEnd; // edi

  usedEnd = this->usedEnd; /*0x526a38*/
  if ( usedEnd >= this->capacity ) /*0x526a3e*/
    NiTObjectArray_Resize16(this, usedEnd + this->growBy); /*0x526a49*/
  sub_5254D0(this, usedEnd, a2); /*0x526a56*/
  return usedEnd; /*0x526a5d*/
}
