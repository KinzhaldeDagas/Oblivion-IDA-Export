float *__thiscall sub_4C1440(_DWORD *this, int a2, float *a3)
{
  int v3; // eax
  unsigned __int8 v4; // cl
  unsigned __int8 v5; // dl
  unsigned __int8 v6; // bl
  float *result; // eax
  double v8; // rt0
  int v9; // [esp+4h] [ebp+4h]

  v3 = *this + a2 * *(this + 1); /*0x4c1448*/
  if ( *((_BYTE *)this + 8) ) /*0x4c144a*/
  {
    v4 = *(_BYTE *)(v3 + 1); /*0x4c1450*/
    v5 = *(_BYTE *)v3; /*0x4c1453*/
    v6 = *(_BYTE *)(v3 + 3); /*0x4c1456*/
    v9 = *(unsigned __int8 *)(v3 + 2); /*0x4c145d*/
    v8 = dbl_A3DDD8; /*0x4c147f*/
    *a3 = (double)v9 / v8; /*0x4c1481*/
    a3[1] = (double)v4 / v8; /*0x4c148d*/
    a3[2] = (double)v5 / v8; /*0x4c149a*/
    a3[3] = (double)v6 / v8; /*0x4c14a3*/
    return a3; /*0x4c1461*/
  }
  else
  {
    *a3 = *(float *)v3; /*0x4c14af*/
    a3[1] = *(float *)(v3 + 4); /*0x4c14b4*/
    a3[2] = *(float *)(v3 + 8); /*0x4c14ba*/
    result = *(float **)(v3 + 0xC); /*0x4c14bd*/
    *((_DWORD *)a3 + 3) = result; /*0x4c14c0*/
  }
  return result; /*0x4c14a6*/
}
