float *__cdecl sub_6BBEE0(float a1, int a2, int a3, int a4, float *a5, float *a6, float *a7, float *a8)
{
  void (__cdecl *v8)(_DWORD, int, int, float *); // esi
  double v10; // st7
  double v11; // st5
  double v12; // st4
  double v13; // rt2
  double v14; // st4
  double v15; // st7
  float *v16; // edi
  double v17; // st7
  double v18; // st7
  bool v19; // c0
  bool v20; // c3
  double v21; // st7
  float v23; // edx
  double v24; // st7
  double v25; // st6
  float v26; // [esp+1Ch] [ebp-28h]
  float v27; // [esp+20h] [ebp-24h] BYREF
  float v28; // [esp+24h] [ebp-20h]
  float v29; // [esp+28h] [ebp-1Ch]
  float v30; // [esp+2Ch] [ebp-18h] BYREF
  float v31; // [esp+30h] [ebp-14h]
  float v32; // [esp+34h] [ebp-10h]
  float v33; // [esp+38h] [ebp-Ch]
  float v34; // [esp+3Ch] [ebp-8h]
  float v35; // [esp+40h] [ebp-4h]
  float v36; // [esp+54h] [ebp+10h]
  float v37; // [esp+54h] [ebp+10h]
  float v38; // [esp+54h] [ebp+10h]
  float v39; // [esp+54h] [ebp+10h]
  float v40; // [esp+54h] [ebp+10h]
  float v41; // [esp+54h] [ebp+10h]
  float v42; // [esp+54h] [ebp+10h]
  float v43; // [esp+58h] [ebp+14h]
  float v44; // [esp+58h] [ebp+14h]

  v8 = *(void (__cdecl **)(_DWORD, int, int, float *))(4 * a4 + 0xB3D668); /*0x6bbef8*/
  (*(void (__cdecl **)(_DWORD, int, int, float *))(4 * a4 + 0xB3D250))(LODWORD(a1), a2, a3, &v27); /*0x6bbf0f*/
  v8(LODWORD(a1), a2, a3, &v30); /*0x6bbf23*/
  v26 = v28 * v28 + v27 * v27 + v29 * v29; /*0x6bbf44*/
  v36 = sqrt(v26); /*0x6bbf51*/
  v37 = 1.0 / v36; /*0x6bbf61*/
  v10 = v27; /*0x6bbf65*/
  v33 = v27 * v37; /*0x6bbf75*/
  v11 = v28; /*0x6bbf7d*/
  *a5 = v33; /*0x6bbf81*/
  v34 = v11 * v37; /*0x6bbf87*/
  v12 = v29; /*0x6bbf8f*/
  a5[1] = v34; /*0x6bbf93*/
  v13 = v12; /*0x6bbf9a*/
  v35 = v37 * v12; /*0x6bbf9c*/
  v14 = v32; /*0x6bbfa4*/
  a5[2] = v35; /*0x6bbfa8*/
  v33 = v14 * v11 - v31 * v13; /*0x6bbfbb*/
  v34 = v13 * v30 - v14 * v10; /*0x6bbfd1*/
  v35 = v10 * v31 - v30 * v11; /*0x6bbfdb*/
  v43 = v34 * v34 + v33 * v33 + v35 * v35; /*0x6bbffb*/
  v44 = sqrt(v43); /*0x6bc008*/
  v38 = v44 * v37 * v37; /*0x6bc01e*/
  *a8 = v38; /*0x6bc026*/
  v39 = fabs(v38); /*0x6bc02a*/
  v15 = flt_A372CC; /*0x6bc03c*/
  if ( v15 >= v39 ) /*0x6bc041*/
  {
    *a8 = 0.0; /*0x6bc0ff*/
    v41 = fabs(*a5); /*0x6bc105*/
    if ( v41 > v15 ) /*0x6bc114*/
    {
      v21 = 0.0; /*0x6bc144*/
    }
    else
    {
      v42 = fabs(a5[1]); /*0x6bc11b*/
      v19 = v42 < v15; /*0x6bc123*/
      v20 = v42 == v15; /*0x6bc123*/
      v21 = 0.0; /*0x6bc127*/
      if ( v19 || v20 ) /*0x6bc129*/
      {
        v16 = a6; /*0x6bc131*/
        a6[2] = a5[1]; /*0x6bc135*/
        a6[1] = -a5[2]; /*0x6bc13d*/
        *a6 = 0.0; /*0x6bc140*/
        goto LABEL_8; /*0x6bc142*/
      }
    }
    v16 = a6; /*0x6bc149*/
    *a6 = a5[1]; /*0x6bc14d*/
    a6[1] = -*a5; /*0x6bc153*/
    a6[2] = v21; /*0x6bc156*/
    goto LABEL_8; /*0x6bc156*/
  }
  v16 = a6; /*0x6bc049*/
  v40 = v32 * v29 + v30 * v27 + v31 * v28; /*0x6bc07d*/
  v27 = v27 * v40; /*0x6bc08b*/
  v28 = v28 * v40; /*0x6bc095*/
  v29 = v40 * v29; /*0x6bc09d*/
  v33 = v30 * v26; /*0x6bc0af*/
  v34 = v31 * v26; /*0x6bc0b9*/
  v35 = v26 * v32; /*0x6bc0bf*/
  v30 = v33 - v27; /*0x6bc0cb*/
  v17 = v34; /*0x6bc0d3*/
  *a6 = v30; /*0x6bc0d7*/
  v31 = v17 - v28; /*0x6bc0dd*/
  v18 = v35; /*0x6bc0e5*/
  a6[1] = v31; /*0x6bc0e9*/
  v32 = v18 - v29; /*0x6bc0f0*/
  a6[2] = v32; /*0x6bc0f8*/
LABEL_8:
  Vector3_NormalizeInPlace(v16); /*0x6bc159*/
  v33 = v16[2] * a5[1] - a5[2] * v16[1]; /*0x6bc174*/
  v34 = *v16 * a5[2] - v16[2] * *a5; /*0x6bc188*/
  v23 = v34; /*0x6bc18c*/
  v24 = *a5 * v16[1]; /*0x6bc192*/
  v25 = *v16 * a5[1]; /*0x6bc198*/
  *a7 = v33; /*0x6bc19b*/
  a7[1] = v23; /*0x6bc19e*/
  v35 = v24 - v25; /*0x6bc1a4*/
  a7[2] = v35; /*0x6bc1ac*/
  return a7; /*0x6bc1af*/
}
