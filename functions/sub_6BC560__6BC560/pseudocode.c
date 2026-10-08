float *__cdecl sub_6BC560(float a1, float *a2, int a3, float *a4)
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

  v15 = a1 * dbl_A3F3A0; /*0x6bc571*/
  v9 = a2[0xD] * v15; /*0x6bc582*/
  v10 = a2[0xE] * v15; /*0x6bc58b*/
  v11 = v15 * a2[0xF]; /*0x6bc592*/
  v4 = dbl_A3D0C0; /*0x6bc5a1*/
  v6 = a2[0xA] * v4; /*0x6bc5a3*/
  v7 = a2[0xB] * v4; /*0x6bc5ab*/
  v8 = v4 * a2[0xC]; /*0x6bc5b6*/
  v12 = v6 + v9; /*0x6bc5c1*/
  *a4 = v12; /*0x6bc5cd*/
  v13 = v10 + v7; /*0x6bc5d3*/
  a4[1] = v13; /*0x6bc5df*/
  v14 = v8 + v11; /*0x6bc5e6*/
  a4[2] = v14; /*0x6bc5ee*/
  return a4; /*0x6bc5f1*/
}
