// [Verified] BSTempEffectGeometryDecal_Update delegates lifetime to BSTempEffect_Update and writes elapsedSeconds/durationSeconds to DECAL_DATA.fadeProgress_40; creationFailed at +0x28 forces immediate expiry.
bool __thiscall BSTempEffectGeometryDecal_Update(BSTempEffectGeometryDecalLayout_t *this, float deltaSeconds)
{                                               // BloodOnDeath decode 2026-05-30: geometry decal update immediately expires when the creation-failed byte at +0x28 is set.
  bool result; // al
  float v4; // [esp+Ch] [ebp+4h]

  if ( this->creationFailed_28 ) /*0x56cce3*/
    return 0; /*0x56cce9*/
  result = BSTempEffect_Update(&this->base, deltaSeconds);// BloodOnDeath decode 2026-05-30: geometry decal update uses the same BSTempEffect elapsed <= duration rule as fallback decals, then writes fade progress to decal data +0x40. /*0x56ccf7*/
  v4 = this->base.elapsedSeconds / this->base.durationSeconds; /*0x56cd06*/
  this->decalCreationData_18->fadeProgress_40 = v4; /*0x56cd0e*/
  return result; /*0x56cceb*/
}
