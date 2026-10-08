_DWORD *__thiscall sub_898850(_DWORD *this, char a2)
{
  *this = &hkBroadPhaseCastCollector::`vftable'; /*0x898858*/
  if ( (a2 & 1) != 0 ) /*0x89885e*/
    FormHeapFree((unsigned int)this); /*0x898861*/
  return this; /*0x89886b*/
}
