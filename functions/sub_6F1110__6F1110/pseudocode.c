unsigned int __thiscall sub_6F1110(_DWORD *this, unsigned int a2)
{
  int v3; // ecx

  v3 = *(this + 1); /*0x6f1113*/
  if ( !v3 || a2 >= (*(this + 2) - v3) >> 5 ) /*0x6f1129*/
    _invalid_parameter_noinfo(); /*0x6f112b*/
  return *(this + 1) + 0x20 * a2; /*0x6f1138*/
}
