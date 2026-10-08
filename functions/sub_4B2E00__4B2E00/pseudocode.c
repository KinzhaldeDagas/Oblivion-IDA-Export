unsigned int *__thiscall sub_4B2E00(unsigned int *this, char a2)
{
  *this = (unsigned int)&TESObjectExtraData::`vftable'; /*0x4b2e03*/
  *(this + 3) = 0; /*0x4b2e09*/
  NiExtraData_dtor(this); /*0x4b2e10*/
  if ( (a2 & 1) != 0 ) /*0x4b2e1a*/
    FormHeapFree((unsigned int)this); /*0x4b2e1d*/
  return this; /*0x4b2e27*/
}
