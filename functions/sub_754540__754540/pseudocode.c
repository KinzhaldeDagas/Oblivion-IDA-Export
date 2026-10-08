int __fastcall sub_754540(float *a1, int a2, float a3, float *a4, int a5, int a6)
{
  float *v7; // edi
  float *v8; // ebp
  char v9; // bl
  double v10; // st4
  char v11; // cl
  double v12; // st7
  double v13; // st6
  double v14; // st5
  double v15; // st6
  double v16; // st7
  float *v17; // ecx
  double v18; // st7
  double v19; // st6
  double v20; // rtt
  double v21; // st6
  double v22; // st6
  int result; // eax
  float v24; // [esp+0h] [ebp-48h]
  float v25; // [esp+20h] [ebp-28h]
  float v26; // [esp+20h] [ebp-28h]
  float v27; // [esp+20h] [ebp-28h]
  float v28; // [esp+20h] [ebp-28h]
  float v29; // [esp+24h] [ebp-24h]
  float v30; // [esp+28h] [ebp-20h]
  float v31; // [esp+2Ch] [ebp-1Ch]
  float v32; // [esp+2Ch] [ebp-1Ch]
  float v33; // [esp+2Ch] [ebp-1Ch]
  float v34; // [esp+2Ch] [ebp-1Ch]
  float v35; // [esp+2Ch] [ebp-1Ch]
  float v36; // [esp+2Ch] [ebp-1Ch]
  float v37; // [esp+2Ch] [ebp-1Ch]
  float v38; // [esp+2Ch] [ebp-1Ch]
  float v39; // [esp+30h] [ebp-18h]
  float v40; // [esp+30h] [ebp-18h]
  float v41; // [esp+30h] [ebp-18h]
  float v42; // [esp+34h] [ebp-14h]
  float v43; // [esp+34h] [ebp-14h]
  float v44; // [esp+34h] [ebp-14h]
  float v45; // [esp+38h] [ebp-10h]
  float v46; // [esp+38h] [ebp-10h]
  float v47; // [esp+38h] [ebp-10h]
  float v48; // [esp+3Ch] [ebp-Ch]
  float v49; // [esp+3Ch] [ebp-Ch]
  float v50; // [esp+40h] [ebp-8h]
  float v51; // [esp+40h] [ebp-8h]
  float v52; // [esp+44h] [ebp-4h]
  float v53; // [esp+44h] [ebp-4h]
  float v54; // [esp+4Ch] [ebp+4h]

  v7 = (float *)(*(_DWORD *)(a5 + 0x1C) + 0xC * (unsigned __int16)a6); /*0x754558*/
  v8 = (float *)(*(_DWORD *)(a5 + 0x5C) + 0x1C * (unsigned __int16)a6); /*0x75456c*/
  v9 = 0; /*0x75456f*/
  v25 = *v7 - a1[0xF]; /*0x754571*/
  v29 = v7[1] - a1[0x10]; /*0x75457b*/
  v30 = v7[2] - a1[0x11]; /*0x754585*/
  v31 = v30 * v30 + v25 * v25 + v29 * v29; /*0x7545af*/
  v32 = v31 - a1[0xE]; /*0x7545ba*/
  if ( flt_A8677C >= -v32 ) /*0x7545d9*/
  {
    v10 = a3; /*0x7545e3*/
    v11 = 0; /*0x7545e5*/
    if ( v32 <= (double)flt_A8677C ) /*0x7545ee*/
    {
      v12 = a3; /*0x7547da*/
LABEL_16:
      v17 = a4; /*0x7547de*/
      goto LABEL_17; /*0x7547de*/
    }
  }
  else
  {
    v10 = a3; /*0x7545db*/
    v11 = 1; /*0x7545dd*/
  }
  v12 = v10; /*0x754609*/
  v33 = v30 * v8[2] + v25 * *v8 + v29 * v8[1]; /*0x75460d*/
  v26 = -v33; /*0x754617*/
  v13 = v26; /*0x75461b*/
  if ( !v11 && v13 <= 0.0 ) /*0x75462a*/
    goto LABEL_16; /*0x75462a*/
  v34 = v8[2] * v8[2] + *v8 * *v8 + v8[1] * v8[1]; /*0x75464d*/
  v14 = v13 / v34; /*0x754659*/
  v15 = v34; /*0x754659*/
  v27 = v14; /*0x75465b*/
  v39 = v27 * *v8; /*0x754668*/
  v42 = v8[1] * v27; /*0x754671*/
  v45 = v8[2] * v27; /*0x75467a*/
  v48 = *v7 + v39; /*0x754684*/
  v50 = v42 + v7[1]; /*0x75468f*/
  v52 = v7[2] + v45; /*0x75469a*/
  v40 = v48 - a1[0xF]; /*0x7546a5*/
  v43 = v50 - a1[0x10]; /*0x7546b0*/
  v46 = v52 - a1[0x11]; /*0x7546bb*/
  v35 = v43 * v43 + v40 * v40 + v46 * v46; /*0x7546db*/
  if ( !v11 && a1[0xE] <= (double)v35 ) /*0x7546ef*/
    goto LABEL_16; /*0x7546ef*/
  v36 = a1[0xE] - v35; /*0x754700*/
  v37 = v36 / v15; /*0x75470c*/
  v38 = sqrt(v37); /*0x754719*/
  if ( v11 ) /*0x754704*/
    v16 = v38 + v27; /*0x754721*/
  else
    v16 = v27 - v38; /*0x754746*/
  v17 = a4; /*0x75474a*/
  v28 = v16; /*0x75474e*/
  v18 = v28; /*0x754752*/
  v19 = a3; /*0x754760*/
  if ( *a4 - a3 <= v28 ) /*0x754769*/
  {
    v12 = a3; /*0x7547d2*/
  }
  else
  {
    v9 = 1; /*0x75476d*/
    v54 = v18 + v19; /*0x754771*/
    *a4 = v54; /*0x754779*/
    a1[8] = v54; /*0x75477b*/
    v49 = v18 * *v8; /*0x754783*/
    v51 = v8[1] * v18; /*0x75478c*/
    v20 = v19; /*0x754795*/
    v21 = v18 * v8[2]; /*0x754795*/
    v12 = v20; /*0x754795*/
    v53 = v21; /*0x754797*/
    v41 = *v7 + v49; /*0x7547a1*/
    v44 = v51 + v7[1]; /*0x7547b0*/
    v22 = v7[2]; /*0x7547b8*/
    a1[5] = v41; /*0x7547bb*/
    a1[6] = v44; /*0x7547c2*/
    v47 = v22 + v53; /*0x7547c5*/
    a1[7] = v47; /*0x7547cd*/
  }
LABEL_17:
  v24 = v12; /*0x7547e4*/
  result = sub_75ED20(a1, v24, (int)v17, a5, a6); /*0x7547f5*/
  if ( !result )
    return v9 != 0 ? (unsigned int)a1 : 0;
  return result; /*0x754806*/
}
