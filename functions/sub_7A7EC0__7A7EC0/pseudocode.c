// OBLIVION AUTHORITY (2026-08-24): CBillboardLeaf::GetColor decodes packed +0x14 R/G/B bytes to float channels by dividing by 255. Used by lower-LOD pair averaging at 0x7A91A8/0x7A91AA.
OB_stVec3_010201A0 *__thiscall OB_CBillboardLeaf_GetColor_010201A0(
        const OB_CBillboardLeaf_010201A0 *this,
        OB_stVec3_010201A0 *outColor)
{
  OB_stVec3_010201A0 *result; // eax
  int v3; // ecx
  double v4; // rt0
  int packedColor_low; // [esp+0h] [ebp-4h]
  float *outRgb; // [esp+8h] [ebp+4h]

  packedColor_low = LOBYTE(this->packedColor); /*0x7a7ec5*/
  result = outColor; /*0x7a7ec8*/
  outRgb = (float *)BYTE1(this->packedColor); /*0x7a7ed9*/
  v3 = BYTE2(this->packedColor); /*0x7a7edf*/
  v4 = dbl_A3DDD8; /*0x7a7ee3*/
  result->x = (double)packedColor_low / v4; /*0x7a7ee5*/
  result->y = (double)(int)outRgb / v4; /*0x7a7ef1*/
  result->z = (double)v3 / v4; /*0x7a7efa*/
  return result; /*0x7a7efe*/
}
