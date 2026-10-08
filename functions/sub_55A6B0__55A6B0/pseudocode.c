unsigned int *__thiscall sub_55A6B0(unsigned int *this, char a2)
{
  unsigned int v3; // eax

  v3 = *(this + 1); /*0x55a6b3*/
  *this = (unsigned int)&BSFaceGenMorphStatistical::`vftable'; /*0x55a6b8*/
  if ( v3 ) /*0x55a6be*/
    FormHeapFree(v3); /*0x55a6c1*/
  *this = (unsigned int)&BSFaceGenMorph::`vftable'; /*0x55a6ce*/
  if ( (a2 & 1) != 0 ) /*0x55a6d4*/
    FormHeapFree((unsigned int)this); /*0x55a6d7*/
  return this; /*0x55a6e1*/
}
