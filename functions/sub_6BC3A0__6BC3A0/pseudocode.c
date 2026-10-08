// Oblivion position evaluator for numeric type 2: evaluates a precomputed three-component cubic polynomial from the lower key record using Horner form.
float *__cdecl NiPosKey_EvaluateType2Cubic(float a1, float *a2, int a3, float *a4)
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

  v6 = a2[0xD] * a1; /*0x6bc3b4*/
  v9 = a2[0xE] * a1; /*0x6bc3bc*/
  v12 = a2[0xF] * a1; /*0x6bc3c5*/
  v15 = a2[0xA] + v6; /*0x6bc3cf*/
  v18 = a2[0xB] + v9; /*0x6bc3da*/
  v21 = a2[0xC] + v12; /*0x6bc3e5*/
  v7 = v15 * a1; /*0x6bc3ef*/
  v10 = v18 * a1; /*0x6bc3f8*/
  v13 = v21 * a1; /*0x6bc402*/
  v16 = a2[7] + v7; /*0x6bc40c*/
  v19 = a2[8] + v10; /*0x6bc417*/
  v22 = a2[9] + v13; /*0x6bc422*/
  v8 = v16 * a1; /*0x6bc42c*/
  v11 = v19 * a1; /*0x6bc435*/
  v14 = a1 * v22; /*0x6bc43d*/
  v17 = a2[1] + v8; /*0x6bc447*/
  v20 = a2[2] + v11; /*0x6bc456*/
  v5 = a2[3] + v14; /*0x6bc465*/
  *a4 = v17; /*0x6bc469*/
  a4[1] = v20; /*0x6bc46b*/
  v23 = v5; /*0x6bc46e*/
  a4[2] = v23; /*0x6bc476*/
  return a4; /*0x6bc479*/
}
