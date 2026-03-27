int __thiscall sub_52B520(_DWORD *this, int a2)
{
  _DWORD *v2; // eax

  v2 = this + 0x23;
  if ( this != (_DWORD *)0xFFFFFF74 )
  {
    while ( *v2 )
    {
      if ( *(_DWORD *)(*v2 + 0xC) == a2 )
        return *v2;
      v2 = (_DWORD *)v2[1];
      if ( !v2 )
        return 0;
    }
  }
  return 0;
}
