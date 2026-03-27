double __thiscall sub_78EB10(unsigned int *this)
{
  int v2; // ecx
  unsigned int v3; // edi
  int v4; // eax

  v2 = *(this + 2);
  v3 = *this;
  if ( !v2 || v3 >= *(this + 3) - v2 )
    _invalid_parameter_noinfo();
  v4 = *(this + 2);
  *this += 4;
  return *(float *)(v4 + v3);
}
