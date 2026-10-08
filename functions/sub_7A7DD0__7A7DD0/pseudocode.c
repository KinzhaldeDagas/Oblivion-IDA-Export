//
// [Mesh generation pose v135 2026-10-06] CONFIRMED copy preserves normal+1C, tangent+28, binormal+34 for native leaf clones. Plugin now fills these semantic fields for generated mesh-enabled leaves after a terminal branch returns, following RT4.1 hang/basis/branch-local bank rotation. In-builder GetGeometry captures these three-float-per-leaf orientation streams before562DA0 frees them; mesh conversion consumes valid captured frames without applying hang twice. End-to-end Palmetto appearance remains UNVERIFIED.
OB_CBillboardLeaf_010201A0 *__thiscall OB_CBillboardLeaf_copy_assign_010201A0(
        OB_CBillboardLeaf_010201A0 *this,
        const OB_CBillboardLeaf_010201A0 *source)
{
  if ( source != this ) /*0x7a7dda*/
  {
    OB_CIdvCamera_copy_assign_010201A0(this, source); /*0x7a7ddd*/
    this->angleIndex = source->angleIndex; /*0x7a7de6*/
    this->packedColor = source->packedColor; /*0x7a7dec*/
    this->colorScaleByte = source->colorScaleByte; /*0x7a7df2*/
    this->normal = source->normal; /*0x7a7df8*/
    this->textureIndexByte = source->textureIndexByte; /*0x7a7e0b*/
    this->primaryWindWeight = source->primaryWindWeight; /*0x7a7e11*/
    this->primaryWindGroup = source->primaryWindGroup; /*0x7a7e17*/
    this->tangent = source->tangent; /*0x7a7e1d*/
    this->binormal = source->binormal; /*0x7a7e31*/
  }
  return this; /*0x7a7e40*/
}
