SeenData *__thiscall SeenData::`scalar deleting destructor'(SeenData *this, char a2)
{
  *(_DWORD *)this = &SeenData::`vftable'; /*0x412208*/
  if ( (a2 & 1) != 0 ) /*0x41220e*/
    FormHeapFree((unsigned int)this); /*0x412211*/
  return this; /*0x41221b*/
}
