NiAccumulator *__thiscall NiAccumulator::`scalar deleting destructor'(NiAccumulator *this, char a2)
{
  *(_DWORD *)this = &NiAccumulator::`vftable'; /*0x7331d3*/
  NiRefObject_destr(this); /*0x7331d9*/
  if ( (a2 & 1) != 0 ) /*0x7331e3*/
    FormHeapFree((unsigned int)this); /*0x7331e6*/
  return this; /*0x7331f0*/
}
