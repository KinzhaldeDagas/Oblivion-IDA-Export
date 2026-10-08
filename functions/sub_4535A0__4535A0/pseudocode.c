// Verified: starts with created-form flag adjustment, then normalizes flags by runtime type/state. For TESObjectREFR it checks inventory/process/package/death/persistence and location; bit31 is set when reference location differs from its starting location. For TESObjectCELL it validates light/terrain-related flags and classifies exterior grid coordinates. Callers include UnloadForm, ResetFormForLoad, save/load consistency passes. Do not assign names to remaining individual bits without further use tracing.
unsigned int __stdcall SaveLoad_NormalizeFormChangeFlags(TESForm *form, unsigned int changeFlags)
{
  unsigned int v2; // ebx
  PlayerCharacter *v3; // esi
  ExtraDataList *v4; // eax
  TESObjectCELL *v5; // edi
  unsigned int v6; // ebx
  int XCoordinate; // esi
  int YCoordinate; // eax
  unsigned int v10; // ebx
  Actor *v11; // eax
  Actor *v12; // edi
  LowProcess *process; // ecx
  LowProcess *v14; // eax
  int editorPackage; // eax
  TESPackage *CurrentPackage; // eax
  DialoguePackageRuntimeView *v17; // eax
  int v18; // ebx
  PlayerCharacter *v19; // edi
  int v20; // ebp
  TESWorldSpace *v21; // edi
  TESObjectCELL *DwordAtOffset40; // eax
  TESWorldSpace *WorldSpace; // ecx
  TESObjectCELL *CellAtCellCoord; // eax
  float *v25; // eax
  float v26; // ecx
  float v27; // edx
  int v28; // eax
  bool v29; // zf
  float v30; // [esp+Ch] [ebp-18h] BYREF
  float v31; // [esp+10h] [ebp-14h]
  int v32; // [esp+14h] [ebp-10h]
  char v33[12]; // [esp+18h] [ebp-Ch] BYREF
  int forma; // [esp+28h] [ebp+4h]
  signed int flags; // [esp+2Ch] [ebp+8h]

  v2 = SaveLoad_AdjustCreatedFormChangeFlags(form, changeFlags); /*0x4535c4*/
  v3 = (PlayerCharacter *)OblivionDynamicCast( /*0x4535da*/
                            form,
                            0,
                            (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                            (struct TypeDescriptor *)&TESObjectREFR `RTTI Type Descriptor',
                            0);
  v4 = (ExtraDataList *)OblivionDynamicCast( /*0x4535dc*/
                          form,
                          0,
                          (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                          &TESObjectCELL `RTTI Type Descriptor',
                          0);
  v5 = (TESObjectCELL *)v4; /*0x4535e1*/
  if ( !v4 ) /*0x4535e8*/
  {
    if ( !v3 ) /*0x453683*/
      return v2; /*0x4538fd*/
    v10 = v2 & 0xFFFFF7FF; /*0x453689*/
    if ( (v10 & 0x8000000) != 0 /*0x45369e*/
      && (v3 == (PlayerCharacter *)0xFFFFFFBC
       || !ExtraDataList_GetContainerChanges(&v3->super.super.super.super.baseExtraList)) )
    {
      v10 &= ~0x8000000u; /*0x4536a7*/
    }
    v11 = (Actor *)OblivionDynamicCast( /*0x4536bc*/
                     v3,
                     0,
                     (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
                     &Actor `RTTI Type Descriptor',
                     0);
    v12 = v11; /*0x4536c1*/
    if ( v11 ) /*0x4536c8*/
    {
      process = v11->members.super.process; /*0x4536d4*/
      if ( (v10 & 0x80000) != 0 ) /*0x4536d7*/
      {
        if ( !process || !((int (__thiscall *)(LowProcess *))process->Unk_5C)(process) ) /*0x4536e5*/
          v10 &= ~0x80000u; /*0x4536eb*/
      }
      else if ( process ) /*0x4536f5*/
      {
        if ( ((int (__thiscall *)(LowProcess *))process->Unk_5C)(process) ) /*0x4536ff*/
          v10 |= 0x80000u; /*0x453705*/
      }
      v14 = v12->members.super.process; /*0x45370b*/
      v10 &= 0xFFFCFFFF; /*0x45370e*/
      if ( v14 ) /*0x453716*/
      {
        editorPackage = (int)v14->editorPackage; /*0x453718*/
        if ( editorPackage ) /*0x45371d*/
          v10 |= sub_5E8D90(editorPackage); /*0x453727*/
      }
      if ( (v10 & 0x20000) != 0 ) /*0x45372f*/
      {
        CurrentPackage = Actor::GetCurrentPackage(v12); /*0x453741*/
        v17 = (DialoguePackageRuntimeView *)OblivionDynamicCast( /*0x453747*/
                                              CurrentPackage,
                                              0,
                                              (struct _s_RTTICompleteObjectLocator *)&TESPackage `RTTI Type Descriptor',
                                              &DialoguePackage `RTTI Type Descriptor',
                                              0);
        if ( v17 ) /*0x453751*/
        {
          if ( DialoguePackage::GetSpeaker(v17) == v12 ) /*0x45375c*/
            v10 &= ~0x10000u; /*0x453766*/
          else
            v10 |= 0x10000u; /*0x45375e*/
        }
      }
      if ( sub_5F0310(v12, v10) ) /*0x45376f*/
      {
        v10 |= 8u; /*0x453778*/
      }
      else if ( !v12->vtbl->super.super.IsDead((TESObjectREFR *)v12, 0) ) /*0x453789*/
      {
        v10 &= ~8u; /*0x45378f*/
      }
    }
    v18 = v10 & 0x7FFFFFFF; /*0x453792*/
    if ( (v18 & 2) != 0 || (v18 & 0xC) == 0 || TESObjectREFR_IsPersistent((TESObjectREFR *)v3) || v3 == reference ) /*0x4537bf*/
    {
LABEL_59:
      v2 = v18 & 0xFF7FFFFF; /*0x4538dc*/
      if ( sub_4D7F40((int *)v3) ) /*0x4538e4*/
      {
        if ( v3 != reference ) /*0x4538f3*/
          v2 |= (unsigned int)&loc_800000; /*0x4538f5*/
      }
      return v2; /*0x4538f5*/
    }
    v19 = 0; /*0x4537d0*/
    if ( v3->vtbl->super.super.super.IsActor((TESObjectREFR *)v3) ) /*0x4537d2*/
    {
      v20 = sub_5E1F60(v3); /*0x4537e1*/
      v21 = (TESWorldSpace *)sub_5E1F40((Actor *)v3); /*0x4537e8*/
      if ( v21 || v20 ) /*0x4537f0*/
      {
        v25 = (float *)((int (__thiscall *)(PlayerCharacter *, char *))v3->vtbl->super.super.super.GetStartingPos)( /*0x45386d*/
                         v3,
                         v33);
        v26 = *v25; /*0x453871*/
        v27 = v25[1]; /*0x453873*/
        v28 = *((_DWORD *)v25 + 2); /*0x453876*/
        v30 = v26; /*0x453879*/
        v31 = v27; /*0x45387d*/
        v32 = v28; /*0x453881*/
        if ( v20 ) /*0x453885*/
        {
          v29 = v20 == Shared_GetDwordAtOffset40(v3); /*0x45388e*/
          goto LABEL_57; /*0x453890*/
        }
        if ( !v21 ) /*0x453894*/
          goto LABEL_59; /*0x453894*/
        if ( v21 != TESObjectREFR_GetWorldSpace((TESObjectREFR *)v3) ) /*0x45389f*/
        {
LABEL_58:
          v18 |= 0x80000000; /*0x4538d5*/
          goto LABEL_59; /*0x4538d5*/
        }
        CellAtCellCoord = TESWorldSpace::GetCellAtCellCoord(v21, (int)v30 >> 0xC, (int)v31 >> 0xC); /*0x4538c3*/
LABEL_56:
        v29 = CellAtCellCoord == (TESObjectCELL *)Shared_GetDwordAtOffset40(v3); /*0x4538c8*/
LABEL_57:
        if ( v29 ) /*0x4538d3*/
          goto LABEL_59; /*0x4538d3*/
        goto LABEL_58; /*0x4538d3*/
      }
      v19 = v3; /*0x4537f2*/
    }
    if ( !Shared_GetDwordAtOffset40(v3) ) /*0x4537f6*/
      goto LABEL_59; /*0x4537f6*/
    DwordAtOffset40 = (TESObjectCELL *)Shared_GetDwordAtOffset40(v3); /*0x453805*/
    if ( TESObjectCELL_IsInterior(DwordAtOffset40) ) /*0x45380c*/
      goto LABEL_59; /*0x453813*/
    if ( v19 ) /*0x45381b*/
      PrintError("Actor does not have an editor location.  This should never happen."); /*0x453822*/
    v3->vtbl->super.super.super.GetStartingPos((TESObjectREFR *)v3, &v30); /*0x453839*/
    forma = (int)v30; /*0x45383f*/
    flags = (int)v31; /*0x453847*/
    WorldSpace = TESObjectREFR_GetWorldSpace((TESObjectREFR *)v3); /*0x45385a*/
    CellAtCellCoord = TESWorldSpace::GetCellAtCellCoord(WorldSpace, forma >> 0xC, flags >> 0xC); /*0x45385c*/
    goto LABEL_56; /*0x45385c*/
  }
  if ( (v2 & 0x10000000) != 0 && !sub_4CCED0(v4) ) /*0x4535f8*/
    v2 &= ~0x10000000u; /*0x453601*/
  if ( (v2 & 0x1000000) != 0 && !sub_4AF170(v5) ) /*0x453611*/
    v2 &= ~0x1000000u; /*0x45361a*/
  if ( TESObjectCELL_IsInterior(v5) ) /*0x453622*/
    return v2; /*0x453629*/
  v6 = v2 & 0xF9FFFFFF; /*0x453631*/
  XCoordinate = TESObjectCELL_GetXCoordinate(v5); /*0x45363e*/
  YCoordinate = TESObjectCELL_GetYCoordinate(v5); /*0x453640*/
  if ( (unsigned int)(XCoordinate + 0x80) > 0xFF || (unsigned int)(YCoordinate + 0x80) > 0xFF ) /*0x45365d*/
    return v6 | 0x2000000; /*0x453678*/
  else
    return v6 | 0x4000000; /*0x453667*/
}
