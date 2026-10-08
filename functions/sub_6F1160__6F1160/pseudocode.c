unsigned int __thiscall sub_6F1160(_DWORD *this, unsigned int a2)
{
  int v3; // eax

  v3 = *(this + 1); /*0x6f1163*/
  if ( !v3 || a2 >= (*(this + 2) - v3) / 0x2C ) /*0x6f1187*/
    _invalid_parameter_noinfo(); /*0x6f1189*/
  return *(this + 1) + 0x2C * a2; /*0x6f1196*/
}
