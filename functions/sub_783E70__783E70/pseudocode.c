// Oblivion cubic Bezier interpolation for the first two components of four stVec control records, implemented by de Casteljau lerps and returned as a 2D stVec. Corroborated by RT4.1 IdvSpline.cpp SplineInterpolate after binary observation.
OB_stVec_010201A0 *__stdcall OB_StSpline_CubicBezierInterpolate2D_010201A0(
        OB_stVec_010201A0 *result,
        const OB_stVec_010201A0 *p0,
        const OB_stVec_010201A0 *p1,
        const OB_stVec_010201A0 *p2,
        const OB_stVec_010201A0 *p3,
        float t)
{
  float y; // [esp+4h] [ebp-28h]
  float v8; // [esp+Ch] [ebp-20h]
  float v9; // [esp+10h] [ebp-1Ch]
  float v10; // [esp+14h] [ebp-18h]
  float v11; // [esp+14h] [ebp-18h]
  float v12; // [esp+18h] [ebp-14h]
  float v13; // [esp+18h] [ebp-14h]
  float v14; // [esp+1Ch] [ebp-10h]
  float v15; // [esp+20h] [ebp-Ch]
  float v16; // [esp+24h] [ebp-8h]
  float v17; // [esp+28h] [ebp-4h]
  float p0a; // [esp+34h] [ebp+8h]
  float p0b; // [esp+34h] [ebp+8h]

  v10 = p0->data[0] + (p1->data[0] - p0->data[0]) * t; /*0x783e9f*/
  v12 = (p1->data[1] - p0->data[1]) * t + p0->data[1]; /*0x783ebf*/
  v8 = (p2->data[0] - p1->data[0]) * t + p1->data[0]; /*0x783ed9*/
  v9 = (p2->data[1] - p1->data[1]) * t + p1->data[1]; /*0x783ef9*/
  v14 = (p3->data[0] - p2->data[0]) * t + p2->data[0]; /*0x783f13*/
  v15 = (p3->data[1] - p2->data[1]) * t + p2->data[1]; /*0x783f2f*/
  v16 = (v8 - v10) * t + v10; /*0x783f47*/
  v17 = (v9 - v12) * t + v12; /*0x783f68*/
  v11 = v8 + (v14 - v8) * t; /*0x783f78*/
  v13 = v9 + (v15 - v9) * t; /*0x783f86*/
  p0a = (v13 - v17) * t + v17; /*0x783f9c*/
  y = p0a; /*0x783fa4*/
  p0b = t * (v11 - v16) + v16; /*0x783fba*/
  OB_stVec_ctor_xy_010201A0(result, p0b, y); /*0x783fc5*/
  return result; /*0x783fcd*/
}
