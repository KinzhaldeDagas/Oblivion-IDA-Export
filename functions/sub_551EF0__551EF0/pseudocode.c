void __thiscall sub_551EF0(unsigned int *this)
{
  if ( *(this + 0xC) >= 0x10 ) /*0x551ef8*/
    FormHeapFree(*(this + 7)); /*0x551efe*/
  *(this + 0xC) = 0xF; /*0x551f08*/
  *(this + 0xB) = 0; /*0x551f0f*/
  *((_BYTE *)this + 0x1C) = 0; /*0x551f12*/
  if ( *(this + 3) ) /*0x551f15*/
    FormHeapFree(*(this + 3)); /*0x551f1d*/
  *(this + 3) = 0; /*0x551f25*/
  *(this + 4) = 0; /*0x551f28*/
  *(this + 5) = 0; /*0x551f2b*/
}
