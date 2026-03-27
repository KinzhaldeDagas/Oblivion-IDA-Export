hkCollisionListener *__thiscall hkCollisionListener::`scalar deleting destructor'(hkCollisionListener *this, char a2)
{
  *(_DWORD *)this = &hkCollisionListener::`vftable';
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
