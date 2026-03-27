int __thiscall sub_7840B0(_DWORD *this)
{
  int v2; // eax
  int result; // eax
  int v4; // ecx

  if ( !*this )
    _invalid_parameter_noinfo();
  v2 = *(this + 1);
  if ( *(_BYTE *)(v2 + 0x2D) )
  {
    result = *(_DWORD *)(v2 + 8);
    *(this + 1) = result;
    if ( !*(_BYTE *)(result + 0x2D) )
      return result;
    return _invalid_parameter_noinfo();
  }
  v4 = *(_DWORD *)v2;
  if ( *(_BYTE *)(*(_DWORD *)v2 + 0x2D) )
  {
    for ( result = *(_DWORD *)(v2 + 4); !*(_BYTE *)(result + 0x2D); result = *(_DWORD *)(result + 4) )
    {
      if ( *(this + 1) != *(_DWORD *)result )
        break;
      *(this + 1) = result;
    }
    if ( *(_BYTE *)(*(this + 1) + 0x2D) )
      return _invalid_parameter_noinfo();
    *(this + 1) = result;
  }
  else
  {
    for ( result = *(_DWORD *)(v4 + 8); !*(_BYTE *)(result + 0x2D); result = *(_DWORD *)(result + 8) )
      v4 = result;
    *(this + 1) = v4;
  }
  return result;
}
