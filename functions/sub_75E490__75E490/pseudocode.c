bool __thiscall sub_75E490(const char **this, int a2)
{
  const char *v4; // eax
  const char *v5; // ecx

  if ( !sub_6CE3A0(this, a2) )
    return 0;
  if ( *(this + 0x11) )
  {
    if ( !*(_DWORD *)(a2 + 0x44)
      || *(_DWORD *)(a2 + 0x44)
      && !(*(unsigned __int8 (__thiscall **)(_DWORD, _DWORD))(*(_DWORD *)*(this + 0x11) + 0x2C))(
            *(this + 0x11),
            *(_DWORD *)(a2 + 0x44)) )
    {
      return 0;
    }
  }
  else if ( *(_DWORD *)(a2 + 0x44) )
  {
    return 0;
  }
  v4 = *(this + 0x10);
  if ( v4 )
  {
    if ( *(_DWORD *)(a2 + 0x40) )
    {
      v5 = *(const char **)(a2 + 0x40);
      if ( !v5 || !strcmp(v4, v5) )
        return 1;
    }
    return 0;
  }
  return !*(_DWORD *)(a2 + 0x40);
}
