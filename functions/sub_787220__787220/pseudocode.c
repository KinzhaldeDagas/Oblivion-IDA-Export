float *__cdecl sub_787220(
        float a1,
        unsigned __int16 a2,
        float a3,
        float a4,
        float a5,
        float a6,
        float *a7,
        float *a8,
        __int16 *a9,
        _WORD *a10)
{
  double v11; // st7
  double v12; // st5
  double v13; // st4
  int v14; // esi
  double v15; // st4
  double v16; // st6
  __int16 v18; // ax
  double v19; // st7
  double v20; // [esp+10h] [ebp-8h]
  float v21; // [esp+1Ch] [ebp+4h]
  float v22; // [esp+20h] [ebp+8h]
  float v23; // [esp+20h] [ebp+8h]
  float v24; // [esp+20h] [ebp+8h]
  int v25; // [esp+20h] [ebp+8h]
  float v26; // [esp+20h] [ebp+8h]
  int v27; // [esp+20h] [ebp+8h]
  float v28; // [esp+20h] [ebp+8h]
  float v29; // [esp+20h] [ebp+8h]
  int v30; // [esp+20h] [ebp+8h]
  float v31; // [esp+20h] [ebp+8h]
  float v32; // [esp+20h] [ebp+8h]

  v11 = (double)a2;
  v22 = 1.0 / v11;
  v12 = 1.0 - a1;
  v13 = v22;
  v23 = v12 / v22;
  v14 = Double_To_SInt32(v11);
  v24 = v23 - (double)v14;
  if ( v24 >= (double)flt_A3D65C )
    LOWORD(v14) = v14 + 1;
  *(float *)&v25 = v12 - v13 * (double)(unsigned __int16)v14;
  if ( !(_WORD)v14 || (_WORD)v14 == a2 || (v15 = *(float *)&v25, v26 = fabs(*(float *)&v25), a3 < (double)v26) )
  {
    *a7 = a6;
    v18 = Double_To_SInt32(v11 * v12);
    *a9 = v18;
    if ( v18 >= (__int16)(a2 - 1) )
      v18 = a2 - 1;
    v19 = flt_A40098;
    *a9 = v18;
    *a8 = v19;
    *a10 = 0xFFFF;
    return (float *)a10;
  }
  else
  {
    v21 = 1.0 - (a3 - v15) / (a3 + a3);
    v20 = 1.0 - a4;
    *(float *)&v27 = 1.0 - (v21 - a4) / v20;
    if ( *(float *)&v27 >= 1.0 )
      *(float *)&v27 = 1.0;
    v16 = dbl_A3DDD8 - a6;
    *a9 = v14 - 1;
    v28 = 1.0 - *(float *)&v27;
    v29 = pow(v28, a5);
    *a7 = v29 * v16 + a6;
    *(float *)&v30 = v21 / v20;
    if ( *(float *)&v30 >= 1.0 )
      *(float *)&v30 = 1.0;
    *a10 = v14;
    v31 = 1.0 - *(float *)&v30;
    v32 = pow(v31, a5);
    *a8 = v32 * v16 + a6;
    return a8;
  }
}
