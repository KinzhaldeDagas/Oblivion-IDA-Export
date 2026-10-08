// [Verified] BSTempEffectDecal_Update delegates lifetime to BSTempEffect_Update and writes elapsedSeconds/durationSeconds to DECAL_DATA.fadeProgress_40.
bool __thiscall BSTempEffectDecal_Update(BSTempEffectDecalLayout_t *this, float deltaSeconds)
{
  bool result; // al
  float v4; // [esp+Ch] [ebp+4h]

  result = BSTempEffect_Update(&this->base, deltaSeconds);// BloodOnDeath decode 2026-05-30: fallback decal update delegates to BSTempEffect_Update, then writes elapsed/duration to decal data +0x40 as fade progress. /*0x56be1b*/
  v4 = this->base.elapsedSeconds / this->base.durationSeconds; /*0x56be2a*/
  this->decalData_18->fadeProgress_40 = v4; /*0x56be32*/
  return result; /*0x56be35*/
}
