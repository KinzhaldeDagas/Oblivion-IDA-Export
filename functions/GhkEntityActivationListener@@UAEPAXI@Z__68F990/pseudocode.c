hkEntityActivationListener *__thiscall hkEntityActivationListener::`scalar deleting destructor'(
        hkEntityActivationListener *this,
        char a2)
{
  *(_DWORD *)this = &hkEntityActivationListener::`vftable'; /*0x68f998*/
  if ( (a2 & 1) != 0 ) /*0x68f99e*/
    FormHeapFree((unsigned int)this); /*0x68f9a1*/
  return this; /*0x68f9ab*/
}
