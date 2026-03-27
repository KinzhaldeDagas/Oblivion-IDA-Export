char __thiscall sub_7077A0(_DWORD *this)
{
  _DWORD *v1; // eax
  int v2; // ecx

  v1 = (_DWORD *)*(this + 0x27);
  if ( !v1 )
    return 0;
  while ( 1 )
  {
    v2 = v1[2];
    v1 = (_DWORD *)*v1;
    if ( v2 )
    {
      if ( *(_DWORD *)(v2 + 0xC) )
        break;
    }
    if ( !v1 )
      return 0;
  }
  return 1;
}
