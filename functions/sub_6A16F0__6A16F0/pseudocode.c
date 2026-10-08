// Verified MagicShaderHitEffect InitializeVisual builds shader/texture state, restores target attachment, and returns false when required target or resources are unavailable.
bool __thiscall MagicShaderHitEffect_InitializeVisual(MagicShaderHitEffect *this)
{
  ActiveEffect *ownerActiveEffect; // eax
  PlayerCharacter *v3; // ecx
  bool v4; // zf
  unsigned __int8 v5; // cl
  _DWORD *unknown_34; // eax
  int *sound; // ebx
  int v8; // eax
  int *v9; // esi
  float *v10; // eax
  void *v11; // ecx
  void *v12; // edx
  TESObjectREFRVtbl *vtbl; // ecx
  bool v14; // bl
  void **v15; // ebx
  NiNode *v16; // eax
  NiNode *v17; // eax
  void **p_unknown_3C; // esi
  _DWORD *v19; // edi
  const char *v20; // eax
  int *SourceTexture_010201A0; // eax
  float *v22; // eax
  float *v23; // eax
  double v24; // st7
  TESObjectREFR *targetReference; // ecx
  TESForm *v26; // eax
  void *v27; // eax
  float *v28; // ecx
  volatile LONG *unknown_40; // eax
  void **p_unknown_40; // ebx
  _DWORD *v31; // ebx
  const char *v32; // eax
  int *v33; // eax
  BSShaderPPLightingProperty::TextureEffectData *v34; // eax
  char v36; // [esp+21h] [ebp-13Bh]
  char v37; // [esp+22h] [ebp-13Ah] BYREF
  char v38; // [esp+23h] [ebp-139h] BYREF
  void *v39; // [esp+24h] [ebp-138h] BYREF
  int v40; // [esp+28h] [ebp-134h] BYREF
  NiNode *v41; // [esp+2Ch] [ebp-130h] BYREF
  float timeElapsed; // [esp+30h] [ebp-12Ch] BYREF
  void *slot; // [esp+34h] [ebp-128h] BYREF
  void *v44[3]; // [esp+38h] [ebp-124h] BYREF
  float v45; // [esp+44h] [ebp-118h]
  char ArgList[260]; // [esp+48h] [ebp-114h] BYREF
  int v47; // [esp+158h] [ebp-4h]

  ownerActiveEffect = this->super.ownerActiveEffect; /*0x6a172d*/
  if ( ownerActiveEffect ) /*0x6a1734*/
  {
    timeElapsed = ownerActiveEffect->members.timeElapsed; /*0x6a1739*/
    this->super.elapsedSeconds = timeElapsed; /*0x6a1741*/
    this->super.bFinished = (ownerActiveEffect->members.effectItem->setting->effectFlags & 0x400) == 0; /*0x6a1755*/
    if ( (ownerActiveEffect->members.aeFlags & 0x10) != 0 ) /*0x6a1760*/
      *(float *)&this->elapsedVisualSeconds_38 = flt_A2FE7C; /*0x6a1768*/
  }
  v3 = reference; /*0x6a176d*/
  v4 = this->super.targetReference == (TESObjectREFR *)reference; /*0x6a1773*/
  timeElapsed = 0.0; /*0x6a1776*/
  v37 = 0; /*0x6a177a*/
  v38 = 0; /*0x6a177f*/
  v36 = 0; /*0x6a1784*/
  if ( v4 ) /*0x6a1789*/
  {
    if ( PlayerCharacter_GetNodeByPerspective(v3, 0) ) /*0x6a178c*/
    {
      v5 = (PlayerCharacter_GetNodeByPerspective(reference, 0)->members.super.m_flags & 1) == 0; /*0x6a17ab*/
      if ( this->super.elapsedSeconds <= 0.0 || (v36 = 1, v5 == this->perspectiveState_44) ) /*0x6a17bd*/
        v36 = 0; /*0x6a17bf*/
      this->perspectiveState_44 = v5;           // Verified (Oblivion): field +0x44 is written from the player's node-perspective state and read during shader-effect initialization to restore perspective-dependent visual state. Its exact enum values remain Unknown. /*0x6a17c4*/
    }
  }
  v41 = 0; /*0x6a17e2*/
  v40 = 0; /*0x6a17e6*/
  MagicShaderHitEffect_ResolveVisualAttachmentTargets( /*0x6a17ea*/
    (int)this,
    &v38,
    &v37,
    &timeElapsed,
    (float **)&v41,
    (float **)&v40);
  if ( !v41 ) /*0x6a17f3*/
    return 0; /*0x6a17f3*/
  if ( !v40 ) /*0x6a17fd*/
    return 0; /*0x6a17fd*/
  unknown_34 = this->effectShader_34; /*0x6a1803*/
  if ( !unknown_34 ) /*0x6a1808*/
    return 0; /*0x6a1808*/
  sound = (int *)MEMORY[0xB33398]->sound; /*0x6a1814*/
  if ( sound ) /*0x6a1819*/
  {
    v8 = unknown_34[3]; /*0x6a181f*/
    if ( v8 == 0x852FE || v8 == 0x84A51 ) /*0x6a182e*/
    {
      v9 = PlaySound___(sound, "AMBFireMediumLP", 0x12, 1); /*0x6a1844*/
      if ( v9 ) /*0x6a1848*/
      {
        v10 = this->super.targetReference->vtbl->GetPos(this->super.targetReference); /*0x6a1855*/
        v11 = *(void **)v10; /*0x6a1857*/
        v12 = *((void **)v10 + 1); /*0x6a1859*/
        v45 = v10[2]; /*0x6a1862*/
        v44[2] = v12; /*0x6a186e*/
        v44[1] = v11; /*0x6a1876*/
        sub_6B7360(v9, *(float *)&v11, *(float *)&v12, v45); /*0x6a1887*/
        sub_6B7280(v9, 1.0); /*0x6a1894*/
        sub_6B7190(v9, 1); /*0x6a189d*/
        sub_6AC3E0((_DWORD **)sound, *v9, (LONG)this->super.targetReference); /*0x6a18ab*/
        sub_6B73E0(v9); /*0x6a18b2*/
        FormHeapFree((unsigned int)v9); /*0x6a18b8*/
      }
    }
  }
  if ( this->bWeaponEnchantment_28 /*0x6a1926*/
    && this->super.targetReference->vtbl->IsActor(this->super.targetReference)
    && (vtbl = this->super.targetReference[1].vtbl) != 0
    && ((v14 = (*((unsigned __int8 (__thiscall **)(TESObjectREFRVtbl *))vtbl->super.super.InitializeComponent + 0x4E))(vtbl) == 0,
         !(*((unsigned __int8 (__thiscall **)(TESObjectREFRVtbl *))this->super.targetReference[1].vtbl->super.super.InitializeComponent
           + 0xC1))(this->super.targetReference[1].vtbl))
     && (MagicShaderHitEffect *)reference->unk5E0 != this
     || !v14)
    || TESEffectShader_HasFlagBits((_BYTE *)this->effectShader_34, 8u) )// Verified (Oblivion): TESEffectShader::Data.cFlags & 0x08 joins the particle shader property cleanup/detach branch in MagicShaderHitEffect_InitializeVisual; when clear, this function creates/configures a ParticleShaderProperty. Confidence applies to the behavior, not to any broader meaning of the flag.
  {
    p_unknown_3C = &this->shaderProperty_3C; /*0x6a1b42*/
    if ( this->shaderProperty_3C ) /*0x6a1b3d*/
    {
      unknown_40 = (volatile LONG *)this->attachedNode_40; /*0x6a1b47*/
      p_unknown_40 = &this->attachedNode_40; /*0x6a1b4c*/
      if ( unknown_40 ) /*0x6a1b4f*/
      {
        NiProperty_DetachFromActorScenegraphs(unknown_40, (int)this->shaderProperty_3C); /*0x6a1b56*/
        NiSmartPointer_Set__((Ni2DBuffer **)&this->shaderProperty_3C, 0); /*0x6a1b5e*/
        if ( *p_unknown_40 ) /*0x6a1b63*/
          NiAVObject_SetParentAndDetachFromOld((NiAVObject *)*p_unknown_40, 0); /*0x6a1b6a*/
        NiSmartPointer_Set__((Ni2DBuffer **)&this->attachedNode_40, 0); /*0x6a1b72*/
      }
    }
  }
  else
  {
    v15 = &this->attachedNode_40; /*0x6a1936*/
    if ( !this->attachedNode_40 )               // Verified (Oblivion): shader field +0x40 is a refcounted NiNode allocated by NiNode::NiNode, attached/updated during visual setup, detached and released during teardown. /*0x6a1933*/
    {
      v16 = (NiNode *)FormHeapAlloc(0xDCu); /*0x6a1940*/
      v44[0] = v16; /*0x6a1948*/
      v47 = 0; /*0x6a194e*/
      if ( v16 ) /*0x6a1955*/
        v17 = NiNode::NiNode(v16, 0); /*0x6a195a*/
      else
        v17 = 0; /*0x6a1961*/
      v47 = 0xFFFFFFFF; /*0x6a1966*/
      NiSmartPointer_Set__((Ni2DBuffer **)&this->attachedNode_40, (Ni2DBuffer *)v17); /*0x6a1971*/
      NiObjectNET_SetName((NiObjectNET *)*v15, "ParticleShader Geometry"); /*0x6a197d*/
      qmemcpy((char *)*v15 + 0x30, &stru_B26AF0[0xA].unk2C, 0x24u); /*0x6a1991*/
    }
    p_unknown_3C = &this->shaderProperty_3C; /*0x6a1998*/
    if ( !this->shaderProperty_3C ) /*0x6a1995*/
    {
      v39 = 0; /*0x6a19a1*/
      v19 = (char *)this->effectShader_34 + 0x104; /*0x6a19a8*/
      v47 = 1; /*0x6a19b0*/
      if ( OB_CompactString_Length_010201A0(v19) ) /*0x6a19bb*/
      {
        v20 = (const char *)v19[1]; /*0x6a19cd*/
        if ( !v20 ) /*0x6a19cf*/
          v20 = EmptyString; /*0x6a19d1*/
        _sprintf(ArgList, "%s\\%s", "Textures", v20); /*0x6a19e6*/
        SourceTexture_010201A0 = (int *)OB_TES_LoadOrFindSourceTexture_010201A0((UInt32 *)&slot, ArgList, 0, 0); /*0x6a1a02*/
        LOBYTE(v47) = 2; /*0x6a1a0c*/
        OB_NiSmartPointer_Assign_010201A0((int *)&v39, SourceTexture_010201A0); /*0x6a1a14*/
        LOBYTE(v47) = 1; /*0x6a1a1d*/
        NiPointerSlot_Release(&slot); /*0x6a1a25*/
        v22 = TESEffectShader_CreateVisualProperty( /*0x6a1a41*/
                (float *)this->effectShader_34,
                (int)*v15,
                v40,
                (int)v39,
                *(float *)&this->elapsedVisualSeconds_38);// Verified (Oblivion): returned object is ParticleShaderProperty* (subtype ID 0xE), retained as a single pointer at +0x3C. Fallout stores a BSSimpleArray<NiPointer<ParticleShaderProperty>> at +0x38 instead; do not transfer the Fallout layout.
        NiSmartPointer_Set__((Ni2DBuffer **)&this->shaderProperty_3C, (Ni2DBuffer *)v22);// Verified (Oblivion): the return from TESEffectShader_CreateVisualProperty is a ParticleShaderProperty*, held in shaderProperty_3C at +0x3C with its own reference-counted lifetime. /*0x6a1a49*/
      }
      v47 = 0xFFFFFFFF; /*0x6a1a52*/
      NiPointerSlot_Release(&v39); /*0x6a1a5d*/
    }
    v23 = (float *)*p_unknown_3C; /*0x6a1a64*/
    if ( *p_unknown_3C ) /*0x6a1a64*/
    {
      if ( v37 ) /*0x6a1a73*/
      {
        v24 = timeElapsed; /*0x6a1a75*/
        *((_DWORD *)v23 + 0x1C) = 2; /*0x6a1a79*/
        v23[0x1D] = v24; /*0x6a1a80*/
      }
      if ( this->bWeaponEnchantment_28 ) /*0x6a1a83*/
        *((_BYTE *)*p_unknown_3C + 0x78) = 0; /*0x6a1a8b*/
      targetReference = this->super.targetReference; /*0x6a1a8f*/
      if ( targetReference ) /*0x6a1a94*/
      {
        v26 = targetReference->vtbl->GetBaseForm(targetReference); /*0x6a1aaa*/
        v27 = OblivionDynamicCast( /*0x6a1aad*/
                v26,
                0,
                (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                &TESObjectACTI `RTTI Type Descriptor',
                0);
        if ( v38 || v27 ) /*0x6a1abe*/
          *((_DWORD *)*p_unknown_3C + 0x1C) = (PlayerCharacter *)this->super.targetReference != reference /*0x6a1ada*/
                                           || this->perspectiveState_44;
      }
      sub_7E5C30(*p_unknown_3C, (NiNode *)v40); /*0x6a1ae8*/
      if ( v36 ) /*0x6a1af2*/
      {
        ParticleShaderProperty_ResetParticleStateAtTime((float *)*p_unknown_3C, 0.0); /*0x6a1afc*/
        v28 = (float *)*p_unknown_3C; /*0x6a1b0a*/
        *(float *)&slot = *(float *)&this->elapsedVisualSeconds_38 - dbl_A76540; /*0x6a1b10*/
        ParticleShaderProperty_UpdateParticles(v28, *(float *)&slot, 0, 1); /*0x6a1b1b*/
        ParticleShaderProperty_UpdateParticles((float *)*p_unknown_3C, *(float *)&this->elapsedVisualSeconds_38, 0, 1); /*0x6a1b2c*/
      }
    }
    this->super.super.vtable[1].super.Unk_02((NiObject *)this); /*0x6a1b39*/
  }
  if ( !TESEffectShader_HasFlagBits((_BYTE *)this->effectShader_34, 1u) )// Verified (Oblivion): if TESEffectShader::Data.cFlags & 0x01 is clear, MagicShaderHitEffect_InitializeVisual creates/retains BSShaderPPLightingProperty::TextureEffectData and calls the texture-effect setup path; when set, that path is skipped. This is independent of the particle-property path selected by bit 0x08. /*0x6a1b7c*/
  {
    if ( !this->textureEffectData_48 ) /*0x6a1b89*/
    {
      v39 = 0; /*0x6a1b96*/
      v31 = (char *)this->effectShader_34 + 0xF8; /*0x6a1ba1*/
      v47 = 3; /*0x6a1ba9*/
      if ( OB_CompactString_Length_010201A0(v31) ) /*0x6a1bb4*/
      {
        v32 = (const char *)v31[1]; /*0x6a1bc2*/
        if ( !v32 ) /*0x6a1bc4*/
          v32 = EmptyString; /*0x6a1bc6*/
        _sprintf(ArgList, "%s\\%s", "Textures", v32); /*0x6a1bdb*/
        v33 = (int *)OB_TES_LoadOrFindSourceTexture_010201A0((UInt32 *)v44, ArgList, 0, 0); /*0x6a1bf7*/
        LOBYTE(v47) = 4; /*0x6a1c01*/
        OB_NiSmartPointer_Assign_010201A0((int *)&v39, v33); /*0x6a1c09*/
        LOBYTE(v47) = 3; /*0x6a1c12*/
        NiPointerSlot_Release(v44); /*0x6a1c1a*/
      }
      v34 = TESEffectShader_CreateTextureEffectData((float *)this->effectShader_34, (int)v41, (int)v39);// Verified (Oblivion): creates a TextureEffectData object from this shader, the resolved visual object, and the loaded fill texture, then retains it in MagicShaderHitEffect::textureEffectData_48. The creator's 0x6C allocation and data initialization are directly visible at TESEffectShader_CreateTextureEffectData. /*0x6a1c2c*/
      NiSmartPointer_Set__((Ni2DBuffer **)&this->textureEffectData_48, (Ni2DBuffer *)v34);// Verified (Oblivion): shader field +0x48 receives a refcounted texture-effect object and is used by update/detach paths. Exact class identity remains Candidate. /*0x6a1c34*/
      v47 = 0xFFFFFFFF; /*0x6a1c3d*/
      NiPointerSlot_Release(&v39); /*0x6a1c48*/
    }
    TESEffectShader_ApplyTextureEffectToScenegraph((_BYTE *)this->effectShader_34, v41, (int)this->textureEffectData_48);// Verified (Oblivion): applies the retained texture-effect data recursively to the resolved scenegraph after creation/reuse; the Data.cFlags bit 0x20 skin-name filter is enforced inside TESEffectShader_ApplyTextureEffectToScenegraph. /*0x6a1c58*/
  }
  return *p_unknown_3C || this->textureEffectData_48; /*0x6a1c68*/
}
