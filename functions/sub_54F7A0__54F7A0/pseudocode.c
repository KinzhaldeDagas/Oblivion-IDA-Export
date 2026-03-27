unsigned int __thiscall sub_54F7A0(_DWORD *this, unsigned int a2)
{
  int v3; // ecx

  v3 = *(this + 1);
  if ( !v3 || a2 >= (*(this + 2) - v3) >> 2 )
    _invalid_parameter_noinfo();
  return *(this + 1) + 4 * a2;
}
