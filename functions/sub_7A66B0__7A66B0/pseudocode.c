// Initializes a 0x40-byte row-major SpeedTree transform to identity.
OB_stTransform_010201A0 *__thiscall OB_stTransform_ctor_010201A0(OB_stTransform_010201A0 *this)
{
  this->m[0] = 1.0; /*0x7a66b4*/
  this->m[1] = 0.0; /*0x7a66b8*/
  this->m[2] = 0.0; /*0x7a66bb*/
  this->m[3] = 0.0; /*0x7a66be*/
  this->m[4] = 0.0; /*0x7a66c1*/
  this->m[6] = 0.0; /*0x7a66c4*/
  this->m[7] = 0.0; /*0x7a66c7*/
  this->m[8] = 0.0; /*0x7a66ca*/
  this->m[9] = 0.0; /*0x7a66cd*/
  this->m[0xB] = 0.0; /*0x7a66d0*/
  this->m[0xC] = 0.0; /*0x7a66d3*/
  this->m[0xD] = 0.0; /*0x7a66d6*/
  this->m[0xE] = 0.0; /*0x7a66d9*/
  this->m[5] = 1.0; /*0x7a66dc*/
  this->m[0xA] = 1.0; /*0x7a66df*/
  this->m[0xF] = 1.0; /*0x7a66e2*/
  return this; /*0x7a66e5*/
}
