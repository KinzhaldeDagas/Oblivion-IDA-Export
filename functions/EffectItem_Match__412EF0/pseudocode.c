bool __thiscall EffectItem_Match(_DWORD *this, _DWORD *a2)
{
  bool result; // al

  result = *a2 == *this;
  if ( *a2 == *this && (*(_DWORD *)(*(this + 7) + 0x58) & 0x180000) != 0 )
    return a2[5] == *(this + 5);
  return result;
}
