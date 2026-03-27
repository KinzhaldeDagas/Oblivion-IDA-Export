void __thiscall sub_72D420(unsigned int *this, int a2, int a3, unsigned int a4)
{
  unsigned int i; // edi
  int v6; // eax
  unsigned int v7; // eax

  for ( i = 0; i < a4; ++i )
  {
    if ( *(_DWORD *)(a3 + 4 * i) == a2 )
    {
      v6 = *(this + 1);
      if ( *(this + 2) == v6 )
      {
        if ( v6 )
          v7 = 2 * v6;
        else
          v7 = 1;
        sub_72CCC0(this, v7);
      }
      *(_WORD *)(*this + 2 * (*(this + 2))++) = i;
    }
  }
}
