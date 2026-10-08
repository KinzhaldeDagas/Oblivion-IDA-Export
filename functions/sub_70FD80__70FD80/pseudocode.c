// Verified matrix coefficients make this a Y-axis rotation: Y stays fixed; only the X/Z submatrix contains sin/cos.
void __thiscall NiMatrix33_InitRotationY(NiMatrix33 *this, float angleY)
{
  float v2; // [esp+0h] [ebp-8h]
  float v3; // [esp+4h] [ebp-4h]

  v2 = cos(angleY);                             // Verified matrix helper consumes angleY directly in sin/cos with no degree conversion; its units are radians. /*0x70fd89*/
  v3 = sin(angleY); /*0x70fd8c*/
  this->data[0][0] = v2; /*0x70fd93*/
  this->data[0][1] = 0.0; /*0x70fd97*/
  this->data[0][2] = -v3; /*0x70fda2*/
  this->data[1][0] = 0.0; /*0x70fda7*/
  this->data[1][1] = 1.0; /*0x70fdac*/
  this->data[1][2] = 0.0; /*0x70fdaf*/
  this->data[2][1] = 0.0; /*0x70fdb2*/
  this->data[2][0] = v3; /*0x70fdb5*/
  this->data[2][2] = v2; /*0x70fdb8*/
}
