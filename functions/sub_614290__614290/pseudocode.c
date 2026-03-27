char __thiscall sub_614290(int this)
{
  _DWORD *v2; // eax
  char result; // al

  if ( !sub_6135F0(this) )
    return *(_BYTE *)(this + 0x174);
  v2 = (_DWORD *)sub_6135F0(this);
  if ( !Actor_IsSwimming(v2) )
    return *(_BYTE *)(this + 0x174);
  if ( Actor_IsSwimming(*(_DWORD **)(this + 0x3C)) )
    return *(_BYTE *)(this + 0x174);
  result = Actor_CanFightInWater(*(void **)(this + 0x3C));
  if ( result )
    return *(_BYTE *)(this + 0x174);
  return result;
}
