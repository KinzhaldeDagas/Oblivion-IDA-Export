// Verified: persistent-cell AddReference updates the WorldSpace coordinate/fallback persistent-reference index (+0x64) through TESWorldSpace_IndexReference. Ordinary cell additions do not index there. This routine does not populate the separate SubSpace spatial index at +0x60.
void __thiscall TESObjectCELL_AddReference(TESObjectCELL *this, TESObjectREFR *reference)
{
  double v2; // st5
  double v3; // st6
  double v4; // st7
  TESWorldSpace *worldSpace; // ecx
  TESObjectCELL *DwordAtOffset40; // eax
  float v8; // ebx
  _DWORD *ThreadLocalStoragePointer; // ebp
  TESForm::FormFlags flags; // eax
  NiAVObject *v11; // ebp
  char v12; // bl
  ActorAnimData *v13; // eax
  UInt8 cellProcessLevel; // al
  signed int v15; // eax

  if ( !reference || !reference->vtbl->GetBaseForm(reference) ) /*0x4d35ea*/
    return; /*0x4d35ee*/
  if ( (this->members.super.flags & 0x400) != 0 ) /*0x4d35fb*/
  {
    sub_496EA0((char *)&unk_B35C80, this); /*0x4d3603*/
    BSSimpleList_PushFront(&this->members.objectList.refr, (int)reference); /*0x4d360c*/
    sub_496F50(&unk_B35C80, this); /*0x4d3617*/
    sub_4247B0(&reference->member.baseExtraList, (BSExtraDataVtbl *)this); /*0x4d3620*/
    if ( (this->members.flags0 & 1) == 0 ) /*0x4d3629*/
    {
      worldSpace = this->members.worldSpace; /*0x4d362b*/
      if ( worldSpace ) /*0x4d3630*/
        TESWorldSpace_IndexReference(worldSpace, reference); /*0x4d3633*/
    }
    if ( !*(_BYTE *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer /*0x4d3647*/
                     + LODWORD(OB_ShaderConstantStorage_010201A0[0x18FF4]))
                   + 0x184) )
      this->vtbl->SetFromActiveFile((TESForm *)this, 1); /*0x4d3660*/
    return; /*0x4d3664*/
  }
  DwordAtOffset40 = (TESObjectCELL *)Shared_GetDwordAtOffset40(reference); /*0x4d3669*/
  if ( DwordAtOffset40 ) /*0x4d3670*/
    TESObjectCELL_RemoveReference(DwordAtOffset40, reference); /*0x4d3675*/
  sub_496EA0((char *)&unk_B35C80, this); /*0x4d3680*/
  BSSimpleList_PushFront(&this->members.objectList.refr, (int)reference); /*0x4d3689*/
  ((void (__thiscall *)(TESObjectREFR *, TESObjectCELL *))reference->vtbl->ChangeCell)(reference, this); /*0x4d3699*/
  sub_496F50(&unk_B35C80, this); /*0x4d36a1*/
  if ( (reference->member.super.flags & 0x800) == 0 ) /*0x4d36ae*/
  {
    if ( reference->vtbl->GetNiNode(reference) ) /*0x4d36ba*/
    {
      if ( !OblivionDynamicCast( /*0x4d36cf*/
              reference,
              0,
              (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
              &MobileObject `RTTI Type Descriptor',
              0) )
        reference->vtbl->Unk_52(reference); /*0x4d36e5*/
    }
  }
  v8 = OB_ShaderConstantStorage_010201A0[0x18FF4]; /*0x4d36eb*/
  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x4d36f8*/
  if ( (reference->member.super.flags & 0x4000) == 0 /*0x4d3710*/
    && !TESObjectREFR_IsPersistent(reference)
    && !*(_BYTE *)(ThreadLocalStoragePointer[LODWORD(v8)] + 0x184) )
  {
    this->vtbl->SetFromActiveFile((TESForm *)this, 1); /*0x4d3724*/
  }
  if ( *(_BYTE *)(ThreadLocalStoragePointer[LODWORD(v8)] + 0x184) /*0x4d374d*/
    || (flags = reference->member.super.flags, (flags & 0x4000) != 0)
    || (flags & 0x800) != 0 )
  {
LABEL_45:
    TESObjectREFR_RegisterAttachedLightWithShadowScene(reference, 0);// This retail reference/cell lifecycle call passes useSpellEffectExtraLight=false; it registers only ordinary ExtraLight. /*0x4d38d4*/
    return; /*0x4d38d8*/
  }
  v11 = (NiAVObject *)reference->vtbl->GetNiNode(reference); /*0x4d3768*/
  if ( !TESObjectCELL_IsProcessLevel_LowHigh(this, 0) ) /*0x4d3771*/
  {
    if ( reference->vtbl->IsActor(reference) /*0x4d38c4*/
      && !PlayerCharacter::IsSleeping_(::reference)
      && (g_TESSaveLoadGame->flags & 0x20) == 0 )
    {
      ((void (__thiscall *)(TESObjectREFR *, _DWORD))reference->vtbl->Set3D)(reference, 0); /*0x4d38d2*/
    }
    goto LABEL_45; /*0x4d38d2*/
  }
  v12 = 0; /*0x4d3777*/
  if ( v11 ) /*0x4d377b*/
  {
    TESObjectCELL::AttachReference3DToQuad(this, reference); /*0x4d3780*/
    v13 = reference->vtbl->GetAnimData(reference); /*0x4d378f*/
    if ( v13 ) /*0x4d3793*/
      ActorAnimData_ApplyToActor(v13, reference); /*0x4d3798*/
    else
      NiAVObject_UpdateNiAVObject(v11, 0.0, 0); /*0x4d37d6*/
    goto LABEL_26; /*0x4d3798*/
  }
  if ( !OblivionDynamicCast( /*0x4d3801*/
          reference,
          0,
          (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
          &Actor `RTTI Type Descriptor',
          0)
    || (cellProcessLevel = this->members.cellProcessLevel, cellProcessLevel == 6)
    || cellProcessLevel == 5 )
  {
    v12 = 1; /*0x4d3803*/
  }
  if ( reference->vtbl->IsActor(reference) && PlayerCharacter::IsSleeping_(::reference) || !v12 ) /*0x4d382a*/
  {
LABEL_26:
    if ( reference->vtbl->IsActor(reference) ) /*0x4d37a7*/
    {
      sub_6748B0(&qword_B3BB2C[0x75], (MobileObject *)reference); /*0x4d37b7*/
      TESObjectREFR_RegisterAttachedLightWithShadowScene(reference, 0);// This retail reference/cell lifecycle call passes useSpellEffectExtraLight=false; it registers only ordinary ExtraLight. /*0x4d37c0*/
      return; /*0x4d37c9*/
    }
    goto LABEL_45; /*0x4d37ab*/
  }
  if ( reference->vtbl->IsActor(reference) && (!sub_45A500(g_TESSaveLoadGame) || (g_TESSaveLoadGame->flags & 0x10) != 0) ) /*0x4d385e*/
    reference->vtbl->MoveToHigh(reference); /*0x4d386a*/
  v15 = sub_440C80(MEMORY[0xB333A0], this, 0); /*0x4d3875*/
  sub_438060((_DWORD **)MEMORY[0xB33A1C], 0, v2, v3, v4, reference, v15); /*0x4d3882*/
  TESObjectREFR_RegisterAttachedLightWithShadowScene(reference, 0);// This retail reference/cell lifecycle call passes useSpellEffectExtraLight=false; it registers only ordinary ExtraLight. /*0x4d388b*/
}
