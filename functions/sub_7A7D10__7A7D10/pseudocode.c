// SpeedTreeRT 4.1 source match: CBillboardLeaf constructor. Initializes position, wind fields, texture index/color defaults, and orientation state.
OB_CBillboardLeaf_010201A0 *__thiscall OB_CBillboardLeaf_ctor_args_010201A0(
        OB_CBillboardLeaf_010201A0 *this,
        const OB_stVec3_010201A0 *position,
        __int16 colorScale,
        int angleIndex,
        float primaryWindWeight,
        int primaryWindGroup)
{
  OB_CIdvCamera_ctor_010201A0((float *)this); /*0x7a7d13*/
  this->angleIndex = angleIndex; /*0x7a7d26*/
  this->vftable = &CBillboardLeaf::`vftable'; /*0x7a7d2d*/
  this->packedColor = 0xFFFFFFFF; /*0x7a7d33*/
  this->colorScaleByte = colorScale; /*0x7a7d3a*/
  this->normal.z = 0.0; /*0x7a7d3d*/
  this->normal.y = 0.0; /*0x7a7d40*/
  this->normal.x = 0.0; /*0x7a7d43*/
  this->tangent.z = 0.0; /*0x7a7d46*/
  this->tangent.y = 0.0; /*0x7a7d49*/
  this->tangent.x = 0.0; /*0x7a7d4c*/
  this->binormal.z = 0.0; /*0x7a7d4f*/
  this->binormal.y = 0.0; /*0x7a7d52*/
  this->binormal.x = 0.0; /*0x7a7d55*/
  this->textureIndexByte = 0; /*0x7a7d58*/
  this->primaryWindGroup = primaryWindGroup; /*0x7a7d60*/
  this->primaryWindWeight = primaryWindWeight; /*0x7a7d63*/
  this->position = *position; /*0x7a7d68*/
  return this; /*0x7a7d79*/
}
