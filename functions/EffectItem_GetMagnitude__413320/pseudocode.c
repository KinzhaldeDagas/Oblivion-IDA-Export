int __thiscall EffectItem_GetMagnitude(_DWORD *this)
{
  if ( (*(_DWORD *)(*(this + 7) + 0x58) & 0x100) != 0 )
    return 0;
  else
    return *(this + 1);
}
