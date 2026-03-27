_DWORD *__thiscall sub_900400(_DWORD *this, char a2)
{
  *this = &hkRayHitCollector::`vftable';
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
