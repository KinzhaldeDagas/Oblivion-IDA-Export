float *__thiscall sub_4C1440(_DWORD *this, int a2, float *a3)
{
  int v3; // eax
  unsigned __int8 v4; // cl
  unsigned __int8 v5; // dl
  unsigned __int8 v6; // bl
  float *result; // eax
  double v8; // rt0
  int v9; // [esp+4h] [ebp+4h]

  v3 = *this + a2 * *(this + 1);
  if ( *((_BYTE *)this + 8) )
  {
    v4 = *(_BYTE *)(v3 + 1);
    v5 = *(_BYTE *)v3;
    v6 = *(_BYTE *)(v3 + 3);
    v9 = *(unsigned __int8 *)(v3 + 2);
    v8 = dbl_A3DDD8;
    *a3 = (double)v9 / v8;
    a3[1] = (double)v4 / v8;
    a3[2] = (double)v5 / v8;
    a3[3] = (double)v6 / v8;
    return a3;
  }
  else
  {
    *a3 = *(float *)v3;
    a3[1] = *(float *)(v3 + 4);
    a3[2] = *(float *)(v3 + 8);
    result = *(float **)(v3 + 0xC);
    *((_DWORD *)a3 + 3) = result;
  }
  return result;
}
