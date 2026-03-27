int __thiscall sub_6D5C70(_DWORD *this, __int16 a2)
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
        return *(unsigned __int16 *)(v4 + 8);
    }
    else if ( a2 == 2 )
    {
      v5 = *(this + 0xB);
      if ( v5 )
        return *(unsigned __int16 *)(v5 + 0xC);
    }
  }
  else
  {
    v2 = *(this + 0xB);
    if ( v2 )
      return *(unsigned __int16 *)(v2 + 0xA);
  }
  return 0;
}
