unsigned int *__thiscall sub_8C47C0(unsigned int *this, char a2)
{
  unsigned int v3; // eax

  v3 = *(this + 5); /*0x8c47c3*/
  *this = (unsigned int)&hkPackedNiTriStripsData::`vftable'; /*0x8c47c8*/
  if ( v3 ) /*0x8c47ce*/
    FormHeapFree(v3); /*0x8c47d1*/
  if ( *(this + 6) ) /*0x8c47d9*/
    FormHeapFree(*(this + 6)); /*0x8c47e1*/
  if ( *(this + 7) ) /*0x8c47e9*/
    FormHeapFree(*(this + 7)); /*0x8c47f1*/
  NiRefObject_destr(this); /*0x8c47fb*/
  if ( (a2 & 1) != 0 ) /*0x8c4805*/
    FormHeapFree((unsigned int)this); /*0x8c4808*/
  return this; /*0x8c4812*/
}
