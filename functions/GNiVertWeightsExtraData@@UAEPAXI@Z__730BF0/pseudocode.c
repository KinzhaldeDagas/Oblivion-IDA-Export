NiVertWeightsExtraData *__thiscall NiVertWeightsExtraData::`scalar deleting destructor'(
        NiVertWeightsExtraData *this,
        char a2)
{
  *(_DWORD *)this = &NiVertWeightsExtraData::`vftable'; /*0x730bf3*/
  NiExtraData_dtor((unsigned int *)this); /*0x730bf9*/
  if ( (a2 & 1) != 0 ) /*0x730c03*/
    FormHeapFree((unsigned int)this); /*0x730c06*/
  return this; /*0x730c10*/
}
