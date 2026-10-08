hkEntityListener *__thiscall hkEntityListener::`scalar deleting destructor'(hkEntityListener *this, char a2)
{
  *(_DWORD *)this = &hkEntityListener::`vftable'; /*0x4ca2d8*/
  if ( (a2 & 1) != 0 ) /*0x4ca2de*/
    FormHeapFree((unsigned int)this); /*0x4ca2e1*/
  return this; /*0x4ca2eb*/
}
