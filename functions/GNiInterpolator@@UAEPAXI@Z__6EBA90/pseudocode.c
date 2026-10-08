NiInterpolator *__thiscall NiInterpolator::`scalar deleting destructor'(NiInterpolator *this, char a2)
{
  *(_DWORD *)this = &NiInterpolator::`vftable'; /*0x6eba93*/
  NiRefObject_destr(this); /*0x6eba99*/
  if ( (a2 & 1) != 0 ) /*0x6ebaa3*/
    FormHeapFree((unsigned int)this); /*0x6ebaa6*/
  return this; /*0x6ebab0*/
}
