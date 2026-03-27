int __thiscall EffectItem_GetDuration(_DWORD *this)
{
  if ( (*(_DWORD *)(*(this + 7) + 0x58) & 0x80) != 0 )
    return 0;
  else
    return *(this + 3);
}
