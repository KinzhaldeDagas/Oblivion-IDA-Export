BOOL __thiscall sub_422DF0(_DWORD *this)
{
  _DWORD *v1; // eax
  int v2; // edx

  v1 = this + 3;
  v2 = 0;
  if ( this != (_DWORD *)0xFFFFFFF4 )
  {
    do
    {
      if ( *v1 )
        ++v2;
      v1 = (_DWORD *)v1[1];
    }
    while ( v1 );
  }
  return v2 == 0;
}
