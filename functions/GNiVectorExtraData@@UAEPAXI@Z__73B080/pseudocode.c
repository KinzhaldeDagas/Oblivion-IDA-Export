NiVectorExtraData *__thiscall NiVectorExtraData::`scalar deleting destructor'(NiVectorExtraData *this, char a2)
{
  *(_DWORD *)this = &NiVectorExtraData::`vftable'; /*0x73b083*/
  NiExtraData_dtor((unsigned int *)this); /*0x73b089*/
  if ( (a2 & 1) != 0 ) /*0x73b093*/
    FormHeapFree((unsigned int)this); /*0x73b096*/
  return this; /*0x73b0a0*/
}
