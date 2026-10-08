// Compact stock CBillboardLeaf default constructor. Initializes only the 0x4C-byte Oblivion layout: position, angle/color/colorScale, one normal/tangent/binormal block, texture index, primary wind weight/group.
OB_CBillboardLeaf_010201A0 *__thiscall OB_CBillboardLeaf_ctor_010201A0(OB_CBillboardLeaf_010201A0 *this)
{
  OB_CIdvCamera_ctor_010201A0((float *)this); /*0x7a7d83*/
  this->vftable = &CBillboardLeaf::`vftable'; /*0x7a7d8a*/
  this->packedColor = 0xFFFFFFFF; /*0x7a7d90*/
  this->angleIndex = 0; /*0x7a7d99*/
  this->colorScaleByte = 0; /*0x7a7d9c*/
  this->normal.z = 0.0; /*0x7a7d9f*/
  this->normal.y = 0.0; /*0x7a7da2*/
  this->normal.x = 0.0; /*0x7a7da5*/
  this->tangent.z = 0.0; /*0x7a7da8*/
  this->tangent.y = 0.0; /*0x7a7dab*/
  this->tangent.x = 0.0; /*0x7a7dae*/
  this->binormal.z = 0.0; /*0x7a7db1*/
  this->binormal.y = 0.0; /*0x7a7db4*/
  this->binormal.x = 0.0; /*0x7a7db7*/
  this->textureIndexByte = 0; /*0x7a7dba*/
  this->primaryWindGroup = 0; /*0x7a7dbd*/
  this->primaryWindWeight = 0.0; /*0x7a7dc0*/
  return this; /*0x7a7dc5*/
}
