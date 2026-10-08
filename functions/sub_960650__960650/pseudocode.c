BOOL __cdecl sub_960650(float a1, int a2, float *a3, int a4, float *a5)
{
  double v5; // st6
  double v6; // st5
  int v7; // esi
  float v8; // ecx
  float v9; // edx
  int v10; // edi
  float v11; // eax
  float v12; // ecx
  float v13; // edx
  double v14; // st7
  double v15; // st7
  float v17; // [esp+8h] [ebp-30h]
  float v18; // [esp+8h] [ebp-30h]
  float v19; // [esp+Ch] [ebp-2Ch]
  float v20; // [esp+Ch] [ebp-2Ch]
  float v21; // [esp+10h] [ebp-28h]
  float v22; // [esp+10h] [ebp-28h]
  float v23[9]; // [esp+14h] [ebp-24h] BYREF

  v17 = *a5 - *a3; /*0x960661*/
  v19 = a5[1] - a3[1]; /*0x96066b*/
  v21 = a5[2] - a3[2]; /*0x960675*/
  v5 = v21; /*0x960689*/
  v6 = v19; /*0x960690*/
  if ( g_zeroNiPoint3.x == v17 && g_zeroNiPoint3.y == v6 && g_zeroNiPoint3.z == v5 ) /*0x9606b6*/
  {
    v7 = a4; /*0x960742*/
    v10 = a2; /*0x960748*/
    v14 = sub_96FCD0((float *)(a2 + 0x20), (float *)(a4 + 0x20), (float *)&a4, (float *)&a2); /*0x960762*/
  }
  else
  {
    v7 = a4; /*0x9606c0*/
    v8 = *(float *)(a4 + 0x24); /*0x9606c9*/
    v9 = *(float *)(a4 + 0x28); /*0x9606ce*/
    v10 = a2; /*0x9606d3*/
    v18 = v17 * a1; /*0x9606d7*/
    v23[0] = *(float *)(a4 + 0x20); /*0x9606db*/
    v11 = *(float *)(a4 + 0x2C); /*0x9606df*/
    v23[1] = v8; /*0x9606e4*/
    v12 = *(float *)(a4 + 0x30); /*0x9606e8*/
    v23[3] = v11; /*0x9606eb*/
    v20 = v6 * a1; /*0x9606f3*/
    v23[2] = v9; /*0x9606f7*/
    v13 = *(float *)(a4 + 0x34); /*0x9606fb*/
    v23[4] = v12; /*0x960700*/
    v23[6] = v18; /*0x960708*/
    v22 = a1 * v5; /*0x96070c*/
    v23[5] = v13; /*0x960710*/
    v23[7] = v20; /*0x960718*/
    v23[8] = v22; /*0x960726*/
    v14 = sub_9708E0((float *)(a2 + 0x20), v23, (float *)&a4, (float *)&a5, (float *)&a2); /*0x960738*/
  }
  *(float *)&a4 = v14; /*0x96076a*/
  *(float *)&a2 = *(float *)(v10 + 0x38) + *(float *)(v7 + 0x38); /*0x960776*/
  v15 = *(float *)&a4; /*0x960786*/
  *(float *)&a4 = *(float *)&a2 * *(float *)&a2; /*0x960788*/
  return *(float *)&a4 >= v15; /*0x96079e*/
}
