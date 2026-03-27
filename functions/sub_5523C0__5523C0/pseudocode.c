_DWORD *__thiscall sub_5523C0(int *this, _DWORD *a2, _DWORD *a3)
{
  int v6; // eax
  unsigned int v7; // edi
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // ecx
  int v13; // [esp+14h] [ebp-10h]
  int v14; // [esp+1Ch] [ebp-8h]
  unsigned int j; // [esp+28h] [ebp+4h]
  unsigned int i; // [esp+2Ch] [ebp+8h]

  if ( *(this + 1) != *a3 )
    sub_6ED6D0((int)"e:\\networkprojectspc\\oblivionse\\sdk\\facegen\\matrixVT.hpp", 0x10D);
  sub_552240(a2, *this, a3[1]);
  for ( i = 0; i < *this; ++i )
  {
    for ( j = 0; j < a3[1]; ++j )
    {
      v6 = a2[3];
      if ( !v6 || !((a2[4] - v6) >> 2) )
        _invalid_parameter_noinfo();
      v7 = 0;
      for ( *(float *)(a2[3] + 4 * i * a2[1] + 4 * j) = 0.0;
            v7 < *(this + 1);
            *(float *)(v14 + 4 * j) = *(float *)(v11 + 4 * j) * *(float *)(v13 + 4 * v7 - 4) + *(float *)(v14 + 4 * j) )
      {
        v8 = a2[3];
        if ( !v8 || !((a2[4] - v8) >> 2) )
          _invalid_parameter_noinfo();
        v9 = *(this + 3);
        v14 = a2[3] + 4 * i * a2[1];
        if ( !v9 || !((*(this + 4) - v9) >> 2) )
          _invalid_parameter_noinfo();
        v10 = a3[3];
        v13 = *(this + 3) + 4 * i * *(this + 1);
        if ( !v10 || !((a3[4] - v10) >> 2) )
          _invalid_parameter_noinfo();
        v11 = a3[3] + 4 * v7 * a3[1];
        ++v7;
      }
    }
  }
  return a2;
}
