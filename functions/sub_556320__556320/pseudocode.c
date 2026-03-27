unsigned int __thiscall sub_556320(_DWORD *this, unsigned int a2)
{
  int v3; // ecx

  v3 = *(this + 1);
  if ( !v3 || a2 >= (*(this + 2) - v3) >> 6 )
    _invalid_parameter_noinfo();
  return *(this + 1) + (a2 << 6);
}
