NiSearchPath *__thiscall NiSearchPath::`scalar deleting destructor'(NiSearchPath *this, char a2)
{
  *(_DWORD *)this = &NiSearchPath::`vftable'; /*0x747b88*/
  if ( (a2 & 1) != 0 ) /*0x747b8e*/
    FormHeapFree((unsigned int)this); /*0x747b91*/
  return this; /*0x747b9b*/
}
