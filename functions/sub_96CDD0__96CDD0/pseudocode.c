BOOL __cdecl sub_96CDD0(float a1, int a2, float *a3, float *a4, float *a5, float *a6, float *a7)
{
  float v7; // edx
  double v8; // st7
  double v9; // st7
  double v10; // st7
  double v11; // st7
  double v12; // st7
  double v13; // st7
  double v14; // st7
  double v15; // st6
  double v16; // st5
  int v17; // esi
  float v18; // ecx
  float v19; // edx
  double v20; // st7
  float v22; // [esp+4h] [ebp-48h]
  float v23; // [esp+4h] [ebp-48h]
  float v24; // [esp+4h] [ebp-48h]
  float v25; // [esp+4h] [ebp-48h]
  float v26; // [esp+8h] [ebp-44h]
  float v27; // [esp+8h] [ebp-44h]
  float v28; // [esp+8h] [ebp-44h]
  float v29; // [esp+8h] [ebp-44h]
  float v30; // [esp+Ch] [ebp-40h]
  float v31; // [esp+Ch] [ebp-40h]
  float v32; // [esp+Ch] [ebp-40h]
  float v33; // [esp+Ch] [ebp-40h]
  float v34[6]; // [esp+10h] [ebp-3Ch] BYREF
  float v35[9]; // [esp+28h] [ebp-24h] BYREF

  v7 = a4[1]; /*0x96cdd9*/
  v35[0] = *a4; /*0x96cddc*/
  v35[2] = a4[2]; /*0x96cde3*/
  v8 = *a5; /*0x96cdeb*/
  v35[1] = v7; /*0x96cded*/
  v22 = v8 - *a4; /*0x96cdf4*/
  v9 = a5[1]; /*0x96cdfc*/
  v35[3] = v22; /*0x96cdff*/
  v26 = v9 - a4[1]; /*0x96ce06*/
  v10 = a5[2] - a4[2]; /*0x96ce11*/
  v35[4] = v26; /*0x96ce14*/
  v30 = v10; /*0x96ce1c*/
  v11 = *a6; /*0x96ce24*/
  v35[5] = v30; /*0x96ce26*/
  v23 = v11 - *a4; /*0x96ce2c*/
  v27 = a6[1] - a4[1]; /*0x96ce36*/
  v12 = a6[2] - a4[2]; /*0x96ce41*/
  v35[6] = v23; /*0x96ce48*/
  v31 = v12; /*0x96ce50*/
  v13 = *a3; /*0x96ce58*/
  v35[7] = v27; /*0x96ce5a*/
  v14 = v13 - *a7; /*0x96ce62*/
  v35[8] = v31; /*0x96ce64*/
  v24 = v14; /*0x96ce68*/
  v28 = a3[1] - a7[1]; /*0x96ce72*/
  v32 = a3[2] - a7[2]; /*0x96ce7c*/
  v15 = v32; /*0x96ce90*/
  v16 = v28; /*0x96ce97*/
  if ( g_zeroNiPoint3.x == v24 && g_zeroNiPoint3.y == v16 && g_zeroNiPoint3.z == v15 ) /*0x96cebd*/
  {
    v17 = a2; /*0x96cf2d*/
    v20 = sub_975DF0((float *)(a2 + 4), v35, (float *)&a4, (float *)&a2); /*0x96cf4a*/
  }
  else
  {
    v17 = a2; /*0x96cec3*/
    v18 = *(float *)(a2 + 8); /*0x96cecc*/
    v19 = *(float *)(a2 + 0xC); /*0x96ced1*/
    v34[0] = *(float *)(a2 + 4); /*0x96ced6*/
    v25 = v24 * a1; /*0x96ceda*/
    v34[1] = v18; /*0x96cee2*/
    v34[3] = v25; /*0x96cee8*/
    v34[2] = v19; /*0x96ceec*/
    v29 = v16 * a1; /*0x96cef4*/
    v34[4] = v29; /*0x96ceff*/
    v33 = a1 * v15; /*0x96cf08*/
    v34[5] = v33; /*0x96cf10*/
    v20 = sub_9726E0(v34, v35, (float *)&a5, (float *)&a4, (float *)&a2); /*0x96cf23*/
  }
  *(float *)&a2 = v20; /*0x96cf52*/
  return *(float *)&a2 <= *(float *)(v17 + 0x10) * *(float *)(v17 + 0x10); /*0x96cf70*/
}
