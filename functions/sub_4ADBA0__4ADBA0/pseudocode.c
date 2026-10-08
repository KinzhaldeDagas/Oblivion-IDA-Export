// Verified (Oblivion): returns the animated particle-level value using TESEffectShader::Data fade-in/full/fade-out times, full/persistent values, deltaSeconds, elapsedSeconds, and finished state. MagicShaderHitEffect_Update writes this result to ParticleShaderProperty::currentParticleLevel_80.
double __thiscall TESEffectShader_AdvanceParticleLevel(
        TESEffectShader *this,
        float currentParticleLevel,
        float deltaSeconds,
        float elapsedSeconds,
        bool bFinished)
{
  return TESEffectShader_AnimateValue( /*0x4adbf8*/
           currentParticleLevel,
           deltaSeconds,
           elapsedSeconds,
           bFinished,
           this->Data.fParticleFadeInTime,
           this->Data.fParticleFadeOutTime,
           this->Data.fParticleFullTime,
           this->Data.fParticleFull,
           this->Data.fParticlePersistent);
}
