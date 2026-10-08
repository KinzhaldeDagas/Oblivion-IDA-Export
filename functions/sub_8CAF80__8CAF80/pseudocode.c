int __thiscall sub_8CAF80(_DWORD *this, int a2)
{
  int i; // edi
  int result; // eax
  int j; // edi

  if ( *(this + 1) ) /*0x8caf84*/
  {
    for ( i = 0; i < *(this + 0x16); ++i ) /*0x8caf93*/
      sub_8CAE40(this + 0xFFFFFFFE, *(int **)(*(this + 0x15) + 4 * i)); /*0x8cafa1*/
  }
  result = a2; /*0x8cafae*/
  *(this + 1) = a2; /*0x8cafb4*/
  if ( a2 ) /*0x8cafb7*/
  {
    result = *(this + 0x16); /*0x8cafb9*/
    for ( j = 0; j < result; ++j ) /*0x8cafc0*/
    {
      sub_8CAD40(this + 0xFFFFFFFE, *(const void ***)(*(this + 0x15) + 4 * j)); /*0x8cafce*/
      result = *(this + 0x16); /*0x8cafd3*/
    }
  }
  return result; /*0x8cafdb*/
}
