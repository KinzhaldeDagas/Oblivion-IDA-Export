// Y-rotation helper used by branch/bud generation.
OB_stRotTransform_010201A0 *__thiscall OB_Mat3_RotateY_010201A0(OB_stRotTransform_010201A0 *this, float a2)
{
  OB_stRotTransform_010201A0 *result; // eax
  float v4; // [esp+0h] [ebp-4Ch]
  OB_stRotTransform_010201A0 v5; // [esp+4h] [ebp-48h] BYREF
  OB_stRotTransform_010201A0 outTransform; // [esp+28h] [ebp-24h] BYREF
  float v7; // [esp+50h] [ebp+4h]
  float v8; // [esp+50h] [ebp+4h]

  v7 = a2 / dbl_A8BA48; /*0x78eed1*/
  v4 = cos(v7); /*0x78eede*/
  v8 = sin(v7); /*0x78eef3*/
  v5.m[0] = v4; /*0x78ef09*/
  v5.m[1] = 0.0; /*0x78ef13*/
  v5.m[2] = -v8; /*0x78ef1f*/
  v5.m[3] = 0.0; /*0x78ef25*/
  v5.m[4] = 1.0; /*0x78ef2b*/
  v5.m[5] = 0.0; /*0x78ef2f*/
  v5.m[7] = 0.0; /*0x78ef33*/
  v5.m[6] = v8; /*0x78ef37*/
  v5.m[8] = v4; /*0x78ef3b*/
  result = OB_stRotTransform_MultiplyCopy_010201A0(&v5, &outTransform, this); /*0x78ef3f*/
  qmemcpy(this, result, sizeof(OB_stRotTransform_010201A0)); /*0x78ef4b*/
  return result; /*0x78ef4f*/
}
