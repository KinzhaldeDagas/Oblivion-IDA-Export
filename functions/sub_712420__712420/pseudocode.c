unsigned int *__thiscall sub_712420(unsigned int *this, char a2)
{
  unsigned int v4; // [esp-4h] [ebp-8h]

  v4 = *(this + 1); /*0x712426*/
  *this = (unsigned int)&NiTArray<NiObjectGroup *>::`vftable'; /*0x712427*/
  FormHeapFree(v4); /*0x71242d*/
  if ( (a2 & 1) != 0 ) /*0x71243a*/
    FormHeapFree((unsigned int)this); /*0x71243d*/
  return this; /*0x712447*/
}
