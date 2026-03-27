unsigned int __thiscall sub_556800(_DWORD *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  unsigned int v4; // edi
  int i; // ebp
  int v6; // eax
  int v7; // eax
  int v8; // eax

  v2 = *(this + 1);
  if ( v2 )
    v3 = (*(this + 2) - v2) / 0xC;
  else
    v3 = 0;
  v4 = 0;
  for ( i = 0; ; i += 0x30 )
  {
    v6 = *(this + 0x25);
    if ( !v6 || v4 >= (*(this + 0x26) - v6) / 0x30 )
      break;
    v7 = *(this + 0x25);
    if ( !v7 || v4 >= (*(this + 0x26) - v7) / 0x30 )
      _invalid_parameter_noinfo();
    v8 = *(this + 0x25);
    if ( *(_DWORD *)(v8 + i + 0x1C) < v3 )
    {
      if ( !v8 || v4 >= (*(this + 0x26) - v8) / 0x30 )
        _invalid_parameter_noinfo();
      v3 = *(_DWORD *)(*(this + 0x25) + i + 0x1C);
    }
    ++v4;
  }
  return v3;
}
