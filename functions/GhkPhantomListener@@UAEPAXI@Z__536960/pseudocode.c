hkPhantomListener *__thiscall hkPhantomListener::`scalar deleting destructor'(hkPhantomListener *this, char a2)
{
  *(_DWORD *)this = &hkPhantomListener::`vftable'; /*0x536968*/
  if ( (a2 & 1) != 0 ) /*0x53696e*/
    FormHeapFree((unsigned int)this); /*0x536971*/
  return this; /*0x53697b*/
}
