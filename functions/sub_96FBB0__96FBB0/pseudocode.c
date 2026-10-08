double __cdecl sub_96FBB0(float *a1, float *a2, float *a3)
{
  double v3; // st6
  double v4; // st5
  double v5; // st7
  double v6; // st4
  double v7; // st7
  float v9; // [esp+0h] [ebp-18h]
  float v10; // [esp+0h] [ebp-18h]
  float v11; // [esp+4h] [ebp-14h]
  float v12; // [esp+4h] [ebp-14h]
  float v13; // [esp+8h] [ebp-10h]
  float v14; // [esp+8h] [ebp-10h]
  float v15; // [esp+Ch] [ebp-Ch]
  float v16; // [esp+10h] [ebp-8h]
  float v17; // [esp+14h] [ebp-4h]
  float v18; // [esp+1Ch] [ebp+4h]
  float v19; // [esp+1Ch] [ebp+4h]
  float v20; // [esp+1Ch] [ebp+4h]

  v9 = *a1 - *a2; /*0x96fbc3*/
  v11 = a1[1] - a2[1]; /*0x96fbcc*/
  v13 = a1[2] - a2[2]; /*0x96fbd6*/
  v3 = v11; /*0x96fbdd*/
  v4 = v9; /*0x96fbe5*/
  v5 = v13; /*0x96fbfa*/
  v18 = a2[5] * v13 + a2[4] * v11 + v9 * a2[3]; /*0x96fbfe*/
  v6 = v18; /*0x96fc02*/
  *a3 = v18; /*0x96fc06*/
  if ( v18 > 0.0 ) /*0x96fc11*/
  {
    v19 = a2[4] * a2[4] + a2[3] * a2[3] + a2[5] * a2[5]; /*0x96fc37*/
    if ( v19 > v6 ) /*0x96fc46*/
    {
      v20 = v6 / v19; /*0x96fc64*/
      *a3 = v20; /*0x96fc6c*/
      v15 = a2[3] * v20; /*0x96fc7f*/
      v16 = a2[4] * v20; /*0x96fc88*/
      v17 = v20 * a2[5]; /*0x96fc8f*/
      v10 = v4 - v15; /*0x96fc97*/
      v12 = v3 - v16; /*0x96fc9e*/
      v7 = v5 - v17; /*0x96fca2*/
    }
    else
    {
      *a3 = 1.0; /*0x96fc4e*/
      v10 = v4 - a2[3]; /*0x96fc53*/
      v12 = v3 - a2[4]; /*0x96fc59*/
      v7 = v5 - a2[5]; /*0x96fc5d*/
    }
    v14 = v7; /*0x96fca6*/
    v5 = v14; /*0x96fcaa*/
    v3 = v12; /*0x96fcae*/
    v4 = v10; /*0x96fcb2*/
  }
  else
  {
    *a3 = 0.0; /*0x96fc15*/
  }
  return (float)(v5 * v5 + v3 * v3 + v4 * v4); /*0x96fccb*/
}
