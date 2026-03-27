int __thiscall sub_6D5D10(_DWORD *this, __int16 a2)
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
        return *(_DWORD *)(v4 + 0x20);
    }
    else if ( a2 == 2 )
    {
      v5 = *(this + 0xB);
      if ( v5 )
        return *(_DWORD *)(v5 + 0x28);
    }
  }
  else
  {
    v2 = *(this + 0xB);
    if ( v2 )
      return *(_DWORD *)(v2 + 0x24);
  }
  return 0;
}
