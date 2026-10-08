signed int __thiscall sub_628DB0(_BYTE *this)
{
  signed int result; // eax

  result = 4; /*0x628db0*/
  while ( !*(this + result + 0x2DC) ) /*0x628dbd*/
  {
    if ( --result < 0 ) /*0x628dc2*/
      return 0; /*0x628dc4*/
  }
  return result; /*0x628dc6*/
}
