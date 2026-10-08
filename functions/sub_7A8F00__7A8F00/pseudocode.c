// OBLIVION AUTHORITY (2026-08-30): Constructs exact 0x20-byte CLeafLodEngine: vector<SLodEntry> at +0x00, spacing +0x10, reduction +0x14, SIdvLeafInfo reference pointer +0x18, size-increase factor +0x1C. RT 4.1 corroborates member names after this layout was recovered from Oblivion.
OB_CLeafLodEngine_010201A0 *__thiscall OB_CLeafLodEngine_ctor_010201A0(
        OB_CLeafLodEngine_010201A0 *this,
        const OB_SIdvLeafInfo_010201A0 *leafInfo,
        float spacingTolerance,
        float leafReductionPercentage,
        float leafSizeIncreaseFactor)
{
  this->m_fLeafSpacingTolerance = spacingTolerance; /*0x7a8f06*/
  this->m_vPairs.begin = 0; /*0x7a8f0f*/
  this->m_fLeafReductionPercentage = leafReductionPercentage; /*0x7a8f12*/
  this->m_vPairs.end = 0; /*0x7a8f15*/
  this->m_vPairs.capacity = 0; /*0x7a8f1c*/
  this->m_fLeafSizeIncreaseFactor = leafSizeIncreaseFactor; /*0x7a8f23*/
  this->m_pLeafInfoRef = leafInfo; /*0x7a8f26*/
  return this; /*0x7a8f29*/
}
