char __thiscall sub_6DAE20(_DWORD *this, __int16 a2)
{
  int v2; // ecx
  int v4; // ecx

  if ( a2 )
  {
    if ( a2 == 1 )
    {
      v4 = *(this + 7);
      if ( v4 )
        return *(_BYTE *)(v4 + 0x14);
    }
  }
  else
  {
    v2 = *(this + 6);
    if ( v2 )
      return *(_BYTE *)(v2 + 0x14);
  }
  return 0;
}
