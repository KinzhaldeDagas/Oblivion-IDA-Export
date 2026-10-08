hkCollisionListener *__thiscall hkCollisionListener::`scalar deleting destructor'(hkCollisionListener *this, char a2)
{
  *(_DWORD *)this = &hkCollisionListener::`vftable'; /*0x404f48*/
  if ( (a2 & 1) != 0 ) /*0x404f4e*/
    FormHeapFree((unsigned int)this); /*0x404f51*/
  return this; /*0x404f5b*/
}
