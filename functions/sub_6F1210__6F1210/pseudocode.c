unsigned int __thiscall sub_6F1210(_DWORD *this, unsigned int a2)
{
  int v3; // ecx

  v3 = *(this + 1); /*0x6f1213*/
  if ( !v3 || a2 >= *(this + 2) - v3 ) /*0x6f1226*/
    _invalid_parameter_noinfo(); /*0x6f1228*/
  return a2 + *(this + 1); /*0x6f1232*/
}
