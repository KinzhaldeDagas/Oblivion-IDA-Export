char __thiscall sub_708CE0(_DWORD *this, int a2)
{
  _DWORD *v2; // eax
  bool v3; // zf

  v2 = (_DWORD *)*(this + 0x34);
  if ( !v2 )
    return 0;
  while ( 1 )
  {
    v3 = v2[2] == a2;
    v2 = (_DWORD *)*v2;
    if ( v3 )
      break;
    if ( !v2 )
      return 0;
  }
  return 1;
}
