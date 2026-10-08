void *__thiscall sub_916310(__m128 *this, int a2)
{
  int v3; // esi
  void *result; // eax
  int i; // ebx
  unsigned int v6; // ebp
  int *v7; // [esp+10h] [ebp+4h]

  v3 = a2 + 8; /*0x91631c*/
  *(float *)(a2 + 4) = *((float *)this + 8); /*0x916321*/
  sub_8C6BE0((_DWORD *)(a2 + 8)); /*0x916324*/
  result = sub_47DCD0((float *)(a2 + 0x20), this + 1); /*0x916330*/
  for ( i = 0; i < *((_DWORD *)this + 0xC); ++i ) /*0x91633a*/
  {
    v6 = *(_DWORD *)(v3 + 0xC); /*0x916343*/
    v7 = (int *)(*((_DWORD *)this + 0xA) + 8 * i); /*0x91634c*/
    if ( v6 >= *(_DWORD *)(v3 + 8) ) /*0x916350*/
      sub_8C69C0((int **)v3, v6 + *(_DWORD *)(v3 + 0x14)); /*0x91635a*/
    result = sub_8C68D0((_DWORD *)v3, v6, v7); /*0x916367*/
  }
  return result; /*0x916375*/
}
