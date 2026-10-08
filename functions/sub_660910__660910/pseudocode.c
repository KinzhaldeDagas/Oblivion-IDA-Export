// PlayerCharacter vtable +0x2CC pickup transaction for a world reference. Handles activation/ownership, optional direct merge into currently equipped AMMO, world-reference cleanup, and quiver refresh.
void __thiscall PlayerCharacter_PickUpReference(PlayerCharacter *this, TESObjectREFR *reference, int arg1, int arg2)
{
  double v4; // st6
  TESKey *v7; // eax
  NiObjectNET *v8; // eax
  TESObjectREFR **v9; // ebx
  Actor *v10; // ebp
  TESObjectREFR *v11; // eax
  TESForm *Owner; // ebp
  void *v13; // ebx
  Actor *v14; // eax
  bool v15; // zf
  char v16; // al
  void (__thiscall **p_Unk_8E)(Actor *); // ebx
  bool v18; // al
  ExtraDataList *p_baseExtraList; // ecx
  char v20; // bl
  TESForm *type; // ebp
  int *v22; // eax
  int ExtraCount; // ebp
  TESHealthForm *v24; // eax
  int v25; // ebp
  void *v26; // eax
  int v27; // eax
  ExtraContainerChanges_Data *ContainerChanges; // eax
  ExtraDataList ***v29; // eax
  char v30; // al
  int v31; // [esp+8h] [ebp-1Ch]
  TESObjectREFR *v32; // [esp+Ch] [ebp-18h]
  int v33; // [esp+10h] [ebp-14h]
  TESForm *form; // [esp+1Ch] [ebp-8h]
  ExtraDataList *v35; // [esp+20h] [ebp-4h]
  TESChildCELL *v36; // [esp+28h] [ebp+4h]
  TESChildCELL *OverrideFile; // [esp+28h] [ebp+4h]

  v7 = (TESKey *)reference->vtbl->GetBaseForm(reference);// Player world pickup begins by virtual sourceRef->GetBaseForm(). For a landed thrown proxy this is the AMMO assigned at 0x60CCA5, not the originating WEAP. /*0x66092b*/
  sub_5E99C0((TESObjectREFR *)this, v7, 1, 0); /*0x660930*/
  v8 = (NiObjectNET *)reference->vtbl->GetNiNode(reference); /*0x660945*/
  sub_88CF90(v8, 1u, 1, 0); /*0x660948*/
  v9 = sub_674E40((ActorProcessManager *)&qword_B3BB2C[0x75], reference->member.super.refID, (TESObjectREFR *)this); /*0x66095f*/
  v36 = (TESChildCELL *)v9; /*0x660963*/
  if ( v9 ) /*0x660967*/
  {
    do /*0x660992*/
    {
      v10 = (Actor *)*v9; /*0x660970*/
      if ( !*v9 ) /*0x660970*/
        break; /*0x660974*/
      sub_5E2E00((Actor *)*v9); /*0x660978*/
      if ( v11 == reference ) /*0x660981*/
        sub_5E03C0(v10, (int)this); /*0x660984*/
      else
        sub_5E03C0(v10, 0); /*0x660988*/
      v9 = (TESObjectREFR **)v9[1]; /*0x66098d*/
    }
    while ( v9 ); /*0x660992*/
    BSSimpleList_Clear(v36); /*0x660998*/
    FormHeapFree((unsigned int)v36); /*0x6609a2*/
  }
  OverrideFile = (TESChildCELL *)TESForm_GetOverrideFile((TESForm *)reference, 0xFFFFFFFF); /*0x6609b8*/
  if ( !Menu_GetOpenMenuTile(0x3F1) && !LOBYTE(::reference->unk124) ) /*0x6609d2*/
  {
    Owner = TESObjectREFR_GetOwner(reference); /*0x6609f4*/
    v13 = OblivionDynamicCast( /*0x660a00*/
            reference,
            0,
            (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
            &ArrowProjectile `RTTI Type Descriptor',
            0);
    if ( !Owner /*0x660a32*/
      || TESObjectREFR_IsOwnedBy(reference, (TESObjectREFR *)this, 1)
      || v13
      || reference->vtbl->GetBaseForm(reference)->member.refID == 0xF )
    {
      p_baseExtraList = &reference->member.baseExtraList; /*0x660acc*/
LABEL_24:
      ExtraDataList_RemoveOwner(p_baseExtraList); /*0x660acf*/
      goto LABEL_25; /*0x660acf*/
    }
    v14 = sub_676480((int)&qword_B3BB2C[0x75], reference); /*0x660a3e*/
    v15 = (reference->member.super.flags & 1) == 0; /*0x660a43*/
    unk_B3BAF0 = (int)v14; /*0x660a47*/
    if ( !v15 || OverrideFile || (sub_4D8260((int)reference, 2u), v16) ) /*0x660a5f*/
    {
      p_Unk_8E = &this->vtbl->super.Unk_8E; /*0x660aa4*/
      v33 = ((int (__thiscall *)(TESObjectREFR *, int, _DWORD, TESForm *))reference->vtbl->GetBaseForm)( /*0x660aac*/
              reference,
              arg1,
              0,
              Owner);
      v32 = reference; /*0x660aad*/
    }
    else
    {
      if ( !unk_B3BAF0 ) /*0x660a68*/
        goto LABEL_21; /*0x660a68*/
      p_Unk_8E = &this->vtbl->super.Unk_8E; /*0x660a7e*/
      v33 = ((int (__thiscall *)(TESObjectREFR *, int, _DWORD, TESForm *))reference->vtbl->GetBaseForm)( /*0x660a8c*/
              reference,
              arg1,
              0,
              Owner);
      v32 = (TESObjectREFR *)unk_B3BAF0; /*0x660a8d*/
    }
    (*p_Unk_8E)((Actor *)this); /*0x660ab2*/
LABEL_21:
    v18 = sub_4DE880(reference, 0); /*0x660ab4*/
    p_baseExtraList = &reference->member.baseExtraList; /*0x660abf*/
    if ( !v18 ) /*0x660ac2*/
    {
      ExtraDataList::SetOrRemoveExtraOwnership(p_baseExtraList, Owner); /*0x660ac5*/
      goto LABEL_25; /*0x660aca*/
    }
    goto LABEL_24; /*0x660ac2*/
  }
LABEL_25:
  v20 = 0; /*0x660ad4*/
  if ( this->super.super.super.process->GetEquippedAmmoData(this->super.super.super.process, 1) ) /*0x660ae3*/
  {
    type = this->super.super.super.process->GetEquippedAmmoData(this->super.super.super.process, 1)->type; /*0x660afc*/
    if ( reference->vtbl->GetBaseForm(reference) == type )// Equipped-AMMO fast merge: requires picked reference base form to equal the currently equipped AMMO form. On success this path bypasses both form-based ContainerExtraData_AddItem (0x48F7C0) and reference-based ContainerExtraData_AddItemFromWorldReference (0x48AA10). /*0x660b0d*/
    {
      v22 = (int *)this->super.super.super.process->GetEquippedAmmoData(this->super.super.super.process, 1); /*0x660b20*/
      if ( !EntryData_HasDefaultContainerExtraList(v22) || ExtraDataList_GetOwner(&reference->member.baseExtraList) ) /*0x660b30*/
      {
        ExtraCount = ExtraDataList_GetExtraCount(&reference->member.baseExtraList); /*0x660b4a*/
        v24 = (TESHealthForm *)this->super.super.super.process->GetEquippedAmmoData(this->super.super.super.process, 1); /*0x660b57*/
        v25 = TESHealthForm_GetHealth(v24) + ExtraCount; /*0x660b63*/
        v26 = (void *)((int (__thiscall *)(LowProcess *, int, int))this->super.super.super.process->GetEquippedAmmoData)( /*0x660b70*/
                        this->super.super.super.process,
                        1,
                        v25);
        Shared_SetDwordAtOffset04(v26, (int)v32); /*0x660b74*/
        v27 = ((int (__thiscall *)(LowProcess *, int, int))this->super.super.super.process->GetEquippedAmmoData)( /*0x660b86*/
                this->super.super.super.process,
                1,
                v33);
        v35 = &::reference->super.super.super.super.baseExtraList; /*0x660b94*/
        form = *(TESForm **)(v27 + 8); /*0x660b9a*/
        v31 = ExtraDataList_GetExtraCount(&reference->member.baseExtraList); /*0x660bae*/
        ContainerChanges = ExtraDataList_GetContainerChanges(v35); /*0x660bb0*/
        ExtraContainerChanges_AdjustCountForForm(ContainerChanges, form, v31); /*0x660bb7*/
        v29 = (ExtraDataList ***)this->super.super.super.process->GetEquippedAmmoData( /*0x660bc9*/
                                   this->super.super.super.process,
                                   1);
        ExtraDataList_SetExtraCount(**v29, v25);// Write the merged total into the selected equipped-AMMO ExtraDataList and mark fast-merge success, suppressing both ordinary inventory-add boundaries. A proxy-to-WEAP recovery hook must account for this separate path if it can become reachable. /*0x660bd0*/
        v20 = 1; /*0x660bd5*/
      }
    }
  }
  if ( (reference->member.super.flags & 1) == 0 && !OverrideFile ) /*0x660be6*/
  {
    sub_4D8260((int)reference, 2u); /*0x660bf0*/
    if ( v30 ) /*0x660bf7*/
    {
      sub_4D7D80(reference); /*0x660bfb*/
      if ( !v20 ) /*0x660c02*/
      {
        TESObjectREFR_AddItemFromWorldReference((TESObjectREFR *)this, reference, arg1, 0, 0);// Player world-pickup branch uses the reference-based insertion path, not form-based ContainerExtraData_AddItem. /*0x660c10*/
        sub_57A3B0(v4, 0); /*0x660c17*/
        return; /*0x660c26*/
      }
    }
    else
    {
      if ( !v20 ) /*0x660c2b*/
        TESObjectREFR_AddItemFromWorldReference((TESObjectREFR *)this, reference, arg1, 0, 0);// Player world-pickup branch uses the reference-based insertion path, preserving sourceRef->GetBaseForm(). /*0x660c39*/
      reference->vtbl->super.Destroy((TESForm *)reference, 1); /*0x660c47*/
      if ( !v20 ) /*0x660c4b*/
        goto LABEL_39; /*0x660c4b*/
    }
LABEL_38:
    Actor_RefreshQuiverArrowVisibility((Actor *)this, (ActorAnimData *)this->super.skinInfo, 0); /*0x660c4d*/
    Actor_RefreshQuiverArrowVisibility((Actor *)this, (ActorAnimData *)this->firstPersonSkinInfo, 0); /*0x660c68*/
LABEL_39:
    sub_57A3B0(v4, 0); /*0x660c6d*/
    return; /*0x660c7e*/
  }
  sub_4D7D80(reference); /*0x660c83*/
  if ( v20 ) /*0x660c8a*/
    goto LABEL_38; /*0x660c8a*/
  TESObjectREFR_AddItemFromWorldReference((TESObjectREFR *)this, reference, arg1, arg2, 0);// Player world-pickup branch uses the reference-based insertion path; an AMMO-backed thrown reference therefore yields proxy AMMO without a companion hook here. /*0x660c9b*/
  sub_57A3B0(v4, 0); /*0x660ca2*/
}
