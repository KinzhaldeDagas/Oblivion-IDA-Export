// Verified MagicShaderHitEffect detach stops its looping reference sound when applicable, detaches Ni objects from the target's node, releases its NiPointer-held objects, and clears its targetReference pointer.
void __thiscall MagicShaderHitEffect_Detach(MagicShaderHitEffect *this)
{
  TESObjectREFR *targetReference; // edx
  TESEffectShader *effectShader_34; // eax
  UInt32 refID; // eax
  unsigned int **sound; // ecx
  TESObjectREFR *v6; // eax
  NiNode *NodeByPerspective; // eax
  NiNode *v8; // eax
  NiNode *attachedNode_40; // eax
  ParticleShaderProperty *shaderProperty_3C; // edi
  LONG (__stdcall *v11)(volatile LONG *); // ebx
  NiAVObject *v12; // ecx
  NiNode *v13; // edi
  BSShaderPPLightingProperty::TextureEffectData *textureEffectData_48; // edi

  targetReference = this->super.targetReference; /*0x6a1595*/
  if ( targetReference ) /*0x6a159d*/
  {
    effectShader_34 = this->effectShader_34; /*0x6a159f*/
    if ( effectShader_34 ) /*0x6a15a4*/
    {
      refID = effectShader_34->super.member.refID; /*0x6a15a6*/
      if ( refID == 0x852FE || refID == 0x84A51 ) /*0x6a15b5*/
      {
        sound = (unsigned int **)MEMORY[0xB33398]->sound; /*0x6a15bc*/
        if ( sound ) /*0x6a15c1*/
          SoundManager_StopRefLoopingSoundsWithFade(sound, (LONG)targetReference, 1.0); /*0x6a15ca*/
      }
    }
  }
  if ( this->textureEffectData_48 ) /*0x6a15cf*/
  {
    v6 = this->super.targetReference; /*0x6a15d4*/
    if ( v6 == (TESObjectREFR *)reference ) /*0x6a15df*/
    {
      NodeByPerspective = PlayerCharacter_GetNodeByPerspective(reference, 1); /*0x6a15e3*/
      if ( NodeByPerspective ) /*0x6a15ea*/
        TESEffectShader_RemoveTextureEffectFromScenegraph(NodeByPerspective, this->textureEffectData_48);// Verified (Oblivion): MagicShaderHitEffect_Detach invokes TESEffectShader_RemoveTextureEffectFromScenegraph for its target node and exact textureEffectData_48 pointer before releasing that retained object. /*0x6a15f4*/
      v8 = PlayerCharacter_GetNodeByPerspective(reference, 0); /*0x6a1600*/
      if ( v8 ) /*0x6a1607*/
LABEL_15:
        TESEffectShader_RemoveTextureEffectFromScenegraph(v8, this->textureEffectData_48); /*0x6a1623*/
    }
    else if ( v6 ) /*0x6a1611*/
    {
      v8 = v6->vtbl->GetNiNode(this->super.targetReference); /*0x6a161d*/
      if ( v8 ) /*0x6a1621*/
        goto LABEL_15; /*0x6a1621*/
    }
  }
  attachedNode_40 = this->attachedNode_40; /*0x6a1630*/
  if ( attachedNode_40 ) /*0x6a1635*/
    NiProperty_DetachFromActorScenegraphs(attachedNode_40, this->shaderProperty_3C); /*0x6a163f*/
  shaderProperty_3C = this->shaderProperty_3C; /*0x6a1644*/
  v11 = InterlockedDecrement; /*0x6a1649*/
  if ( shaderProperty_3C ) /*0x6a164f*/
  {
    if ( !v11((volatile LONG *)&shaderProperty_3C->super.member) ) /*0x6a1655*/
      (*(void (__thiscall **)(ParticleShaderProperty *, int))shaderProperty_3C->super.vtbl)(shaderProperty_3C, 1); /*0x6a1667*/
    this->shaderProperty_3C = 0; /*0x6a1669*/
  }
  v12 = (NiAVObject *)this->attachedNode_40; /*0x6a166c*/
  if ( v12 ) /*0x6a1671*/
    NiAVObject_SetParentAndDetachFromOld(v12, 0); /*0x6a1674*/
  v13 = this->attachedNode_40; /*0x6a1679*/
  if ( v13 ) /*0x6a167e*/
  {
    if ( !v11((volatile LONG *)&v13->members) ) /*0x6a1684*/
      v13->vtbl->super.super.super.Destructor((NiRefObject *)v13, 1); /*0x6a1696*/
    this->attachedNode_40 = 0; /*0x6a1698*/
  }
  textureEffectData_48 = this->textureEffectData_48; /*0x6a169b*/
  if ( textureEffectData_48 ) /*0x6a16a0*/
  {
    if ( !v11((volatile LONG *)textureEffectData_48 + 1) ) /*0x6a16a6*/
      (**(void (__thiscall ***)(BSShaderPPLightingProperty::TextureEffectData *, int))textureEffectData_48)( /*0x6a16b8*/
        textureEffectData_48,
        1);
    this->textureEffectData_48 = 0; /*0x6a16ba*/
  }
  this->super.targetReference = 0; /*0x6a16be*/
}
