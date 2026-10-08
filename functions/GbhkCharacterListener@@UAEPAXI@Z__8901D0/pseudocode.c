bhkCharacterListener *__thiscall bhkCharacterListener::`scalar deleting destructor'(
        bhkCharacterListener *this,
        char a2)
{
  *(_DWORD *)this = &hkCharacterProxyListener::`vftable'; /*0x8901d8*/
  if ( (a2 & 1) != 0 ) /*0x8901de*/
    MemoryHeap_Free_checked((char *)this - *((unsigned __int8 *)this + 0xFFFFFFFF)); /*0x8901ec*/
  return this; /*0x8901f3*/
}
