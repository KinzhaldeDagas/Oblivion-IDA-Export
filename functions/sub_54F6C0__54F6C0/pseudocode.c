unsigned int __thiscall sub_54F6C0(_DWORD *this, unsigned int a2)
{
  int v3; // eax

  v3 = *(this + 1); /*0x54f6c3*/
  if ( !v3 || a2 >= (*(this + 2) - v3) / 0x34 ) /*0x54f6e7*/
    _invalid_parameter_noinfo(); /*0x54f6e9*/
  return *(this + 1) + 0x34 * a2; /*0x54f6f6*/
}
