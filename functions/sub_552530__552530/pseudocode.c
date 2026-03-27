_DWORD *__thiscall sub_552530(int *this, _DWORD *a2, _DWORD *a3)
{
  float *v4; // ebp
  int *v5; // edi
  float *v6; // esi
  float *v7; // ebx
  float *v9; // [esp+10h] [ebp-4h]

  if ( *this != *a3 || *(this + 1) != a3[1] )
    sub_6ED6D0((int)"e:\\networkprojectspc\\oblivionse\\sdk\\facegen\\matrixVT.hpp", 0x167);
  sub_552240(a2, *this, *(this + 1));
  v4 = (float *)a2[3];
  if ( (unsigned int)v4 > a2[4] )
    _invalid_parameter_noinfo();
  v5 = this + 2;
  v6 = (float *)*(this + 3);
  if ( (unsigned int)v6 > v5[2] )
    _invalid_parameter_noinfo();
  v7 = (float *)a3[3];
  if ( (unsigned int)v7 > a3[4] )
    _invalid_parameter_noinfo();
  while ( 1 )
  {
    v9 = (float *)v5[2];
    if ( v5[1] > (unsigned int)v9 )
      _invalid_parameter_noinfo();
    if ( v6 == v9 )
      break;
    if ( (unsigned int)v6 >= v5[2] )
      _invalid_parameter_noinfo();
    if ( (unsigned int)v7 >= a3[4] )
      _invalid_parameter_noinfo();
    if ( (unsigned int)v4 >= a2[4] )
      _invalid_parameter_noinfo();
    *v4 = *v7 + *v6;
    if ( (unsigned int)v6 >= v5[2] )
      _invalid_parameter_noinfo();
    ++v6;
    if ( (unsigned int)v7 >= a3[4] )
      _invalid_parameter_noinfo();
    ++v7;
    if ( (unsigned int)v4 >= a2[4] )
      _invalid_parameter_noinfo();
    ++v4;
  }
  return a2;
}
