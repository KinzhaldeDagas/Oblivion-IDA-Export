void __thiscall sub_5B1D70(unsigned int *this)
{
  unsigned int *i; // edi
  unsigned int v3; // edi

  for ( i = this; i; i = (unsigned int *)i[1] ) /*0x5b1d78*/
    FormHeapFree(*i); /*0x5b1d83*/
  if ( *(this + 1) ) /*0x5b1d92*/
  {
    do /*0x5b1dac*/
    {
      v3 = *(_DWORD *)(*(this + 1) + 4); /*0x5b1d9b*/
      FormHeapFree(*(this + 1)); /*0x5b1d9f*/
      *(this + 1) = v3; /*0x5b1da9*/
    }
    while ( v3 ); /*0x5b1dac*/
  }
  *this = 0; /*0x5b1daf*/
}
