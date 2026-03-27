BOOL __thiscall sub_593690(_DWORD *this, int a2)
{
  int v2; // eax
  int v3; // eax
  int v4; // eax
  int v5; // ecx
  BOOL result; // eax

  result = 0;
  if ( a2 )
  {
    v2 = *(this + 0x2C);
    if ( v2 )
    {
      if ( *(_DWORD *)(v2 + 8) == *(_DWORD *)(a2 + 8) )
        return 1;
    }
    v3 = *(this + 0x2D);
    if ( v3 )
    {
      if ( *(_DWORD *)(v3 + 8) == *(_DWORD *)(a2 + 8) )
        return 1;
    }
    v4 = *(this + 0x2E);
    if ( v4 )
    {
      if ( *(_DWORD *)(v4 + 8) == *(_DWORD *)(a2 + 8) )
        return 1;
    }
    v5 = *(this + 0x2F);
    if ( v5 )
    {
      if ( *(_DWORD *)(v5 + 8) == *(_DWORD *)(a2 + 8) )
        return 1;
    }
  }
  return result;
}
