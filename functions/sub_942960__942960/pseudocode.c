int __thiscall sub_942960(_DWORD *this)
{
  int v1; // edx
  int result; // eax
  _DWORD *v3; // ecx

  v1 = *(this + 2); /*0x942960*/
  result = 0; /*0x942963*/
  if ( v1 >= 0 ) /*0x942967*/
  {
    v3 = (_DWORD *)*this; /*0x942969*/
    do /*0x94297b*/
    {
      if ( *v3 != 0xFFFFFFFF ) /*0x942973*/
        break; /*0x942973*/
      ++result; /*0x942975*/
      ++v3; /*0x942976*/
    }
    while ( result <= v1 ); /*0x94297b*/
  }
  return result; /*0x94297d*/
}
