unsigned int *__thiscall sub_6E72B0(unsigned int *this, char a2)
{
  unsigned int v4; // [esp-4h] [ebp-8h]

  v4 = *(this + 2); /*0x6e72b6*/
  *this = (unsigned int)&NiBSplineData::`vftable'; /*0x6e72b7*/
  FormHeapFree(v4); /*0x6e72bd*/
  FormHeapFree(*(this + 3)); /*0x6e72c6*/
  NiRefObject_destr(this); /*0x6e72d0*/
  if ( (a2 & 1) != 0 ) /*0x6e72da*/
    FormHeapFree((unsigned int)this); /*0x6e72dd*/
  return this; /*0x6e72e7*/
}
