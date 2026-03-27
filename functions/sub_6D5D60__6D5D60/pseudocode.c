char __thiscall sub_6D5D60(_DWORD *this, __int16 a2)
{
  int v2; // ecx
  int v4; // ecx
  int v5; // ecx

  if ( a2 )
  {
    if ( a2 == 1 )
    {
      v4 = *(this + 0xB);
      if ( v4 )
        return *(_BYTE *)(v4 + 0x1C);
    }
    else if ( a2 == 2 )
    {
      v5 = *(this + 0xB);
      if ( v5 )
        return *(_BYTE *)(v5 + 0x1E);
    }
  }
  else
  {
    v2 = *(this + 0xB);
    if ( v2 )
      return *(_BYTE *)(v2 + 0x1D);
  }
  return 0;
}
