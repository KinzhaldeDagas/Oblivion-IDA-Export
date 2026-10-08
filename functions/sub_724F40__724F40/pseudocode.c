unsigned int *__thiscall sub_724F40(unsigned int *this, char a2)
{
  unsigned int v4; // [esp-4h] [ebp-8h]

  v4 = *(this + 9); /*0x724f46*/
  *this = (unsigned int)&NiRangeLODData::`vftable'; /*0x724f47*/
  FormHeapFree(v4); /*0x724f4d*/
  sub_738790(this); /*0x724f57*/
  if ( (a2 & 1) != 0 ) /*0x724f61*/
    FormHeapFree((unsigned int)this); /*0x724f64*/
  return this; /*0x724f6e*/
}
