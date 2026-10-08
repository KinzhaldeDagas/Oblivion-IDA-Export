float *__cdecl sub_6BC480(float a1, float *a2, int a3, float *a4)
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

  v4 = a1; /*0x6bc487*/
  v23 = dbl_A30E48 * a1; /*0x6bc493*/
  v11 = a2[0xD] * v23; /*0x6bc4a4*/
  v13 = a2[0xE] * v23; /*0x6bc4ad*/
  v15 = v23 * a2[0xF]; /*0x6bc4b4*/
  v5 = dbl_A3D0C0; /*0x6bc4c3*/
  v8 = a2[0xA] * v5; /*0x6bc4c5*/
  v9 = a2[0xB] * v5; /*0x6bc4cd*/
  v10 = v5 * a2[0xC]; /*0x6bc4d4*/
  v17 = v8 + v11; /*0x6bc4df*/
  v19 = v9 + v13; /*0x6bc4eb*/
  v21 = v10 + v15; /*0x6bc4f7*/
  v12 = v17 * v4; /*0x6bc501*/
  v14 = v19 * v4; /*0x6bc50b*/
  v16 = v4 * v21; /*0x6bc513*/
  v18 = a2[7] + v12; /*0x6bc51e*/
  v20 = a2[8] + v14; /*0x6bc52d*/
  v7 = a2[9] + v16; /*0x6bc53c*/
  *a4 = v18; /*0x6bc540*/
  a4[1] = v20; /*0x6bc542*/
  v22 = v7; /*0x6bc545*/
  a4[2] = v22; /*0x6bc54d*/
  return a4; /*0x6bc550*/
}
