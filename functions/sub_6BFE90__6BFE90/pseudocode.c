float *__cdecl sub_6BFE90(float a1, float *a2, int a3, float *a4)
{
  double v4; // rt1
  float v6; // [esp+0h] [ebp-24h]
  float v7; // [esp+4h] [ebp-20h]
  float v8; // [esp+8h] [ebp-1Ch]
  float v9; // [esp+Ch] [ebp-18h]
  float v10; // [esp+10h] [ebp-14h]
  float v11; // [esp+14h] [ebp-10h]
  float v12; // [esp+18h] [ebp-Ch]
  float v13; // [esp+1Ch] [ebp-8h]
  float v14; // [esp+20h] [ebp-4h]
  float v15; // [esp+28h] [ebp+4h]

  v15 = a1 * dbl_A3F3A0; /*0x6bfea1*/
  v9 = a2[0x10] * v15; /*0x6bfeb2*/
  v10 = a2[0x11] * v15; /*0x6bfebb*/
  v11 = v15 * a2[0x12]; /*0x6bfec2*/
  v4 = dbl_A3D0C0; /*0x6bfed1*/
  v6 = a2[0xD] * v4; /*0x6bfed3*/
  v7 = a2[0xE] * v4; /*0x6bfedb*/
  v8 = v4 * a2[0xF]; /*0x6bfee6*/
  v12 = v6 + v9; /*0x6bfef1*/
  *a4 = v12; /*0x6bfefd*/
  v13 = v10 + v7; /*0x6bff03*/
  a4[1] = v13; /*0x6bff0f*/
  v14 = v8 + v11; /*0x6bff16*/
  a4[2] = v14; /*0x6bff1e*/
  return a4; /*0x6bff21*/
}
