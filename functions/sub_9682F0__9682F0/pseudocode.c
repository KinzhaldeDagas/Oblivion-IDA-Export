bool __cdecl sub_9682F0(float a1, int a2, float *a3, float *a4, float *a5)
{
  float *v5; // ecx
  float *v6; // edi
  float *v7; // esi
  double v8; // st6
  double v9; // st7
  double v11; // st6
  double v12; // st5
  float v13; // ecx
  float v14; // edx
  double v15; // st7
  float v16; // [esp+8h] [ebp-2Ch] BYREF
  float v17; // [esp+Ch] [ebp-28h] BYREF
  float v18; // [esp+10h] [ebp-24h]
  float v19; // [esp+14h] [ebp-20h]
  float v20; // [esp+18h] [ebp-1Ch]
  float v21[6]; // [esp+1Ch] [ebp-18h] BYREF

  v5 = (float *)a2; /*0x9682f3*/
  v6 = a4; /*0x9682f9*/
  v7 = (float *)(a2 + 4); /*0x968306*/
  v18 = a4[1] - *(float *)(a2 + 4); /*0x968309*/
  v19 = a4[2] - *(float *)(a2 + 8); /*0x968313*/
  v20 = a4[3] - *(float *)(a2 + 0xC); /*0x96831d*/
  v8 = v19; /*0x968324*/
  v9 = v18; /*0x968337*/
  *(float *)&a2 = *(float *)(a2 + 0x18) * v20 + *(float *)(a2 + 0x10) * v18 + *(float *)(a2 + 0x14) * v19; /*0x96834a*/
  *(float *)&a2 = fabs(*(float *)&a2); /*0x968354*/
  if ( v5[0xD] >= (double)*(float *)&a2 ) /*0x968366*/
  {
    *(float *)&a2 = v5[8] * v8 + v5[7] * v9 + v5[9] * v20; /*0x96837b*/
    *(float *)&a2 = fabs(*(float *)&a2); /*0x968385*/
    if ( v5[0xE] >= (double)*(float *)&a2 ) /*0x968397*/
    {
      *(float *)&a2 = v9 * v5[0xA] + v8 * v5[0xB] + v20 * v5[0xC]; /*0x9683ac*/
      *(float *)&a2 = fabs(*(float *)&a2); /*0x9683b6*/
      if ( v5[0xF] >= (double)*(float *)&a2 ) /*0x9683c8*/
        return 1; /*0x9683cb*/
    }
  }
  v18 = *a5 - *a3; /*0x9683e4*/
  v19 = a5[1] - a3[1]; /*0x9683ee*/
  v20 = a5[2] - a3[2]; /*0x9683f8*/
  v11 = v20; /*0x96840c*/
  v12 = v19; /*0x968413*/
  if ( g_zeroNiPoint3.x == v18 && g_zeroNiPoint3.y == v12 && g_zeroNiPoint3.z == v11 ) /*0x968439*/
  {
    v15 = sub_974C80(a4 + 1, v7, &v16, (float *)&a4, (float *)&a2); /*0x9684bc*/
  }
  else
  {
    v13 = a4[2]; /*0x968441*/
    v14 = a4[3]; /*0x968446*/
    v21[0] = a4[1]; /*0x96844d*/
    v21[1] = v13; /*0x968451*/
    v18 = v18 * a1; /*0x968455*/
    v21[3] = v18; /*0x96845d*/
    v21[2] = v14; /*0x968463*/
    v19 = v12 * a1; /*0x96846c*/
    v21[4] = v19; /*0x968474*/
    v20 = a1 * v11; /*0x968483*/
    v21[5] = v20; /*0x96848b*/
    v15 = sub_975AA0(v21, v7, &v17, &v16, (float *)&a4, (float *)&a2); /*0x96849b*/
  }
  *(float *)&a2 = v15; /*0x9684c4*/
  return *(float *)&a2 <= v6[4] * v6[4]; /*0x9683ca*/
}
