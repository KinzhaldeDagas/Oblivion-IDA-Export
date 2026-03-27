_DWORD *__thiscall sub_551DA0(_DWORD *this, _DWORD *a2)
{
  float *v3; // esi
  _DWORD *v4; // ebp
  float *v5; // ebx
  _DWORD *v6; // edi
  float *v9; // [esp+18h] [ebp+4h]
  float *v10; // [esp+18h] [ebp+4h]

  if ( *this != *a2 || *(this + 1) != a2[1] )
    sub_6ED6D0((int)"e:\\networkprojectspc\\oblivionse\\sdk\\facegen\\matrixVT.hpp", 0x249);
  v3 = (float *)*(this + 3);
  v4 = this + 2;
  if ( (unsigned int)v3 > v4[2] )
    _invalid_parameter_noinfo();
  v5 = (float *)a2[3];
  v6 = a2 + 2;
  if ( (unsigned int)v5 > a2[4] )
    _invalid_parameter_noinfo();
  while ( 1 )
  {
    v9 = (float *)v4[2];
    if ( v4[1] > (unsigned int)v9 )
      _invalid_parameter_noinfo();
    if ( v3 == v9 )
      break;
    v10 = (float *)v6[2];
    if ( v6[1] > (unsigned int)v10 )
      _invalid_parameter_noinfo();
    if ( v5 == v10 )
      break;
    if ( (unsigned int)v3 >= v4[2] )
      _invalid_parameter_noinfo();
    if ( (unsigned int)v5 >= v6[2] )
      _invalid_parameter_noinfo();
    *v3 = *v5 + *v3;
    if ( (unsigned int)v3 >= v4[2] )
      _invalid_parameter_noinfo();
    ++v3;
    if ( (unsigned int)v5 >= v6[2] )
      _invalid_parameter_noinfo();
    ++v5;
  }
  return this;
}
