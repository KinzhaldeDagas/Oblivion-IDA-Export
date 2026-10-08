int __thiscall EffectItem_GetDuration(_DWORD *this)
{
  if ( (*(_DWORD *)(*(this + 7) + 0x58) & 0x80) != 0 ) /*0x4133cc*/
    return 0; /*0x4133ce*/
  else
    return *(this + 3); /*0x4133d1*/
}
