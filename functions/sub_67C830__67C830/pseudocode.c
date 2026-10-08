float *__thiscall sub_67C830(int this, float *a2)
{
  _DWORD *v3; // ecx
  int v4; // edx
  int v6; // edx
  int v7; // ecx
  float y; // ecx
  float z; // edx

  if ( *(_DWORD *)(this + 0x3C) ) /*0x67c833*/
  {
    sub_67C310((int ****)this); /*0x67c839*/
    v3 = *(_DWORD **)(this + 0x3C); /*0x67c83e*/
    v4 = v3[5]; /*0x67c841*/
    v3 += 5; /*0x67c848*/
    *(_DWORD *)a2 = v4; /*0x67c84b*/
    v6 = v3[1]; /*0x67c84d*/
    v7 = v3[2]; /*0x67c850*/
    *((_DWORD *)a2 + 1) = v6; /*0x67c853*/
    *((_DWORD *)a2 + 2) = v7; /*0x67c856*/
    return a2; /*0x67c844*/
  }
  else
  {
    y = g_zeroNiPoint3.y; /*0x67c867*/
    *a2 = g_zeroNiPoint3.x; /*0x67c86d*/
    z = g_zeroNiPoint3.z; /*0x67c86f*/
    a2[1] = y; /*0x67c875*/
    a2[2] = z; /*0x67c878*/
    return a2; /*0x67c85d*/
  }
}
