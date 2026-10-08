// Compute and cache the camera-relative full-list ranking value at ShadowSceneLight+0xD0.
double __thiscall sub_7D2FF0(int this, float *a2)
{
  bool v3; // zf
  float *v4; // eax
  float v5; // ecx
  float v6; // edx
  double v7; // st7
  double v8; // st7
  double v9; // st6
  double v10; // st6
  double v11; // st7
  float v13; // [esp+4h] [ebp-34h]
  float v14; // [esp+8h] [ebp-30h]
  float v15; // [esp+Ch] [ebp-2Ch]
  float v16; // [esp+10h] [ebp-28h]
  float v17; // [esp+14h] [ebp-24h]
  float v18; // [esp+18h] [ebp-20h]
  float v19; // [esp+1Ch] [ebp-1Ch]
  float v20; // [esp+20h] [ebp-18h]
  float v21; // [esp+24h] [ebp-14h]
  float v22; // [esp+28h] [ebp-10h]
  float v23; // [esp+2Ch] [ebp-Ch]
  float v24; // [esp+3Ch] [ebp+4h]
  float v25; // [esp+3Ch] [ebp+4h]
  float v26; // [esp+3Ch] [ebp+4h]
  float v27; // [esp+3Ch] [ebp+4h]
  float v28; // [esp+3Ch] [ebp+4h]
  float v29; // [esp+3Ch] [ebp+4h]

  v3 = *(_BYTE *)(this + 0xFC) == 0; /*0x7d3000*/
  v14 = a2[0x22]; /*0x7d3013*/
  v15 = a2[0x23]; /*0x7d3017*/
  v16 = a2[0x24]; /*0x7d301b*/
  v4 = *(float **)(this + 0x100); /*0x7d301f*/
  v13 = v4[0x3E]; /*0x7d3037*/
  v17 = v4[0x22]; /*0x7d303d*/
  v18 = v4[0x23]; /*0x7d3047*/
  v19 = v4[0x24]; /*0x7d3051*/
  v5 = v4[0x3C]; /*0x7d3055*/
  v23 = v4[0x3B]; /*0x7d305b*/
  v6 = v4[0x3D]; /*0x7d305f*/
  *(float *)(this + 0xD0) = 1.0; /*0x7d3065*/
  if ( !v3 ) /*0x7d3073*/
  {
    v20 = v14 - v17; /*0x7d3081*/
    v21 = v15 - v18; /*0x7d308d*/
    v22 = v16 - v19; /*0x7d3099*/
    v24 = v21 * v21 + v20 * v20 + v22 * v22; /*0x7d30b9*/
    v25 = sqrt(v24); /*0x7d30c6*/
    v26 = v25 / v13; /*0x7d30d2*/
    v7 = v26; /*0x7d30d6*/
    if ( v26 < 0.0 ) /*0x7d30e5*/
      v26 = 0.0; /*0x7d30e7*/
    if ( v26 <= 1.0 ) /*0x7d3104*/
    {
      if ( v7 >= 0.0 ) /*0x7d3121*/
      {
        v9 = v7; /*0x7d3133*/
        v8 = 1.0; /*0x7d3133*/
      }
      else
      {
        v8 = 1.0; /*0x7d3125*/
        v9 = (float)0.0; /*0x7d312b*/
      }
    }
    else
    {
      v8 = 1.0; /*0x7d3106*/
      v9 = (float)1.0; /*0x7d3112*/
    }
    *(float *)(this + 0xD0) = v8 - v9 * v9; /*0x7d3139*/
  }
  if ( v6 >= (double)v5 ) /*0x7d314e*/
  {
    v27 = v6; /*0x7d3158*/
    v10 = v5; /*0x7d315c*/
    v11 = v6; /*0x7d315c*/
  }
  else
  {
    v10 = v5; /*0x7d3150*/
    v11 = v6; /*0x7d3150*/
    v27 = v5; /*0x7d3152*/
  }
  if ( v27 >= (double)v23 ) /*0x7d316d*/
  {
    if ( v10 <= v11 ) /*0x7d317e*/
      goto LABEL_17; /*0x7d317e*/
  }
  else
  {
    v10 = v23; /*0x7d316f*/
  }
  v11 = v10; /*0x7d3171*/
LABEL_17:
  v28 = v11; /*0x7d3182*/
  v29 = v28 * *(float *)(this + 0xD0); /*0x7d3190*/
  *(float *)(this + 0xD0) = v29; /*0x7d3198*/
  return v29; /*0x7d319e*/
}
