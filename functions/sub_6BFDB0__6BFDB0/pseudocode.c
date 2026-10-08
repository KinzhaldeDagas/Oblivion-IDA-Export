float *__cdecl sub_6BFDB0(float a1, float *a2, int a3, float *a4)
{
  double v4; // st7
  double v5; // rt1
  double v7; // st7
  float v8; // [esp+0h] [ebp-24h]
  float v9; // [esp+4h] [ebp-20h]
  float v10; // [esp+8h] [ebp-1Ch]
  float v11; // [esp+Ch] [ebp-18h]
  float v12; // [esp+Ch] [ebp-18h]
  float v13; // [esp+10h] [ebp-14h]
  float v14; // [esp+10h] [ebp-14h]
  float v15; // [esp+14h] [ebp-10h]
  float v16; // [esp+14h] [ebp-10h]
  float v17; // [esp+18h] [ebp-Ch]
  float v18; // [esp+18h] [ebp-Ch]
  float v19; // [esp+1Ch] [ebp-8h]
  float v20; // [esp+1Ch] [ebp-8h]
  float v21; // [esp+20h] [ebp-4h]
  float v22; // [esp+20h] [ebp-4h]
  float v23; // [esp+28h] [ebp+4h]

  v4 = a1; /*0x6bfdb7*/
  v23 = dbl_A30E48 * a1; /*0x6bfdc3*/
  v11 = a2[0x10] * v23; /*0x6bfdd4*/
  v13 = a2[0x11] * v23; /*0x6bfddd*/
  v15 = v23 * a2[0x12]; /*0x6bfde4*/
  v5 = dbl_A3D0C0; /*0x6bfdf3*/
  v8 = a2[0xD] * v5; /*0x6bfdf5*/
  v9 = a2[0xE] * v5; /*0x6bfdfd*/
  v10 = v5 * a2[0xF]; /*0x6bfe04*/
  v17 = v8 + v11; /*0x6bfe0f*/
  v19 = v9 + v13; /*0x6bfe1b*/
  v21 = v10 + v15; /*0x6bfe27*/
  v12 = v17 * v4; /*0x6bfe31*/
  v14 = v19 * v4; /*0x6bfe3b*/
  v16 = v4 * v21; /*0x6bfe43*/
  v18 = a2[0xA] + v12; /*0x6bfe4e*/
  v20 = a2[0xB] + v14; /*0x6bfe5d*/
  v7 = a2[0xC] + v16; /*0x6bfe6c*/
  *a4 = v18; /*0x6bfe70*/
  a4[1] = v20; /*0x6bfe72*/
  v22 = v7; /*0x6bfe75*/
  a4[2] = v22; /*0x6bfe7d*/
  return a4; /*0x6bfe80*/
}
