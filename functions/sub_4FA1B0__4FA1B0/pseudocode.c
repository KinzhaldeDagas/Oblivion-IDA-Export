char __thiscall sub_4FA1B0(_DWORD *this, int a2)
{
  _DWORD *v2; // eax

  if ( *this )
  {
    v2 = (_DWORD *)(*this + 0x40);
    if ( *this != 0xFFFFFFC0 )
    {
      while ( *v2 )
      {
        if ( *(_DWORD *)(*v2 + 0xC) == a2 )
          return 1;
        v2 = (_DWORD *)v2[1];
        if ( !v2 )
          return 0;
      }
    }
  }
  return 0;
}
