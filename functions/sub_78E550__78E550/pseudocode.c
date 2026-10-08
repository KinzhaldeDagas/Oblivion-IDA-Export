// Oblivion stVec default constructor: zeros all five float slots and sets logical size to 3. Exact body corroborated after binary observation by RT4.1 LibVector Vec.cpp stVec().
OB_stVec_010201A0 *__thiscall OB_stVec_ctor_zero3_010201A0(OB_stVec_010201A0 *this)
{
  this->data[4] = 0.0; /*0x78e554*/
  this->size = 3; /*0x78e557*/
  this->data[3] = 0.0; /*0x78e55e*/
  this->data[2] = 0.0; /*0x78e561*/
  this->data[1] = 0.0; /*0x78e564*/
  this->data[0] = 0.0; /*0x78e567*/
  return this; /*0x78e569*/
}
