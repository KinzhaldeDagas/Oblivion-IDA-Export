unsigned int *__thiscall sub_4C1630(unsigned int *this, char a2)
{
  unsigned int v4; // [esp-4h] [ebp-8h]

  v4 = *(this + 3); /*0x4c1636*/
  *this = (unsigned int)&NiBinaryExtraData::`vftable'; /*0x4c1637*/
  FormHeapFree(v4); /*0x4c163d*/
  *(this + 3) = 0; /*0x4c1647*/
  NiExtraData_dtor(this); /*0x4c164e*/
  if ( (a2 & 1) != 0 ) /*0x4c1658*/
    FormHeapFree((unsigned int)this); /*0x4c165b*/
  return this; /*0x4c1665*/
}
