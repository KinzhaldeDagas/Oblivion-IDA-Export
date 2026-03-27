hkEntityActivationListener *__thiscall hkEntityActivationListener::`scalar deleting destructor'(
        hkEntityActivationListener *this,
        char a2)
{
  *(_DWORD *)this = &hkEntityActivationListener::`vftable';
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
