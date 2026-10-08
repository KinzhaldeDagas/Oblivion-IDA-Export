MagicShaderHitEffect *__thiscall MagicShaderHitEffect_constr_args2(
        MagicShaderHitEffect *this,
        TESObjectREFR *targetReference,
        TESEffectShader *effectShader,
        float elapsedSeconds)
{
  unsigned __int8 v5; // bl
  LONG (__stdcall *v6)(volatile LONG *); // ebp
  BSShaderPPLightingProperty::TextureEffectData *textureEffectData_48; // edi
  volatile LONG *unknown_3C; // edi
  NiNode *attachedNode_40; // edi
  double v10; // st7
  MagicShaderHitEffect *result; // eax

  v5 = 0; /*0x6a09af*/
  MagicHitEffect_constr_args((NiObject *)this, targetReference, 0); /*0x6a09b3*/
  this->super.super.vtable = (BSTempEffectVtbl *)&MagicShaderHitEffect::`vftable'; /*0x6a09b8*/
  this->unknown_3C = 0; /*0x6a09c2*/
  this->attachedNode_40 = 0; /*0x6a09c5*/
  this->textureEffectData_48 = 0; /*0x6a09c8*/
  this->elapsedVisualSeconds_38 = 0.0; /*0x6a09d1*/
  v6 = InterlockedDecrement; /*0x6a09d4*/
  this->effectShader_34 = effectShader; /*0x6a09da*/
  textureEffectData_48 = this->textureEffectData_48; /*0x6a09dd*/
  if ( textureEffectData_48 ) /*0x6a09e7*/
  {
    if ( !v6((volatile LONG *)textureEffectData_48 + 1) ) /*0x6a09ed*/
      (**(void (__thiscall ***)(BSShaderPPLightingProperty::TextureEffectData *, int))textureEffectData_48)( /*0x6a09ff*/
        textureEffectData_48,
        1);
    this->textureEffectData_48 = 0; /*0x6a0a01*/
  }
  unknown_3C = (volatile LONG *)this->unknown_3C; /*0x6a0a04*/
  if ( unknown_3C ) /*0x6a0a09*/
  {
    if ( !v6(unknown_3C + 1) ) /*0x6a0a0f*/
      (**(void (__thiscall ***)(void *, int))unknown_3C)((void *)unknown_3C, 1); /*0x6a0a21*/
    this->unknown_3C = 0; /*0x6a0a23*/
  }
  attachedNode_40 = this->attachedNode_40; /*0x6a0a26*/
  if ( attachedNode_40 ) /*0x6a0a2b*/
  {
    if ( !v6((volatile LONG *)&attachedNode_40->members) ) /*0x6a0a31*/
      attachedNode_40->vtbl->super.super.super.Destructor((NiRefObject *)attachedNode_40, 1); /*0x6a0a43*/
    this->attachedNode_40 = 0; /*0x6a0a45*/
  }
  this->weaponAttachmentFlag_28 = 0; /*0x6a0a48*/
  this->effectCode_2C = 0xFFFFFFFF; /*0x6a0a4b*/
  this->boundObject_30 = 0; /*0x6a0a52*/
  if ( (PlayerCharacter *)this->super.targetReference == reference ) /*0x6a0a5e*/
  {
    if ( PlayerCharacter_GetNodeByPerspective(reference, 0) ) /*0x6a0a61*/
    {
      if ( (PlayerCharacter_GetNodeByPerspective(reference, 0)->members.super.m_flags & 1) == 0 ) /*0x6a0a7a*/
        v5 = 1; /*0x6a0a7c*/
    }
  }
  this->perspectiveState_44 = v5;               // Verified (Oblivion): alternate shader constructor accepts an explicit effect shader at +0x34 and elapsedSeconds at base +0x08, initializes +0x2C to 0xFFFFFFFF, and derives +0x44 from the player's selected node. TESEffectShader* +0x34 is Probable as the common field type, corroborated by the owner-based constructor and the matching Fallout constructor signature. /*0x6a0a83*/
  v10 = elapsedSeconds; /*0x6a0a8e*/
  result = this; /*0x6a0a93*/
  if ( elapsedSeconds < 0.0 ) /*0x6a0a95*/
    v10 = flt_A32048; /*0x6a0a99*/
  this->super.super.durationSeconds = v10; /*0x6a0a9f*/
  return result; /*0x6a0aa2*/
}
