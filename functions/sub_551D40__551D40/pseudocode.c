_DWORD *__thiscall sub_551D40(_DWORD *this, float a2)
{
  _DWORD *v3; // esi
  float *v4; // edi
  float *v5; // ebx

  v3 = this + 2;
  v4 = (float *)*(this + 3);
  if ( (unsigned int)v4 > *(this + 4) )
    _invalid_parameter_noinfo();
  while ( 1 )
  {
    v5 = (float *)v3[2];
    if ( v3[1] > (unsigned int)v5 )
      _invalid_parameter_noinfo();
    if ( v4 == v5 )
      break;
    if ( (unsigned int)v4 >= v3[2] )
      _invalid_parameter_noinfo();
    *v4 = *v4 * a2;
    if ( (unsigned int)v4 >= v3[2] )
      _invalid_parameter_noinfo();
    ++v4;
  }
  return this;
}
