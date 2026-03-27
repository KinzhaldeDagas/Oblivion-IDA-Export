int __thiscall sub_4FCD20(_DWORD *this, unsigned int a2)
{
  _DWORD *v3; // eax
  unsigned int v4; // edx
  int v5; // ecx

  if ( !a2 || a2 > *(this + 0xB) )
    return 0;
  v3 = this + 0x11;
  v4 = 1;
  if ( this != (_DWORD *)0xFFFFFFBC )
  {
    do
    {
      v5 = v3[1];
      if ( !v5 && !*v3 )
        break;
      if ( v4 >= a2 )
        break;
      v3 = (_DWORD *)v3[1];
      ++v4;
    }
    while ( v5 );
  }
  return *v3;
}
