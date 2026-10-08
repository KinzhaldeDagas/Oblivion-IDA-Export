NiColorExtraData *__thiscall NiColorExtraData::`scalar deleting destructor'(NiColorExtraData *this, char a2)
{
  *(_DWORD *)this = &NiColorExtraData::`vftable'; /*0x730683*/
  NiExtraData_dtor((unsigned int *)this); /*0x730689*/
  if ( (a2 & 1) != 0 ) /*0x730693*/
    FormHeapFree((unsigned int)this); /*0x730696*/
  return this; /*0x7306a0*/
}
