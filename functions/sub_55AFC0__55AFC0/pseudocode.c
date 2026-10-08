unsigned int *__thiscall sub_55AFC0(unsigned int *this, char a2)
{
  unsigned int v3; // eax

  v3 = *(this + 3); /*0x55afc3*/
  *this = (unsigned int)&BSFaceGenBaseMorphExtraData::`vftable'; /*0x55afc8*/
  if ( v3 ) /*0x55afce*/
    FormHeapFree(v3); /*0x55afd1*/
  NiExtraData_dtor(this); /*0x55afdb*/
  if ( (a2 & 1) != 0 ) /*0x55afe5*/
    FormHeapFree((unsigned int)this); /*0x55afe8*/
  return this; /*0x55aff2*/
}
