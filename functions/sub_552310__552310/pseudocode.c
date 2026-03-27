_DWORD *__thiscall sub_552310(int *this, _DWORD *a2, float a3)
{
  int *v5; // edi
  float *v6; // esi
  float *v7; // ebx
  unsigned int v9; // [esp+18h] [ebp+4h]

  sub_552240(a2, *this, *(this + 1));
  v5 = this + 2;
  v6 = (float *)*(this + 3);
  if ( (unsigned int)v6 > v5[2] )
    _invalid_parameter_noinfo();
  v7 = (float *)a2[3];
  if ( (unsigned int)v7 > a2[4] )
    _invalid_parameter_noinfo();
  while ( 1 )
  {
    v9 = v5[2];
    if ( v5[1] > v9 )
      _invalid_parameter_noinfo();
    if ( v6 == (float *)v9 )
      break;
    if ( (unsigned int)v6 >= v5[2] )
      _invalid_parameter_noinfo();
    if ( (unsigned int)v7 >= a2[4] )
      _invalid_parameter_noinfo();
    *v7 = *v6 * a3;
    if ( (unsigned int)v6 >= v5[2] )
      _invalid_parameter_noinfo();
    ++v6;
    if ( (unsigned int)v7 >= a2[4] )
      _invalid_parameter_noinfo();
    ++v7;
  }
  return a2;
}
