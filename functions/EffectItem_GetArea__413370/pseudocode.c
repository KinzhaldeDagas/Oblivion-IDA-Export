int __thiscall EffectItem_GetArea(_DWORD *this)
{
  if ( (*(_DWORD *)(*(this + 7) + 0x58) & 0x200) != 0 || !*(this + 4) )
    return 0;
  else
    return *(this + 2);
}
