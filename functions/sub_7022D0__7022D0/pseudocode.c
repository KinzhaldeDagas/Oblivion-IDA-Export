bool __thiscall sub_7022D0(const char **this, int a2)
{
  const char *v3; // eax
  int v4; // ecx

  if ( !sub_6D7E00(this, a2) )
    return 0;
  v3 = *(this + 0xD);
  if ( v3 )
  {
    if ( !*(_DWORD *)(a2 + 0x34) || strcmp(v3, *(const char **)(a2 + 0x34)) )
      return 0;
  }
  else if ( *(_DWORD *)(a2 + 0x34) )
  {
    return 0;
  }
  v4 = (int)*(this + 0xF);
  if ( v4 )
  {
    if ( !*(_DWORD *)(a2 + 0x3C)
      || !(*(unsigned __int8 (__thiscall **)(int, _DWORD))(*(_DWORD *)v4 + 0x2C))(v4, *(_DWORD *)(a2 + 0x3C)) )
    {
      return 0;
    }
  }
  else if ( *(_DWORD *)(a2 + 0x3C) )
  {
    return 0;
  }
  return *(this + 6) == *(const char **)(a2 + 0x18)
      && *(this + 8) == *(const char **)(a2 + 0x20)
      && *(this + 7) == *(const char **)(a2 + 0x1C)
      && *((_BYTE *)this + 0x40) == *(_BYTE *)(a2 + 0x40)
      && *((_BYTE *)this + 0x41) == *(_BYTE *)(a2 + 0x41);
}
