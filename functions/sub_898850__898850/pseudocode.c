_DWORD *__thiscall sub_898850(_DWORD *this, char a2)
{
  *this = &hkBroadPhaseCastCollector::`vftable';
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
