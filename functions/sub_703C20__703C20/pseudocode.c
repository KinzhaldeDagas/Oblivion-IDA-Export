unsigned int *__thiscall sub_703C20(unsigned int *this, char a2)
{
  unsigned int v4; // [esp-4h] [ebp-8h]

  v4 = *(this + 1); /*0x703c26*/
  *this = (unsigned int)&NiTArray<NiTexturingProperty::Map *>::`vftable'; /*0x703c27*/
  FormHeapFree(v4); /*0x703c2d*/
  if ( (a2 & 1) != 0 ) /*0x703c3a*/
    FormHeapFree((unsigned int)this); /*0x703c3d*/
  return this; /*0x703c47*/
}
