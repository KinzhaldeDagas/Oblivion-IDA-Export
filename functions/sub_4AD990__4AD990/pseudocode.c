// Verified (Oblivion): constructs a ParticleShaderProperty from the TESEffectShader and selected visual nodes, configures it with a NiSourceTexture*, initializes its animation time, and returns the property retained by MagicShaderHitEffect +0x3C.
ParticleShaderProperty *__thiscall TESEffectShader_CreateVisualProperty(
        TESEffectShader *this,
        void *targetNode,
        void *secondaryNode,
        NiSourceTexture *sourceTexture,
        float elapsedSeconds)
{
  ParticleShaderProperty *AttachedParticleShaderProperty; // esi

  if ( !sourceTexture ) /*0x4ad99a*/
    return 0; /*0x4ad9d2*/
  AttachedParticleShaderProperty = NiNode_CreateAttachedParticleShaderProperty(targetNode, secondaryNode); /*0x4ad9af*/
  TESEffectShader_ConfigureVisualProperty(this, AttachedParticleShaderProperty, sourceTexture); /*0x4ad9b5*/
  ParticleShaderProperty_ResetParticleStateAtTime(AttachedParticleShaderProperty, elapsedSeconds); /*0x4ad9c4*/
  return AttachedParticleShaderProperty; /*0x4ad9cc*/
}
