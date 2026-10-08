// Oblivion five-component stVec constructor: stores x/y/z/w/v and sets logical size to 5. Exact body corroborated by RT4.1 Vec.cpp.
OB_stVec_010201A0 *__thiscall OB_stVec_ctor_xyzwv_010201A0(
        OB_stVec_010201A0 *this,
        float x,
        float y,
        float z,
        float w,
        float v)
{
  this->data[0] = x; /*0x78e5d6*/
  this->size = 5; /*0x78e5d8*/
  this->data[1] = y; /*0x78e5e3*/
  this->data[2] = z; /*0x78e5ea*/
  this->data[3] = w; /*0x78e5f1*/
  this->data[4] = v; /*0x78e5f8*/
  return this; /*0x78e5fb*/
}
