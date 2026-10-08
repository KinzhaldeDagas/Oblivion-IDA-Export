// Normalizes one OB_stVec3 in place as v *= 1/sqrt(dot(v,v)); the binary has no zero-length guard. Used by CBranch::MakeLeaf and projected-shadow closest-point code. RT4.1 IdvVector.h corroborates stVec3::Normalize.
void __thiscall OB_NormalizeVec3_010201A0(OB_stVec3_010201A0 *this)
{
  float v1; // [esp+4h] [ebp-4h]
  float v2; // [esp+4h] [ebp-4h]
  float v3; // [esp+4h] [ebp-4h]

  v1 = this->y * this->y + this->x * this->x + this->z * this->z; /*0x78ed8c*/
  v2 = sqrt(v1); /*0x78ed99*/
  v3 = 1.0 / v2; /*0x78eda5*/
  this->x = this->x * v3; /*0x78edb5*/
  this->y = v3 * this->y; /*0x78edbc*/
  this->z = v3 * this->z; /*0x78edc2*/
}
