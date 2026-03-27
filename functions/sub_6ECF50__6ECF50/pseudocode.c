bool __thiscall sub_6ECF50(const char **this, int a2)
{
  int v4; // ecx
  const char *v5; // eax
  const char *v6; // ecx

  if ( !sub_6CE3A0(this, a2) )
    return 0;
  v4 = (int)*(this + 0x11);
  if ( v4 )
  {
    if ( !*(_DWORD *)(a2 + 0x44)
      || *(_DWORD *)(a2 + 0x44)
      && !(*(unsigned __int8 (__thiscall **)(int, _DWORD))(*(_DWORD *)v4 + 0x2C))(v4, *(_DWORD *)(a2 + 0x44)) )
    {
      return 0;
    }
  }
  else if ( *(_DWORD *)(a2 + 0x44) )
  {
    return 0;
  }
  v5 = *(this + 0x10);
  if ( v5 )
  {
    if ( *(_DWORD *)(a2 + 0x40) )
    {
      v6 = *(const char **)(a2 + 0x40);
      if ( !v6 || !strcmp(v5, v6) )
        return 1;
    }
    return 0;
  }
  return !*(_DWORD *)(a2 + 0x40);
}
