char __thiscall EffectItem_IsHostile(_DWORD *this)
{
  int v1; // eax

  v1 = *(this + 6);
  if ( v1 )
    LOBYTE(v1) = *(_BYTE *)(v1 + 0x14);
  else
    return *(_BYTE *)(*(this + 7) + 0x58) & 1;
  return v1;
}
