// Oblivion stRotTransform::RotateX. Converts degrees to radians, builds the X-axis 3x3 rotation, post-multiplies the current transform, and stores the result in place.
void __thiscall OB_stRotTransform_RotateXDegrees_010201A0(OB_stRotTransform_010201A0 *this, float angleDegrees)
{
  float v2; // [esp+0h] [ebp-4Ch]
  OB_stRotTransform_010201A0 v3; // [esp+4h] [ebp-48h] BYREF
  OB_stRotTransform_010201A0 outTransform; // [esp+28h] [ebp-24h] BYREF
  float angleDegreesa; // [esp+50h] [ebp+4h]
  float angleDegreesb; // [esp+50h] [ebp+4h]

  angleDegreesa = angleDegrees / dbl_A8BA48; /*0x793a11*/
  v2 = cos(angleDegreesa); /*0x793a1e*/
  angleDegreesb = sin(angleDegreesa); /*0x793a33*/
  v3.m[0] = 1.0; /*0x793a47*/
  v3.m[1] = 0.0; /*0x793a51*/
  v3.m[2] = 0.0; /*0x793a55*/
  v3.m[3] = 0.0; /*0x793a59*/
  v3.m[4] = v2; /*0x793a61*/
  v3.m[5] = angleDegreesb; /*0x793a69*/
  v3.m[6] = 0.0; /*0x793a6f*/
  v3.m[7] = -angleDegreesb; /*0x793a77*/
  v3.m[8] = v2; /*0x793a7b*/
  qmemcpy(this, OB_stRotTransform_MultiplyCopy_010201A0(&v3, &outTransform, this), sizeof(OB_stRotTransform_010201A0)); /*0x793a8b*/
}
