NiTask *__thiscall NiTask::`scalar deleting destructor'(NiTask *this, char a2)
{
  *(_DWORD *)this = &NiTask::`vftable'; /*0x56b7c3*/
  NiRefObject_destr(this); /*0x56b7c9*/
  if ( (a2 & 1) != 0 ) /*0x56b7d3*/
    FormHeapFree((unsigned int)this); /*0x56b7d6*/
  return this; /*0x56b7e0*/
}
