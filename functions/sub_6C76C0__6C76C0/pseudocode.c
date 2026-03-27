bool __thiscall sub_6C76C0(_DWORD *this, int *a2)
{
  int v2; // eax
  int v4; // ecx
  int v6; // ecx

  v2 = *a2;
  v4 = *this;
  if ( v4 )
  {
    if ( !v2 || !(*(unsigned __int8 (__thiscall **)(int, _DWORD))(*(_DWORD *)v4 + 0x2C))(v4, *a2) )
      return 0;
  }
  else if ( v2 )
  {
    return 0;
  }
  v6 = *(this + 1);
  if ( v6 )
  {
    if ( a2[1] && (!a2[1] || (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)v6 + 0x2C))(v6, a2[1])) )
      return *((_BYTE *)this + 0xD) == *((_BYTE *)a2 + 0xD);
    return 0;
  }
  if ( a2[1] )
    return 0;
  return *((_BYTE *)this + 0xD) == *((_BYTE *)a2 + 0xD);
}
