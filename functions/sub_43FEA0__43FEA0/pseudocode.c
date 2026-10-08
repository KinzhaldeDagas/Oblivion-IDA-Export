char __thiscall sub_43FEA0(_DWORD *this, int a2)
{
  unsigned int i; // eax

  for ( i = 0; i < uExteriorCellBuffer; ++i ) /*0x43feac*/
  {
    if ( *(_DWORD *)(*(this + 0xF) + 4 * i) == a2 ) /*0x43feba*/
      return 1; /*0x43fec5*/
  }
  return 0; /*0x43fec1*/
}
