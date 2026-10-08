// Oblivion position evaluator for numeric type 1: componentwise lower*(1-t)+upper*t using key value components at +4,+8,+0xC.
float *__cdecl NiPosKey_EvaluateType1Linear(float a1, float *a2, float *a3, float *a4)
{
  float v6; // [esp+0h] [ebp-24h]
  float v7; // [esp+4h] [ebp-20h]
  float v8; // [esp+8h] [ebp-1Ch]
  float v9; // [esp+Ch] [ebp-18h]
  float v10; // [esp+10h] [ebp-14h]
  float v11; // [esp+14h] [ebp-10h]
  float v12; // [esp+18h] [ebp-Ch]
  float v13; // [esp+1Ch] [ebp-8h]
  float v14; // [esp+20h] [ebp-4h]
  float v15; // [esp+2Ch] [ebp+8h]

  v15 = 1.0 - a1; /*0x6bf3f1*/
  v9 = a2[1] * v15; /*0x6bf402*/
  v10 = a2[2] * v15; /*0x6bf40b*/
  v11 = v15 * a2[3]; /*0x6bf416*/
  v6 = a3[1] * a1; /*0x6bf41f*/
  v7 = a3[2] * a1; /*0x6bf427*/
  v8 = a1 * a3[3]; /*0x6bf432*/
  v12 = v6 + v9; /*0x6bf43d*/
  *a4 = v12; /*0x6bf449*/
  v13 = v10 + v7; /*0x6bf44f*/
  a4[1] = v13; /*0x6bf45b*/
  v14 = v8 + v11; /*0x6bf462*/
  a4[2] = v14; /*0x6bf46a*/
  return a4; /*0x6bf46d*/
}
