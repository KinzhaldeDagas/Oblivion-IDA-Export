int __thiscall sub_7AA4A0(_DWORD *this, int a2)
{
  _DWORD *v2; // eax
  int v3; // ecx

  v2 = (_DWORD *)*(this + 0x88C);
  if ( !v2 )
    return 0;
  while ( 1 )
  {
    v3 = v2[2];
    v2 = (_DWORD *)*v2;
    if ( v3 )
    {
      if ( *(_DWORD *)(v3 + 0x10) == a2 )
        break;
    }
    if ( !v2 )
      return 0;
  }
  return *(_DWORD *)(v3 + 0x1C);
}
