NiLODData *__thiscall NiLODData::`scalar deleting destructor'(NiLODData *this, char a2)
{
  *(_DWORD *)this = &NiLODData::`vftable'; /*0x7387a3*/
  NiRefObject_destr(this); /*0x7387a9*/
  if ( (a2 & 1) != 0 ) /*0x7387b3*/
    FormHeapFree((unsigned int)this); /*0x7387b6*/
  return this; /*0x7387c0*/
}
