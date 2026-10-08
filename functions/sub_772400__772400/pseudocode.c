// Oblivion NiD3DTextureStage pass application: apply its tracked stage/sampler state group, then bind the resolved texture and commit the texture transform.
unsigned __int8 __thiscall OB_NiD3DTextureStage_ApplyForPass_010201A0(void *this)
{                                               // Apply the authored texture-stage and five sampler states immediately before binding the stage texture.
  if ( OB_NiD3DTextureStageStateGroup_ApplyAllStates_010201A0(*((void **)this + 3), *(_DWORD *)this) ) /*0x772409*/
    return 0; /*0x772412*/
  OB_NiD3DTextureStage_BindTextureAndTransform_010201A0(this); /*0x772418*/
  return 1; /*0x772414*/
}
