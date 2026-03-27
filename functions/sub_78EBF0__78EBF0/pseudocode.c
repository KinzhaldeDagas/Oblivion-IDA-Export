int __thiscall sub_78EBF0(unsigned int *this)
{
  int v2; // ecx
  unsigned int v3; // edi

  v2 = *(this + 2);
  v3 = *this;
  if ( v2 && v3 < *(this + 3) - v2 )
    return *(_DWORD *)(v3 + v2);
  _invalid_parameter_noinfo();
  return *(_DWORD *)(v3 + *(this + 2));
}
