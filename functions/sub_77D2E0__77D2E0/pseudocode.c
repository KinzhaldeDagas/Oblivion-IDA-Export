int __thiscall sub_77D2E0(_DWORD *this, int a2)
{
  int result; // eax
  int v3; // edx
  int v4; // edx

  result = *(this + 0xB);
  if ( result )
  {
    while ( result != a2 )
    {
      result = *(_DWORD *)(result + 0x3C);
      if ( !result )
        return result;
    }
    v3 = *(_DWORD *)(result + 0x3C);
    if ( v3 )
      *(_DWORD *)(v3 + 0x40) = *(_DWORD *)(result + 0x40);
    v4 = *(_DWORD *)(result + 0x40);
    if ( v4 )
      *(_DWORD *)(v4 + 0x3C) = *(_DWORD *)(result + 0x3C);
    if ( result == *(this + 0xB) )
    {
      result = *(_DWORD *)(result + 0x3C);
      *(this + 0xB) = result;
    }
  }
  return result;
}
