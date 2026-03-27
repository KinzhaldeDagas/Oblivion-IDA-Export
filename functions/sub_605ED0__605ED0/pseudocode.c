bool __thiscall sub_605ED0(_DWORD *this, int a2)
{
  _DWORD *v2; // eax

  v2 = this + 7;
  if ( this != (_DWORD *)0xFFFFFFE4 )
  {
    do
    {
      if ( *v2 == a2 )
        break;
      v2 = (_DWORD *)v2[1];
    }
    while ( v2 );
  }
  return v2 != 0;
}
