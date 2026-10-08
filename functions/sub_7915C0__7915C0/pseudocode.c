// Compact stock CBranch constructor. Oblivion branch object is 0x40 bytes: parent, percent, child SIdvBranch vector, vertex pointer/count, cross-section/start offsets, volume/fuzzy volume, flare vector.
OB_CBranch_010201A0 *__thiscall OB_CBranch_ctor_010201A0(OB_CBranch_010201A0 *this, OB_CBranch_010201A0 *parent)
{
  this->parentBranch = parent; /*0x7915e9*/
  this->percentAlongParent = 0.0; /*0x7915eb*/
  this->children.begin = 0; /*0x7915f0*/
  this->children.end = 0; /*0x7915f3*/
  this->children.capacityEnd = 0; /*0x7915f6*/
  this->branchVolume = 0.0; /*0x7915f9*/
  this->fuzzyBranchVolume = 0.0; /*0x7915ff*/
  this->branchVertices = 0; /*0x791602*/
  this->branchVertexCount = 0xFFFFFFFF; /*0x791605*/
  this->crossSectionSegmentCount = 0; /*0x791608*/
  this->startVertexOffset = 0xFFFFFFFF; /*0x79160c*/
  this->flares.begin = 0; /*0x79160f*/
  this->flares.end = 0; /*0x791612*/
  this->flares.capacityEnd = 0; /*0x791615*/
  return this; /*0x791618*/
}
