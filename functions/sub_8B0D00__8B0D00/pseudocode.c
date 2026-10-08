int __thiscall sub_8B0D00(_DWORD *this)
{
  int v1; // edx
  int result; // eax
  _DWORD *v3; // ecx

  v1 = *(this + 2); /*0x8b0d00*/
  result = 0; /*0x8b0d03*/
  if ( v1 >= 0 ) /*0x8b0d07*/
  {
    v3 = (_DWORD *)*this; /*0x8b0d09*/
    do /*0x8b0d1b*/
    {
      if ( *v3 ) /*0x8b0d10*/
        break; /*0x8b0d13*/
      ++result; /*0x8b0d15*/
      ++v3; /*0x8b0d16*/
    }
    while ( result <= v1 ); /*0x8b0d1b*/
  }
  return result; /*0x8b0d1d*/
}
