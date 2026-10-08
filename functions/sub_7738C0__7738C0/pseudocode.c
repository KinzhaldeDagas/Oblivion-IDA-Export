unsigned int __thiscall sub_7738C0(_DWORD *this)
{
  unsigned int result; // eax
  _DWORD *i; // ecx

  result = 0; /*0x7738c0*/
  for ( i = this + 5; *i != 0x13; i += 3 ) /*0x7738c2*/
  {
    if ( ++result >= 4 ) /*0x7738d3*/
      return 4; /*0x7738d5*/
  }
  return result; /*0x7738da*/
}
