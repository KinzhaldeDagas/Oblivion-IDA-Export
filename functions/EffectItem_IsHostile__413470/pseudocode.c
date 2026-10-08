char __thiscall EffectItem_IsHostile(_DWORD *this)
{
  int v1; // eax

  v1 = *(this + 6); /*0x413470*/
  if ( v1 ) /*0x413475*/
    LOBYTE(v1) = *(_BYTE *)(v1 + 0x14); /*0x413477*/
  else
    return *(_BYTE *)(*(this + 7) + 0x58) & 1; /*0x413481*/
  return v1; /*0x41347a*/
}
