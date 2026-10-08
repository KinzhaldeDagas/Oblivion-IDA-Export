unsigned int __thiscall sub_6F10A0(_DWORD *this, unsigned int a2)
{
  int v3; // eax

  v3 = *(this + 1); /*0x6f10a3*/
  if ( !v3 || a2 >= (*(this + 2) - v3) / 0xC ) /*0x6f10c6*/
    _invalid_parameter_noinfo(); /*0x6f10c8*/
  return *(this + 1) + 0xC * a2; /*0x6f10d3*/
}
