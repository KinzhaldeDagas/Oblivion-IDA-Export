hkCharacterProxyListener *__thiscall hkCharacterProxyListener::`scalar deleting destructor'(
        hkCharacterProxyListener *this,
        char a2)
{
  *(_DWORD *)this = &hkCharacterProxyListener::`vftable';
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
