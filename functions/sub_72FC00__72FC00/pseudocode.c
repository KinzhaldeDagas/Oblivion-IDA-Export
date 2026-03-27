float *__cdecl sub_72FC00(float *a1, float a2, float *a3, float *a4)
{
  double v5; // st7
  double v6; // st7
  float v8; // [esp+4h] [ebp-1Ch]
  float v9; // [esp+8h] [ebp-18h]
  float v10; // [esp+Ch] [ebp-14h]
  float v11; // [esp+Ch] [ebp-14h]
  int v12; // [esp+2Ch] [ebp+Ch]
  float v13; // [esp+2Ch] [ebp+Ch]
  float v14; // [esp+2Ch] [ebp+Ch]
  float v15; // [esp+2Ch] [ebp+Ch]
  float v16; // [esp+2Ch] [ebp+Ch]
  float v17; // [esp+2Ch] [ebp+Ch]
  float v18; // [esp+2Ch] [ebp+Ch]

  *(float *)&v12 = *a3 * *a4 + a3[1] * a4[1] + a3[2] * a4[2] + a3[3] * a4[3];
  v10 = *(float *)&v12;
  if ( a2 > (double)flt_A3D65C )
  {
    v13 = 1.0 - a2;
    v5 = 1.0 - sub_72FBA0(v13, v10);
  }
  else
  {
    v5 = sub_72FBA0(a2, *(float *)&v12);
  }
  v14 = v5;
  v6 = v14;
  v15 = a3[3] + (a4[3] - a3[3]) * v14;
  v11 = v15;
  v16 = (a4[2] - a3[2]) * v6 + a3[2];
  v9 = v16;
  v17 = (a4[1] - a3[1]) * v6 + a3[1];
  v8 = v17;
  v18 = v6 * (*a4 - *a3) + *a3;
  sub_714C40(a1, v18, v8, v9, v11);
  sub_72FAC0(a1);
  return a1;
}
