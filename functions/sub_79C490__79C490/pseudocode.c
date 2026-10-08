// Oblivion-authoritative CFrondEngine::AddGuideVertex. Builds a 0x38-byte vertex from position, 3x3 rotation transform, primary cross-section/wind weight, and primary wind group, then pushes it into the final compact guide. Unlike local RT 4.1 source, Oblivion has no secondary frond wind fields here.
void __thiscall OB_CFrondEngine_AddGuideVertex_010201A0(
        OB_CFrondEngine_010201A0 *this,
        OB_stVec3_010201A0 position,
        OB_stRotTransform_010201A0 transform,
        float primaryCrossSectionOrWindWeight,
        int primaryWindGroup)
{
  void *begin; // eax
  unsigned int lastGuideIndex; // esi
  void *v8; // eax
  OB_SFrondVertex_010201A0 value; // [esp+0h] [ebp-38h] BYREF

  value.position[0] = position.x; /*0x79c4a8*/
  value.position[1] = position.y; /*0x79c4b0*/
  value.position[2] = position.z; /*0x79c4c1*/
  qmemcpy(value.rotationTransform3x3, &transform, sizeof(value.rotationTransform3x3)); /*0x79c4c5*/
  value.primaryCrossSectionOrWindWeight = primaryCrossSectionOrWindWeight; /*0x79c4c7*/
  value.primaryWindGroup = primaryWindGroup; /*0x79c4cb*/
  begin = this->guideVectorWrapper.begin; /*0x79c4cf*/
  if ( begin ) /*0x79c4d4*/
    begin = (void *)(((char *)this->guideVectorWrapper.end - (char *)begin) / 0x30); /*0x79c4ea*/
  lastGuideIndex = (unsigned int)begin + 0xFFFFFFFF; /*0x79c4ec*/
  v8 = this->guideVectorWrapper.begin; /*0x79c4ef*/
  if ( !v8 || lastGuideIndex >= ((char *)this->guideVectorWrapper.end - (char *)v8) / 0x30 ) /*0x79c50e*/
    _invalid_parameter_noinfo((int)this, (int)&value.primaryCrossSectionOrWindWeight, lastGuideIndex); /*0x79c510*/
  OB_stVector_SFrondVertex_PushBack_010201A0( /*0x79c523*/
    (OB_stVector16_010201A0 *)this->guideVectorWrapper.begin + 3 * lastGuideIndex,
    &value);
}
