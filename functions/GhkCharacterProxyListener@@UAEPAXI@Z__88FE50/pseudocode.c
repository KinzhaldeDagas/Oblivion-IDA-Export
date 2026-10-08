hkCharacterProxyListener *__thiscall hkCharacterProxyListener::`scalar deleting destructor'(
        hkCharacterProxyListener *this,
        char a2)
{
  *(_DWORD *)this = &hkCharacterProxyListener::`vftable'; /*0x88fe58*/
  if ( (a2 & 1) != 0 ) /*0x88fe5e*/
    FormHeapFree((unsigned int)this); /*0x88fe61*/
  return this; /*0x88fe6b*/
}
