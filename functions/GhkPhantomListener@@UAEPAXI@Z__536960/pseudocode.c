hkPhantomListener *__thiscall hkPhantomListener::`scalar deleting destructor'(hkPhantomListener *this, char a2)
{
  *(_DWORD *)this = &hkPhantomListener::`vftable';
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
