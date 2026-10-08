// Verified matrix coefficients make this an X-axis rotation in the engine's transposed convention: X stays fixed; only the Y/Z submatrix contains sin/cos.
void __thiscall NiMatrix33_InitRotationXTransposed(NiMatrix33 *this, float angleX)
{
  float v2; // [esp+0h] [ebp-8h]
  float v3; // [esp+4h] [ebp-4h]

  v2 = cos(angleX);                             // Verified matrix helper consumes angleX directly in sin/cos with no degree conversion; its units are radians. /*0x70fd39*/
  v3 = sin(angleX); /*0x70fd3c*/
  this->data[0][0] = 1.0; /*0x70fd42*/
  this->data[0][1] = 0.0; /*0x70fd46*/
  this->data[0][2] = 0.0; /*0x70fd49*/
  this->data[1][0] = 0.0; /*0x70fd4c*/
  this->data[1][1] = v2; /*0x70fd52*/
  this->data[1][2] = v3; /*0x70fd59*/
  this->data[2][0] = 0.0; /*0x70fd5e*/
  this->data[2][1] = -v3; /*0x70fd65*/
  this->data[2][2] = v2; /*0x70fd68*/
}
