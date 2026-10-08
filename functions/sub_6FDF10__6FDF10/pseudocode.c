void __thiscall sub_6FDF10(unsigned int *this, const char *a2)
{
  int v3; // eax
  const char *v4; // ecx
  _BYTE *v5; // edx
  char v6; // al

  FormHeapFree(*(this + 2)); /*0x6fdf18*/
  *(this + 2) = 0; /*0x6fdf26*/
  if ( a2 ) /*0x6fdf2d*/
  {
    v3 = FormHeapAlloc(strlen(a2) + 1); /*0x6fdf43*/
    *(this + 2) = v3; /*0x6fdf4d*/
    if ( v3 ) /*0x6fdf50*/
    {
      v4 = a2; /*0x6fdf52*/
      v5 = (_BYTE *)v3; /*0x6fdf54*/
      do /*0x6fdf62*/
      {
        v6 = *v4; /*0x6fdf56*/
        *v5++ = *v4++; /*0x6fdf58*/
      }
      while ( v6 ); /*0x6fdf62*/
    }
  }
}
