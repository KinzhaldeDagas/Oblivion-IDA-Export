bhkCharacterListener *__thiscall bhkCharacterListener::`scalar deleting destructor'(
        bhkCharacterListener *this,
        char a2)
{
  *(_DWORD *)this = &hkCharacterProxyListener::`vftable';
  if ( (a2 & 1) != 0 )
    MemoryHeap_Free_checked((char *)this - *((unsigned __int8 *)this + 0xFFFFFFFF));
  return this;
}
