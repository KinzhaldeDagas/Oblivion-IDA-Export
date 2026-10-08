char __thiscall sub_628D50(_BYTE *this)
{
  int v1; // eax

  v1 = 4; /*0x628d50*/
  while ( !*(this + v1 + 0x2DC) ) /*0x628d5d*/
  {
    if ( --v1 < 1 ) /*0x628d65*/
      return 1; /*0x628d69*/
  }
  return 0; /*0x628d69*/
}
