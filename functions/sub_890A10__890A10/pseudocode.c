char __thiscall sub_890A10(_DWORD *this, int a2)
{
  int v2; // ecx
  int v3; // edx
  int v4; // eax
  _DWORD *i; // ecx

  if ( !this )
    return 0;
  v2 = *(this + 2);
  if ( !v2 )
    return 0;
  v3 = *(_DWORD *)(v2 + 0x48);
  v4 = 0;
  if ( v3 <= 0 )
    return 0;
  for ( i = *(_DWORD **)(v2 + 0x44); *i != a2; i += 4 )
  {
    if ( ++v4 >= v3 )
      return 0;
  }
  return 1;
}
