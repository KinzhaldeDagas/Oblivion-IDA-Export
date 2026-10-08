int __thiscall EffectItem_GetMagnitude(_DWORD *this)
{
  if ( (*(_DWORD *)(*(this + 7) + 0x58) & 0x100) != 0 ) /*0x41332c*/
    return 0; /*0x41332e*/
  else
    return *(this + 1); /*0x413331*/
}
