MagicShaderHitEffect *__thiscall MagicShaderHitEffect_constr_args(
        MagicShaderHitEffect *this,
        TESObjectREFR *targetReference,
        ActiveEffect *ownerActiveEffect)
{
  TESEffectShader *v4; // ecx
  LONG (__stdcall *v5)(volatile LONG *); // ebp
  BSShaderPPLightingProperty::TextureEffectData *textureEffectData_48; // edi
  volatile LONG *unknown_3C; // edi
  NiNode *attachedNode_40; // edi
  ActiveEffect *v9; // ecx
  _DWORD *v10; // eax
  int v11; // eax

  MagicHitEffect_constr_args((NiObject *)this, targetReference, (int)ownerActiveEffect); /*0x6a0835*/
  this->super.super.vtable = (BSTempEffectVtbl *)&MagicShaderHitEffect::`vftable'; /*0x6a083c*/
  this->shaderProperty_3C = 0; /*0x6a0846*/
  this->attachedNode_40 = 0; /*0x6a0849*/
  this->textureEffectData_48 = 0; /*0x6a084c*/
  this->effectShader_34 = 0;                    // Verified (Oblivion): the owner-based constructor sets effectShader_34 from EffectSetting::effectShader at +0x78. EffectSetting_LinkForm resolves that field as TESEffectShader* using Oblivion RTTI, and the shader effect update compares it with Magic_GetLifeDetectedShader. /*0x6a084f*/
  v4 = *(TESEffectShader **)(MagicItem_GetFXEffect((_DWORD *)ownerActiveEffect->members.item, 0) + 0x78);// Verified (Oblivion): owner-based shader constructor obtains EffectSetting from MagicItem_GetFXEffect and copies its typed TESEffectShader* effectShader field (+0x78) into effectShader_34. /*0x6a0862*/
  this->elapsedVisualSeconds_38 = 0.0; /*0x6a0865*/
  v5 = InterlockedDecrement; /*0x6a0868*/
  this->effectShader_34 = v4; /*0x6a086e*/
  textureEffectData_48 = this->textureEffectData_48; /*0x6a0871*/
  if ( textureEffectData_48 ) /*0x6a0876*/
  {
    if ( !v5((volatile LONG *)textureEffectData_48 + 1) ) /*0x6a087c*/
      (**(void (__thiscall ***)(BSShaderPPLightingProperty::TextureEffectData *, int))textureEffectData_48)( /*0x6a088e*/
        textureEffectData_48,
        1);
    this->textureEffectData_48 = 0; /*0x6a0890*/
  }
  unknown_3C = (volatile LONG *)this->shaderProperty_3C; /*0x6a0893*/
  if ( unknown_3C ) /*0x6a0898*/
  {
    if ( !v5(unknown_3C + 1) ) /*0x6a089e*/
      (**(void (__thiscall ***)(void *, int))unknown_3C)((void *)unknown_3C, 1); /*0x6a08b0*/
    this->shaderProperty_3C = 0; /*0x6a08b2*/
  }
  attachedNode_40 = this->attachedNode_40; /*0x6a08b5*/
  if ( attachedNode_40 ) /*0x6a08ba*/
  {
    if ( !v5((volatile LONG *)&attachedNode_40->members) ) /*0x6a08c0*/
      attachedNode_40->vtbl->super.super.super.Destructor((NiRefObject *)attachedNode_40, 1); /*0x6a08d2*/
    this->attachedNode_40 = 0; /*0x6a08d4*/
  }
  v9 = this->super.ownerActiveEffect; /*0x6a08d7*/
  this->bWeaponEnchantment_28 = 0;              // Verified (Oblivion): ordinary owner-based shader effects initialize bWeaponEnchantment_28 to false; Process_UpdateWeaponEnchantmentShader sets it to true only for effects created from an equipped item's enchantment shader. /*0x6a08da*/
  this->effectCode_2C = v9->members.effectItem->setting->effectCode;// Verified (Oblivion): effectCode_2C is copied from EffectSetting::effectCode at +0x98. The DIAR and DIWE values are each mapped by startup factory registrations to DisintegrateArmorEffect_Make and DisintegrateWeaponEffect_Make respectively. /*0x6a08e9*/
  this->boundObject_30 = 0; /*0x6a08ec*/
  this->perspectiveState_44 = (PlayerCharacter *)this->super.targetReference == reference /*0x6a08fa*/
                           && PlayerCharacter_GetNodeByPerspective(reference, 0)
                           && (PlayerCharacter_GetNodeByPerspective(reference, 0)->members.super.m_flags & 1) == 0;// Verified (Oblivion): perspectiveState_44 is set only for the player based on the selected node's flag bit; the visual-target helper later uses it to select actor skin/node perspective.
  if ( this->effectCode_2C == kMagicHitEffectCode_DisintegrateArmor ) /*0x6a0931*/
  {
    v10 = OblivionDynamicCast( /*0x6a0943*/
            this->super.ownerActiveEffect,
            0,
            (struct _s_RTTICompleteObjectLocator *)&ActiveEffect `RTTI Type Descriptor',
            &DisintegrateArmorEffect `RTTI Type Descriptor',
            0);
    if ( v10 ) /*0x6a094d*/
    {
      v11 = v10[0xE]; /*0x6a094f*/
      if ( v11 ) /*0x6a0954*/
        this->boundObject_30 = *(TESBoundObject **)(v11 + 8); /*0x6a0959*/
    }
  }
  return this; /*0x6a095e*/
}
