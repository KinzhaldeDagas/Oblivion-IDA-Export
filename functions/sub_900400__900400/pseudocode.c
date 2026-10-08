_DWORD *__thiscall sub_900400(_DWORD *this, char a2)
{
  *this = &hkRayHitCollector::`vftable'; /*0x900408*/
  if ( (a2 & 1) != 0 ) /*0x90040e*/
    FormHeapFree((unsigned int)this); /*0x900411*/
  return this; /*0x90041b*/
}
