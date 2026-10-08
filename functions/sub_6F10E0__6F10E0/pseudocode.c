unsigned int __thiscall sub_6F10E0(_DWORD *this, unsigned int a2)
{
  int v3; // ecx

  v3 = *(this + 1); /*0x6f10e3*/
  if ( !v3 || a2 >= (*(this + 2) - v3) >> 4 ) /*0x6f10f9*/
    _invalid_parameter_noinfo(); /*0x6f10fb*/
  return *(this + 1) + 0x10 * a2; /*0x6f1108*/
}
