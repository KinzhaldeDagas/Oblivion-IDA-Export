bool __thiscall EffectItem_Match(_DWORD *this, _DWORD *a2)
{
  bool result; // al

  result = *a2 == *this; /*0x412ef8*/
  if ( *a2 == *this && (*(_DWORD *)(*(this + 7) + 0x58) & 0x180000) != 0 ) /*0x412f0b*/
    return a2[5] == *(this + 5); /*0x412f13*/
  return result; /*0x412f16*/
}
