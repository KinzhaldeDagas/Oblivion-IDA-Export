// Stock compact SIdvBranchVertex ctor: 0x48-byte element; zeros direction/position, initializes +0x1C..+0x3C 3x3 transform to identity. Radius/running length/wind are filled by CBranch::Compute before use.
OB_SIdvBranchVertex_010201A0 *__thiscall OB_SIdvBranchVertex_ctor_010201A0(OB_SIdvBranchVertex_010201A0 *this)
{
  this->direction[2] = 0.0; /*0x78f3e4*/
  this->direction[1] = 0.0; /*0x78f3e7*/
  this->direction[0] = 0.0; /*0x78f3ea*/
  this->position[2] = 0.0; /*0x78f3ec*/
  this->position[1] = 0.0; /*0x78f3ef*/
  this->position[0] = 0.0; /*0x78f3f2*/
  this->transform3x3[0] = 1.0; /*0x78f3f7*/
  this->transform3x3[4] = 1.0; /*0x78f3fa*/
  this->transform3x3[8] = 1.0; /*0x78f3fd*/
  this->transform3x3[1] = 0.0; /*0x78f400*/
  this->transform3x3[2] = 0.0; /*0x78f403*/
  this->transform3x3[3] = 0.0; /*0x78f406*/
  this->transform3x3[5] = 0.0; /*0x78f409*/
  this->transform3x3[6] = 0.0; /*0x78f40c*/
  this->transform3x3[7] = 0.0; /*0x78f40f*/
  return this; /*0x78f412*/
}
