float *__cdecl sub_923C00(int a1, int a2)
{
  _DWORD *i; // eax
  int v3; // ecx
  float *v4; // eax
  float *result; // eax
  int v6; // edx

  for ( i = *(_DWORD **)(a1 + 0x1C); (unsigned int)i < *(_DWORD *)(a1 + 0x4C); ++i ) /*0x923c0b*/
    *i = 0; /*0x923c10*/
  if ( !a2 ) /*0x923c26*/
  {
    v3 = *(_DWORD *)(a1 + 0x34); /*0x923c2b*/
    *(_DWORD *)(a1 + 0x30) = *(_DWORD *)(a1 + 0x24); /*0x923c2e*/
    *(_DWORD *)(a1 + 0x40) = v3; /*0x923c31*/
  }
  v4 = *(float **)(a1 + 0x30); /*0x923c34*/
  if ( v4 != *(float **)(a1 + 0x2C) ) /*0x923c3a*/
    sub_9202A0(*(_DWORD *)(a1 + 4), v4, *(_DWORD *)(a1 + 0xC), *(float **)(a1 + 0x1C)); /*0x923c49*/
  result = *(float **)(a1 + 0x40); /*0x923c51*/
  if ( result != *(float **)(a1 + 0x3C) ) /*0x923c57*/
    result = (float *)sub_9202A0(*(_DWORD *)(a1 + 4), result, *(_DWORD *)(a1 + 0xC), *(float **)(a1 + 0x1C)); /*0x923c66*/
  v6 = *(_DWORD *)(a1 + 0x3C); /*0x923c71*/
  *(_DWORD *)(a1 + 0x30) = *(_DWORD *)(a1 + 0x2C); /*0x923c74*/
  *(_DWORD *)(a1 + 0x40) = v6; /*0x923c77*/
  return result; /*0x923c7a*/
}
