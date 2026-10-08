char __thiscall sub_628D30(_BYTE *this)
{
  int v1; // eax

  v1 = 4; /*0x628d30*/
  while ( !*(this + v1 + 0x2DC) ) /*0x628d3d*/
  {
    if ( --v1 <= 0 ) /*0x628d44*/
      return 1; /*0x628d48*/
  }
  return 0; /*0x628d48*/
}
