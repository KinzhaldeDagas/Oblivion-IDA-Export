// Oblivion stVec(x,y) constructor: stores x/y, zeros z/w/v, and sets logical size to 2. Exact body corroborated by RT4.1 Vec.cpp.
OB_stVec_010201A0 *__thiscall OB_stVec_ctor_xy_010201A0(OB_stVec_010201A0 *this, float x, float y)
{
  this->data[0] = x; /*0x78e5a6*/
  this->size = 2; /*0x78e5a8*/
  this->data[1] = y; /*0x78e5b3*/
  this->data[4] = 0.0; /*0x78e5b8*/
  this->data[3] = 0.0; /*0x78e5bb*/
  this->data[2] = 0.0; /*0x78e5be*/
  return this; /*0x78e5c1*/
}
