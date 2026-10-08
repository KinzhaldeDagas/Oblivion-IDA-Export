unsigned int *__thiscall sub_740AF0(unsigned int *this, char a2)
{
  unsigned int v4; // [esp-4h] [ebp-8h]

  v4 = *(this + 4); /*0x740af6*/
  *this = (unsigned int)&NiIntegersExtraData::`vftable'; /*0x740af7*/
  FormHeapFree(v4); /*0x740afd*/
  *(this + 4) = 0; /*0x740b07*/
  NiExtraData_dtor(this); /*0x740b0e*/
  if ( (a2 & 1) != 0 ) /*0x740b18*/
    FormHeapFree((unsigned int)this); /*0x740b1b*/
  return this; /*0x740b25*/
}
