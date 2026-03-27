unsigned int __thiscall sub_6F1210(_DWORD *this, unsigned int a2)
{
  int v3; // ecx

  v3 = *(this + 1);
  if ( !v3 || a2 >= *(this + 2) - v3 )
    _invalid_parameter_noinfo();
  return a2 + *(this + 1);
}
