ParticleShaderProperty *__thiscall ParticleShaderProperty::ParticleShaderProperty(ParticleShaderProperty *this)
{
  NiSourceTexture *spBaseTexture_10C; // edi
  signed int v3; // edi
  void *v4; // eax

  BSShaderProperty::BSShaderProperty(&this->super); /*0x7e548d*/
  this->super.vtbl = &ParticleShaderProperty::`vftable';// Verified (Oblivion): ParticleShaderProperty constructor installs the vtable whose +0x54 GetSubtype returns 0xE, the exact subtype accepted by NiNode_CreateAttachedParticleShaderProperty. /*0x7e5494*/
  this->Color1_B8.r = 0.0; /*0x7e549a*/
  this->Color1_B8.g = 0.0; /*0x7e54a0*/
  this->Color1_B8.b = 0.0; /*0x7e54a8*/
  this->Color1_B8.a = 0.0; /*0x7e54b2*/
  this->Color2_C8.r = 0.0; /*0x7e54b8*/
  this->Color2_C8.g = 0.0; /*0x7e54be*/
  this->Color2_C8.b = 0.0; /*0x7e54c4*/
  this->Color2_C8.a = 0.0; /*0x7e54ca*/
  this->Color3_D8.r = 0.0; /*0x7e54d0*/
  this->Color3_D8.g = 0.0; /*0x7e54d6*/
  this->Color3_D8.b = 0.0; /*0x7e54dc*/
  this->Color3_D8.a = 0.0; /*0x7e54e2*/
  this->spBaseTexture_10C = 0; /*0x7e54e8*/
  OB_NiAVObjectPointerArray_ctor_010201A0(&this->TargetArray_110, 0xAu, 0xAu); /*0x7e54ff*/
  spBaseTexture_10C = this->spBaseTexture_10C; /*0x7e5504*/
  if ( spBaseTexture_10C ) /*0x7e5511*/
  {
    if ( !InterlockedDecrement((volatile LONG *)&spBaseTexture_10C->members) ) /*0x7e5517*/
      spBaseTexture_10C->vtbl->super.super.super.Destructor((NiRefObject *)spBaseTexture_10C, 1); /*0x7e552d*/
    this->spBaseTexture_10C = 0; /*0x7e552f*/
  }
  this->activeParticleCount_7C = 0; /*0x7e5537*/
  this->currentParticleLevel_80 = 1.0; /*0x7e553a*/
  this->emitterType_70 = 0; /*0x7e5540*/
  this->bWorldspace_78 = 1; /*0x7e5545*/
  this->simulationTime_F8 = 0.0; /*0x7e5549*/
  this->fParticleLifetime_84 = 0.0; /*0x7e554f*/
  this->fParticleLifeVar_88 = 0.0; /*0x7e5555*/
  this->fParticleNormalSpeed_8C = 0.0; /*0x7e555b*/
  this->fParticleNormalAcc_90 = 0.0; /*0x7e5561*/
  this->particleVelocity_94.x = 0.0; /*0x7e5587*/
  this->particleVelocity_94.y = 0.0; /*0x7e5599*/
  this->particleAcceleration_A0.x = 0.0; /*0x7e55a7*/
  this->particleVelocity_94.z = 0.0; /*0x7e55b1*/
  this->particleAcceleration_A0.y = 0.0; /*0x7e55bf*/
  this->Color1_B8.r = 0.0; /*0x7e55d1*/
  this->particleAcceleration_A0.z = 0.0; /*0x7e55df*/
  this->Color1_B8.g = 0.0; /*0x7e55ed*/
  this->Color1_B8.b = 0.0; /*0x7e55ff*/
  this->Color2_C8.r = 0.0; /*0x7e560d*/
  this->Color1_B8.a = 0.0; /*0x7e5617*/
  this->Color2_C8.g = 0.0; /*0x7e5625*/
  this->Color2_C8.b = 0.0; /*0x7e5633*/
  this->targetScaleRatio_124 = 1.0;             // Verified (Oblivion): targetScaleRatio_124 initializes to 1.0; MagicShaderHitEffect_Update later replaces it with a clamped target visual-size ratio. /*0x7e5639*/
  this->Color3_D8.r = 0.0; /*0x7e5643*/
  this->Color2_C8.a = 0.0; /*0x7e564d*/
  this->Color3_D8.g = 0.0; /*0x7e5657*/
  this->Color3_D8.b = 0.0; /*0x7e565d*/
  this->Color3_D8.a = 0.0; /*0x7e5665*/
  NiTObjectArray_ClearAndRelease(&this->TargetArray_110); /*0x7e566b*/
  sub_7E48E0(); /*0x7e5670*/
  this->geometry_120 = 0; /*0x7e5675*/
  v3 = ParticleShaderProperty_GetSlotCapacity(); /*0x7e5682*/
  v4 = (void *)FormHeapAlloc((unsigned __int64)(unsigned int)v3 >> 0x1B != 0 ? 0xFFFFFFFF : 0x20 * v3);
  this->particleInstanceBuffer_6C = v4;         // Verified (Oblivion): ParticleShaderProperty allocates particleInstanceBuffer_6C as slotCapacity * 0x20 bytes and zeroes the buffer; destructor frees the same allocation. /*0x7e5698*/
  _memset((int)v4, 0, 0x20 * v3); /*0x7e56a1*/
  ++unk_B46048; /*0x7e56a9*/
  return this; /*0x7e56b2*/
}
