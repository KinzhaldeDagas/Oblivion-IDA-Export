// Oblivion stRotTransform::RotateZ. Converts degrees to radians, builds the Z-axis 3x3 rotation, post-multiplies the current transform, and stores the result in place; used by the legacy billboard camera-direction path.
void __thiscall OB_stRotTransform_RotateZDegrees_010201A0(OB_stRotTransform_010201A0 *this, float angleDegrees)
{
  float v2; // [esp+0h] [ebp-4Ch]
  OB_stRotTransform_010201A0 v3; // [esp+4h] [ebp-48h] BYREF
  OB_stRotTransform_010201A0 outTransform; // [esp+28h] [ebp-24h] BYREF
  float angleDegreesa; // [esp+50h] [ebp+4h]
  float angleDegreesb; // [esp+50h] [ebp+4h]

  angleDegreesa = angleDegrees / dbl_A8BA48; /*0x793ab1*/
  v2 = cos(angleDegreesa); /*0x793abe*/
  angleDegreesb = sin(angleDegreesa); /*0x793ad3*/
  v3.m[0] = v2; /*0x793ae9*/
  v3.m[1] = angleDegreesb; /*0x793af5*/
  v3.m[2] = 0.0; /*0x793afb*/
  v3.m[3] = -angleDegreesb; /*0x793b03*/
  v3.m[4] = v2; /*0x793b09*/
  v3.m[5] = 0.0; /*0x793b0d*/
  v3.m[6] = 0.0; /*0x793b11*/
  v3.m[7] = 0.0; /*0x793b15*/
  v3.m[8] = 1.0; /*0x793b1b*/
  qmemcpy(this, OB_stRotTransform_MultiplyCopy_010201A0(&v3, &outTransform, this), sizeof(OB_stRotTransform_010201A0)); /*0x793b2b*/
}
