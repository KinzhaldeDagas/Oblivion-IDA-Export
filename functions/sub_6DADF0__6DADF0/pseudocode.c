int __thiscall sub_6DADF0(_DWORD *this, __int16 a2)
{
  int v2; // ecx
  int v4; // ecx

  if ( a2 )
  {
    if ( a2 == 1 )
    {
      v4 = *(this + 7);
      if ( v4 )
        return *(_DWORD *)(v4 + 0xC);
    }
  }
  else
  {
    v2 = *(this + 6);
    if ( v2 )
      return *(_DWORD *)(v2 + 0xC);
  }
  return 0;
}
