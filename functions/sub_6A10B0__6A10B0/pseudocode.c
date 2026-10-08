// Verified MagicShaderHitEffect_Update calls base lifetime/target checks, updates its model/shader components, uses bFinished to finish their fade/animation, and returns false when the temp effect is done.
bool __thiscall MagicShaderHitEffect_Update(MagicShaderHitEffect *this, float deltaSeconds)
{
  TESObjectREFR *targetReference; // ecx
  NiObject *(__thiscall *Unk_02)(NiObject *); // edx
  bool bFinished; // bl
  NiNode *v6; // edi
  double v7; // st7
  double v8; // st7
  float *unknown_3C; // eax
  void *unknown_48; // eax
  float *v11; // ecx
  TESObjectREFRVtbl *vtbl; // ecx
  float v14; // [esp+18h] [ebp-8h]
  float v15; // [esp+1Ch] [ebp-4h]
  float v16; // [esp+1Ch] [ebp-4h]

  if ( !MagicHitEffect_Update(&this->super, deltaSeconds) ) /*0x6a10be*/
    return 0; /*0x6a10be*/
  targetReference = this->super.targetReference; /*0x6a10cb*/
  if ( !targetReference || !targetReference->vtbl->GetNiNode(targetReference) ) /*0x6a10de*/
    return 0; /*0x6a12c4*/
  Unk_02 = this->super.super.vtable[1].super.Unk_02; /*0x6a10f1*/
  bFinished = this->super.bFinished; /*0x6a10f5*/
  this->elapsedVisualSeconds_38 = this->elapsedVisualSeconds_38 + deltaSeconds;// Verified (Oblivion): field +0x38 accumulates deltaSeconds during shader hit-effect update; typed as elapsedVisualSeconds_38. This is distinct from base MagicHitEffect::elapsedSeconds at +0x20. /*0x6a10fa*/
  Unk_02((NiObject *)this); /*0x6a10fd*/
  v14 = 1.0; /*0x6a1104*/
  if ( this->super.targetReference->vtbl->IsActor(this->super.targetReference) /*0x6a1122*/
    && this->effectShader_34 != (void *)Magic_GetLifeDetectedShader() )
  {
    v6 = this->super.targetReference->vtbl->GetNiNode(this->super.targetReference); /*0x6a1132*/
    if ( NiRTTI::IsObjectOfRTTIType((NiRTTI *)&MEMORY[0xB33E90][0x13F8], (NiObject *)v6) ) /*0x6a113a*/
      v7 = *(float *)&v6[1].members.super.super.m_controller; /*0x6a1146*/
    else
      v7 = ((double (__thiscall *)(TESObjectREFR *))this->super.targetReference->vtbl[1].Unk_60)(this->super.targetReference); /*0x6a1159*/
    v14 = v7; /*0x6a115e*/
    sub_5E0AC0((int)this->super.targetReference); /*0x6a1162*/
    v15 = v7; /*0x6a1167*/
    if ( v15 > 0.0 ) /*0x6a117b*/
    {
      v8 = v14 / v15; /*0x6a117d*/
      if ( v8 <= 1.0 ) /*0x6a118a*/
        v14 = v8; /*0x6a1196*/
      else
        v14 = 1.0; /*0x6a118e*/
    }
  }
  unknown_3C = (float *)this->shaderProperty_3C; /*0x6a119e*/
  if ( unknown_3C ) /*0x6a11a3*/
  {
    if ( this->attachedNode_40 ) /*0x6a11a5*/
    {
      v16 = unknown_3C[0x20];                   // Verified (Oblivion): the current particle level at shaderProperty_3C+0x80, deltaSeconds, elapsedVisualSeconds_38, and bFinished are passed to TESEffectShader_AdvanceParticleLevel; its returned level is written back to +0x80. The separately computed target-size ratio is stored at +0x124. /*0x6a11b8*/
      TESEffectShader_AdvanceParticleLevel( /*0x6a11d6*/
        (float *)this->effectShader_34,
        v16,
        deltaSeconds,
        this->elapsedVisualSeconds_38,
        COERCE_FLOAT(this->super.bFinished));   // Verified (Oblivion): ParticleShaderProperty_AdvanceEffectAnimation updates shaderProperty_3C using its current alpha/timer state, deltaSeconds, elapsedVisualSeconds_38 and bFinished.
      *((float *)this->shaderProperty_3C + 0x20) = v16; /*0x6a11e8*/
      *((float *)this->shaderProperty_3C + 0x49) = v14;// Verified (Oblivion): stores the computed, clamped target-to-actor scale ratio at ParticleShaderProperty::targetScaleRatio_124. The field name is Probable; its value is directly derived from the target's visual height and used to scale the shader effect. /*0x6a11f7*/
      ParticleShaderProperty_UpdateParticles((float *)this->shaderProperty_3C, this->elapsedVisualSeconds_38, 0, 1); /*0x6a1207*/
      if ( *((int *)this->shaderProperty_3C + 0x1F) > 0 ) /*0x6a1213*/
        bFinished = 0; /*0x6a1215*/
    }
  }
  unknown_48 = this->textureEffectData_48; /*0x6a1217*/
  if ( unknown_48 ) /*0x6a121c*/
  {
    TESEffectShader_AnimateTextureEffect( /*0x6a123f*/
      (float *)this->effectShader_34,
      (int)unknown_48,
      deltaSeconds,
      this->elapsedVisualSeconds_38,
      this->super.elapsedSeconds,
      COERCE_FLOAT(this->super.bFinished));     // Verified (Oblivion): MagicShaderHitEffect_Update calls TESEffectShader_AnimateTextureEffect with its refcounted textureEffectData_48, deltaSeconds, elapsedVisualSeconds_38, base elapsedSeconds, and bFinished; the updater's writes keep the attached fill/edge texture effect and UV motion synchronized with the shader's animation timeline.
    *((float *)this->textureEffectData_48 + 6) = *((float *)this->textureEffectData_48 + 6) * v14; /*0x6a1254*/
    *((float *)this->textureEffectData_48 + 0xA) = v14 * *((float *)this->textureEffectData_48 + 0xA); /*0x6a125d*/
    v11 = (float *)this->textureEffectData_48; /*0x6a1260*/
    if ( v11[0x12] > 0.0 || v11[0xE] > 0.0 ) /*0x6a1277*/
      bFinished = 0; /*0x6a127d*/
  }
  if ( !this->super.bFinished || !bFinished ) /*0x6a1287*/
    return 1; /*0x6a12bb*/
  if ( this->super.targetReference->vtbl->IsActor(this->super.targetReference) ) /*0x6a1294*/
  {
    vtbl = this->super.targetReference[1].vtbl; /*0x6a129d*/
    if ( vtbl ) /*0x6a12a2*/
      (*((void (__thiscall **)(TESObjectREFRVtbl *, int))vtbl->super.super.InitializeComponent + 0x10A))(vtbl, 1); /*0x6a12ae*/
  }
  return 0; /*0x6a12b7*/
}
