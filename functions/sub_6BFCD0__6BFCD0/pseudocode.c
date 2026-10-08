// Oblivion position evaluator for numeric type 3: evaluates its distinct precomputed three-component cubic polynomial layout from the lower key record using Horner form.
float *__cdecl NiPosKey_EvaluateType3Cubic(float a1, float *a2, int a3, float *a4)
{
  double v5; // st7
  float v6; // [esp+0h] [ebp-18h]
  float v7; // [esp+0h] [ebp-18h]
  float v8; // [esp+0h] [ebp-18h]
  float v9; // [esp+4h] [ebp-14h]
  float v10; // [esp+4h] [ebp-14h]
  float v11; // [esp+4h] [ebp-14h]
  float v12; // [esp+8h] [ebp-10h]
  float v13; // [esp+8h] [ebp-10h]
  float v14; // [esp+8h] [ebp-10h]
  float v15; // [esp+Ch] [ebp-Ch]
  float v16; // [esp+Ch] [ebp-Ch]
  float v17; // [esp+Ch] [ebp-Ch]
  float v18; // [esp+10h] [ebp-8h]
  float v19; // [esp+10h] [ebp-8h]
  float v20; // [esp+10h] [ebp-8h]
  float v21; // [esp+14h] [ebp-4h]
  float v22; // [esp+14h] [ebp-4h]
  float v23; // [esp+14h] [ebp-4h]

  v6 = a2[0x10] * a1; /*0x6bfce4*/
  v9 = a2[0x11] * a1; /*0x6bfcec*/
  v12 = a2[0x12] * a1; /*0x6bfcf5*/
  v15 = a2[0xD] + v6; /*0x6bfcff*/
  v18 = a2[0xE] + v9; /*0x6bfd0a*/
  v21 = a2[0xF] + v12; /*0x6bfd15*/
  v7 = v15 * a1; /*0x6bfd1f*/
  v10 = v18 * a1; /*0x6bfd28*/
  v13 = v21 * a1; /*0x6bfd32*/
  v16 = a2[0xA] + v7; /*0x6bfd3c*/
  v19 = a2[0xB] + v10; /*0x6bfd47*/
  v22 = a2[0xC] + v13; /*0x6bfd52*/
  v8 = v16 * a1; /*0x6bfd5c*/
  v11 = v19 * a1; /*0x6bfd65*/
  v14 = a1 * v22; /*0x6bfd6d*/
  v17 = a2[1] + v8; /*0x6bfd77*/
  v20 = a2[2] + v11; /*0x6bfd86*/
  v5 = a2[3] + v14; /*0x6bfd95*/
  *a4 = v17; /*0x6bfd99*/
  a4[1] = v20; /*0x6bfd9b*/
  v23 = v5; /*0x6bfd9e*/
  a4[2] = v23; /*0x6bfda6*/
  return a4; /*0x6bfda9*/
}
