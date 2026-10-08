unsigned int *__thiscall sub_730240(unsigned int *this, char a2)
{
  unsigned int v4; // [esp-4h] [ebp-8h]

  v4 = *(this + 4); /*0x730246*/
  *this = (unsigned int)&NiFloatsExtraData::`vftable'; /*0x730247*/
  FormHeapFree(v4); /*0x73024d*/
  *(this + 4) = 0; /*0x730257*/
  NiExtraData_dtor(this); /*0x73025e*/
  if ( (a2 & 1) != 0 ) /*0x730268*/
    FormHeapFree((unsigned int)this); /*0x73026b*/
  return this; /*0x730275*/
}
