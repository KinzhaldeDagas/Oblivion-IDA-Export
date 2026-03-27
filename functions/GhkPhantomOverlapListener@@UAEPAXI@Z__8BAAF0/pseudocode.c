hkPhantomOverlapListener *__thiscall hkPhantomOverlapListener::`scalar deleting destructor'(
        hkPhantomOverlapListener *this,
        char a2)
{
  *(_DWORD *)this = &hkPhantomOverlapListener::`vftable';
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
