char __thiscall sub_74AD30(float *this, int a2, int a3, NiPoint3 *a4)
{
  int v5; // eax
  int v7; // esi
  int v8; // edx
  int v9; // ecx
  int v10; // esi
  float v12; // [esp+28h] [ebp+4h]
  float v13; // [esp+28h] [ebp+4h]
  NiPoint3 v14; // 0:^28.12

  v5 = rand(); /*0x74ad38*/
  v7 = *(_DWORD *)(a2 + 0xB4); /*0x74ad41*/
  v8 = v5 % *(unsigned __int16 *)(v7 + 8); /*0x74ad4c*/
  v9 = *(_DWORD *)(v7 + 0x1C); /*0x74ad4e*/
  v10 = *(_DWORD *)(v7 + 0x20); /*0x74ad53*/
  if ( !v9 ) /*0x74ad56*/
    return 0; /*0x74ad5a*/
  *(_DWORD *)a3 = *(_DWORD *)(0xC * v8 + v9); /*0x74ad72*/
  *(_DWORD *)(a3 + 4) = *(_DWORD *)(0xC * v8 + v9 + 4); /*0x74ad78*/
  *(_DWORD *)(a3 + 8) = *(_DWORD *)(0xC * v8 + v9 + 8); /*0x74ad7f*/
  if ( !*((_DWORD *)this + 0x1C) ) /*0x74ad82*/
  {
    if ( *(_DWORD *)(*(_DWORD *)(a2 + 0xB4) + 0x20) ) /*0x74ada9*/
    {
      v12 = a4->y * a4->y + a4->x * a4->x + a4->z * a4->z; /*0x74adc7*/
      v13 = sqrt(v12); /*0x74add4*/
      v14.x = *(float *)(0xC * v8 + v10) * v13; /*0x74adee*/
      v14.y = *(float *)(0xC * v8 + v10 + 4) * v13; /*0x74adfe*/
      v14.z = v13 * *(float *)(0xC * v8 + v10 + 8); /*0x74ae0d*/
      *a4 = v14; /*0x74ae15*/
    }
  }
  sub_74A0A0(this, (NiPoint3 *)a2, (NiPoint3 *)a3, a4); /*0x74ae1d*/
  return 1; /*0x74ad58*/
}
