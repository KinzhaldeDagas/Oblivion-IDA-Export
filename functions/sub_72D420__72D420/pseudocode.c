void __thiscall sub_72D420(unsigned int *this, int a2, int a3, unsigned int a4)
{
  unsigned int i; // edi
  int v6; // eax
  unsigned int v7; // eax

  for ( i = 0; i < a4; ++i ) /*0x72d42d*/
  {
    if ( *(_DWORD *)(a3 + 4 * i) == a2 ) /*0x72d43b*/
    {
      v6 = *(this + 1); /*0x72d43d*/
      if ( *(this + 2) == v6 ) /*0x72d443*/
      {
        if ( v6 ) /*0x72d447*/
          v7 = 2 * v6; /*0x72d449*/
        else
          v7 = 1; /*0x72d44d*/
        sub_72CCC0(this, v7); /*0x72d455*/
      }
      *(_WORD *)(*this + 2 * (*(this + 2))++) = i; /*0x72d45f*/
    }
  }
}
