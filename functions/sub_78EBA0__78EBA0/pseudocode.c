float *__thiscall sub_78EBA0(unsigned int *this, float *a2)
{
  int i; // edi
  int v4; // ecx
  unsigned int v5; // ebx
  int v6; // eax

  a2[2] = 0.0;
  a2[1] = 0.0;
  *a2 = 0.0;
  for ( i = 0; i < 3; ++i )
  {
    v4 = *(this + 2);
    v5 = *this;
    if ( !v4 || v5 >= *(this + 3) - v4 )
      _invalid_parameter_noinfo();
    v6 = *(this + 2);
    *this += 4;
    a2[i] = *(float *)(v6 + v5);
  }
  return a2;
}
