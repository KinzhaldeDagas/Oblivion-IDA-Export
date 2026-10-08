unsigned int *__thiscall sub_55A150(unsigned int *this, char a2)
{
  unsigned int v3; // eax

  v3 = *(this + 1); /*0x55a153*/
  *this = (unsigned int)&BSFaceGenMorphDifferential::`vftable'; /*0x55a158*/
  if ( v3 ) /*0x55a15e*/
    FormHeapFree(v3); /*0x55a161*/
  *this = (unsigned int)&BSFaceGenMorph::`vftable'; /*0x55a16e*/
  if ( (a2 & 1) != 0 ) /*0x55a174*/
    FormHeapFree((unsigned int)this); /*0x55a177*/
  return this; /*0x55a181*/
}
