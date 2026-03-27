char __thiscall sub_707770(_DWORD *this)
{
  _DWORD *v1; // esi

  v1 = (_DWORD *)*(this + 3);
  if ( !v1 )
    return 0;
  while ( !(*(unsigned __int8 (__thiscall **)(_DWORD *))(*v1 + 0x5C))(v1) )
  {
    v1 = (_DWORD *)v1[0xD];
    if ( !v1 )
      return 0;
  }
  return 1;
}
