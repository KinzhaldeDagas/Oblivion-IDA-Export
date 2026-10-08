hkPhantomOverlapListener *__thiscall hkPhantomOverlapListener::`scalar deleting destructor'(
        hkPhantomOverlapListener *this,
        char a2)
{
  *(_DWORD *)this = &hkPhantomOverlapListener::`vftable'; /*0x8baaf8*/
  if ( (a2 & 1) != 0 ) /*0x8baafe*/
    FormHeapFree((unsigned int)this); /*0x8bab01*/
  return this; /*0x8bab0b*/
}
