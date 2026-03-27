hkEntityListener *__thiscall hkEntityListener::`scalar deleting destructor'(hkEntityListener *this, char a2)
{
  *(_DWORD *)this = &hkEntityListener::`vftable';
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
