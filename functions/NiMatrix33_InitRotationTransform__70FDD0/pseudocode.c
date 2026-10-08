// Verified matrix coefficients make this a Z-axis rotation: Z stays fixed; only the X/Y submatrix contains sin/cos.
void __thiscall NiMatrix33_InitRotationZ(NiMatrix33 *this, float angleZ)
{
  float v2; // [esp+0h] [ebp-8h]
  float v3; // [esp+4h] [ebp-4h]

  v2 = cos(angleZ);                             // Verified matrix helper consumes angleZ directly in sin/cos with no degree conversion; its units are radians. /*0x70fdd9*/
  v3 = sin(angleZ); /*0x70fddc*/
  this->data[0][0] = v2; /*0x70fde3*/
  this->data[0][1] = v3; /*0x70fde9*/
  this->data[0][2] = 0.0; /*0x70fdee*/
  this->data[1][0] = -v3; /*0x70fdf5*/
  this->data[1][1] = v2; /*0x70fdfa*/
  this->data[1][2] = 0.0; /*0x70fdfd*/
  this->data[2][0] = 0.0; /*0x70fe00*/
  this->data[2][1] = 0.0; /*0x70fe03*/
  this->data[2][2] = 1.0; /*0x70fe08*/
}
