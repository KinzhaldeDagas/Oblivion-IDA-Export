void __usercall TESObjectREFR_LinkForm(Actor *this@<ecx>, double a2@<st1>, double a3@<st0>)
{
  int v4; // ecx
  char v5; // bl
  TESForm *baseForm; // eax
  int type; // eax
  unsigned int flags; // eax
  BSExtraDataVtbl *EnableStateParent; // edi
  bool v10; // zf
  TESObjectCELL *parentCell; // ecx
  TESObjectCELL *v12; // edi
  TESForm *v13; // eax
  UInt32 refID; // ebp
  TESForm *v15; // ebx
  int v16; // eax
  const char *v17; // eax
  TESObjectCELL *v18; // ebx
  TESForm *v19; // eax
  TESObjectCELL *v20; // edi
  TESForm *v21; // ebp
  int XCoordinate; // eax
  int v23; // eax
  const char *v24; // eax
  UInt32 v25; // ebx
  TESForm *v26; // edi
  TESForm *v27; // eax
  const char *v28; // eax
  double v29; // st7
  float *ContainerExtraDataForRef; // edi
  int v31; // [esp-10h] [ebp-5Ch]
  const char *v32; // [esp-Ch] [ebp-58h]
  int v33; // [esp-8h] [ebp-54h]
  int v34; // [esp-8h] [ebp-54h]
  const char *v35; // [esp-4h] [ebp-50h]
  const char *v36; // [esp-4h] [ebp-50h]
  int X; // [esp+0h] [ebp-4Ch]
  int Xa; // [esp+0h] [ebp-4Ch]
  int Xb; // [esp+0h] [ebp-4Ch]
  const char *X_4; // [esp+4h] [ebp-48h]
  int X_4a; // [esp+4h] [ebp-48h]
  const char *X_4b; // [esp+4h] [ebp-48h]
  unsigned int v43; // [esp+8h] [ebp-44h]
  int v44; // [esp+8h] [ebp-44h]
  int v45; // [esp+8h] [ebp-44h]
  int v46; // [esp+Ch] [ebp-40h]
  int v47; // [esp+10h] [ebp-3Ch]
  int v48; // [esp+14h] [ebp-38h]
  int v49; // [esp+18h] [ebp-34h]
  int v50; // [esp+1Ch] [ebp-30h]
  char v51; // [esp+40h] [ebp-Ch]
  UInt32 v52; // [esp+40h] [ebp-Ch]
  UInt32 v53; // [esp+40h] [ebp-Ch]
  int v54; // [esp+44h] [ebp-8h]
  UInt32 v55; // [esp+44h] [ebp-8h]
  UInt32 v56; // [esp+44h] [ebp-8h]
  UInt32 v57; // [esp+48h] [ebp-4h]

  if ( (this->members.super.super.super.flags & 8) == 0 )
  {
    v4 = *(_DWORD *)&MEMORY[0xB33E90][0xEF8]; /*0x4df83d*/
    v5 = bDisableWarning_MESSAGES; /*0x4df843*/
    bDisableWarning_MESSAGES = 1; /*0x4df849*/
    *(_DWORD *)&MEMORY[0xB33E90][0xEF8] = 0; /*0x4df850*/
    baseForm = this->members.super.super.baseForm; /*0x4df85a*/
    v54 = v4; /*0x4df85f*/
    if ( baseForm ) /*0x4df863*/
    {
      if ( (baseForm->member.flags & 0x20) != 0 ) /*0x4df86e*/
        ((void (__thiscall *)(Actor *, int))this->vtbl->super.super.super.Unk_23)(this, 1); /*0x4df87c*/
    }
    if ( !_finite(this->members.super.super.pos[0]) /*0x4df8f0*/
      || !_finite(this->members.super.super.pos[1])
      || !_finite(this->members.super.super.pos[2])
      || _isnan(this->members.super.super.pos[0])
      || _isnan(this->members.super.super.pos[1])
      || _isnan(this->members.super.super.pos[2]) )
    {
      PrintError("Corrupt location found on reference, setting to (0, 0, 0)."); /*0x4df901*/
      this->members.super.super.pos[0] = g_zeroNiPoint3.x; /*0x4df90b*/
      this->members.super.super.pos[1] = g_zeroNiPoint3.y; /*0x4df914*/
      this->members.super.super.pos[2] = g_zeroNiPoint3.z; /*0x4df920*/
    }
    if ( !_finite(this->members.super.super.rot.x) /*0x4df995*/
      || !_finite(this->members.super.super.rot.y)
      || !_finite(this->members.super.super.rot.z)
      || _isnan(this->members.super.super.rot.x)
      || _isnan(this->members.super.super.rot.y)
      || _isnan(this->members.super.super.rot.z) )
    {
      PrintError("Corrupt angle found on reference, setting to (0, 0, 0)."); /*0x4df9a6*/
      this->members.super.super.rot.x = g_zeroNiPoint3.x; /*0x4df9b0*/
      this->members.super.super.rot.y = g_zeroNiPoint3.y; /*0x4df9b9*/
      this->members.super.super.rot.z = g_zeroNiPoint3.z; /*0x4df9c5*/
    }
    ExtraDataList_ResolveLoadedFormIDs(&this->members.super.super.baseExtraList, (TESForm *)this); /*0x4df9ce*/
    if ( this->vtbl->super.super.GetBaseForm(this) ) /*0x4df9dd*/
    {
      if ( this->vtbl->super.super.GetBaseForm(this)->member.type == kFormType_Door ) /*0x4df9f3*/
      {
        TESObjectREFR::AddToLowPathWorld((TESObjectREFR *)this); /*0x4df9f6*/
        if ( this->vtbl->super.super.GetBaseForm(this) == (TESForm *)MEMORY[0xB35EBC] ) /*0x4dfa10*/
          sub_65FD20(reference, (TESObjectREFR *)this); /*0x4dfa19*/
      }
    }
    if ( this->vtbl->super.super.IsActor((TESObjectREFR *)this) ) /*0x4dfa28*/
    {
      if ( !sub_5E0260(this) ) /*0x4dfa30*/
        this->vtbl->Unk_DF(this); /*0x4dfa43*/
      if ( !Actor_IsPlayer((TESObjectREFR *)this) ) /*0x4dfa47*/
      {
        if ( TESObjectREFR_IsDead((TESObjectREFR *)this, 0) ) /*0x4dfa54*/
        {
          Actor_HandleDeathState(this, 2u); /*0x4dfa61*/
          sub_674550((int)this, 3); /*0x4dfa6e*/
        }
      }
    }
    else
    {
      type = this->vtbl->super.super.GetBaseForm(this)->member.type; /*0x4dfa7f*/
      if ( type != 0x1C && (type <= 0x1D || type > 0x20) ) /*0x4dfa90*/
        ((void (__thiscall *)(Actor *, _DWORD, _DWORD, _DWORD))this->vtbl->super.super.Unk_3E)( /*0x4dfabb*/
          this,
          LODWORD(g_zeroNiPoint3.x),
          LODWORD(g_zeroNiPoint3.y),
          LODWORD(g_zeroNiPoint3.z));
    }
    flags = g_TESSaveLoadGame->flags; /*0x4dfac2*/
    if ( (flags & 0x800) == 0 || (flags & 0x40) != 0 ) /*0x4dfad4*/
    {
      EnableStateParent = ExtraDataList_GetEnableStateParent(&this->members.super.super.baseExtraList); /*0x4dfadd*/
      if ( EnableStateParent ) /*0x4dfae1*/
      {
        v51 = sub_45A500(g_TESSaveLoadGame); /*0x4dfafd*/
        if ( (g_TESSaveLoadGame->flags & 0x40) == 0 ) /*0x4dfb01*/
          sub_45A530(g_TESSaveLoadGame, 0); /*0x4dfb05*/
        if ( ExtraDataList_IsEnableStateInverse(&this->members.super.super.baseExtraList) ) /*0x4dfb0c*/
          LOBYTE(v43) = ((int)EnableStateParent[1].Destructor & 0x800) == 0; /*0x4dfb22*/
        else
          v43 = ((unsigned int)EnableStateParent[1].Destructor >> 0xB) & 0xFFFFFF01; /*0x4dfb31*/
        TESForm_SetDisabledFlag((TESForm *)this, v43); /*0x4dfb34*/
        sub_45A530(g_TESSaveLoadGame, v51); /*0x4dfb44*/
      }
    }
    sub_4DBF90(this); /*0x4dfb4b*/
    TESForm_SetIsLinked((TESForm *)this, 1); /*0x4dfb54*/
    v10 = *(_DWORD *)&MEMORY[0xB33E90][0xEF8] == 0; /*0x4dfb5e*/
    bDisableWarning_MESSAGES = v5; /*0x4dfb64*/
    *(_DWORD *)&MEMORY[0xB33E90][0xEF8] = v54; /*0x4dfb6a*/
    if ( !v10 )
    {
      parentCell = this->members.super.super.parentCell; /*0x4dfb76*/
      if ( parentCell && TESObjectCELL_IsInterior(parentCell) )
      {
        v12 = this->members.super.super.parentCell; /*0x4dfb8e*/
        v13 = this->vtbl->super.super.GetBaseForm(this); /*0x4dfb93*/
        refID = this->members.super.super.parentCell->members.super.refID; /*0x4dfb9b*/
        v15 = v13; /*0x4dfb9e*/
        v55 = this->members.super.super.super.refID; /*0x4dfba2*/
        v52 = this->vtbl->super.super.GetBaseForm(this)->member.refID; /*0x4dfbb5*/
        v16 = ((int (__thiscall *)(TESObjectCELL *, UInt32))v12->vtbl->GetEditorName)(v12, refID); /*0x4dfbc2*/
        v17 = (const char *)((int (__thiscall *)(TESForm *, UInt32, CHAR *, UInt32, int))v15->vtbl->GetEditorName)( /*0x4dfbde*/
                              v15,
                              v52,
                              EmptyString,
                              v55,
                              v16);
        PrintError(
          "Errors were encountered during InitItem for reference:\n"
          "\n"
          "Base: '%s' (%08X)\n"
          "Ref: '%s' (%08X)\n"
          "Cell: '%s' (%08X)\n"
          "\n"
          "See Warnings file for more information.",
          v17,
          v33,
          v35,
          X,
          X_4,
          v44);
      }
      else
      {
        v18 = this->members.super.super.parentCell; /*0x4dfbf3*/
        v19 = this->vtbl->super.super.GetBaseForm(this); /*0x4dfc04*/
        if ( v18 )
        {
          v20 = this->members.super.super.parentCell; /*0x4dfc06*/
          v21 = v19; /*0x4dfc0e*/
          v56 = v20->members.super.refID; /*0x4dfc13*/
          v53 = this->members.super.super.super.refID; /*0x4dfc1d*/
          v57 = this->vtbl->super.super.GetBaseForm(this)->member.refID; /*0x4dfc2c*/
          X_4a = TESObjectCELL_GetYCoordinate(v20); /*0x4dfc38*/
          XCoordinate = TESObjectCELL_GetXCoordinate(v20); /*0x4dfc3b*/
          v23 = ((int (__thiscall *)(TESObjectCELL *, int))v18->vtbl->GetEditorName)(v18, XCoordinate); /*0x4dfc4b*/
          v24 = (const char *)((int (__thiscall *)(TESForm *, UInt32, CHAR *, UInt32, int))v21->vtbl->GetEditorName)( /*0x4dfc68*/
                                v21,
                                v57,
                                EmptyString,
                                v53,
                                v23);
          PrintError(
            "Errors were encountered during InitItem for reference:\n"
            "\n"
            "Base: '%s' (%08X)\n"
            "Ref: '%s' (%08X)\n"
            "Cell: '%s' (%i, %i) (%08X)\n"
            "\n"
            "See Warnings file for more information.",
            v24,
            v31,
            v32,
            v34,
            v36,
            Xa,
            X_4a,
            v56);
        }
        else
        {
          v25 = this->members.super.super.super.refID; /*0x4dfc86*/
          v26 = v19; /*0x4dfc89*/
          v27 = this->vtbl->super.super.GetBaseForm(this); /*0x4dfc93*/
          v28 = (const char *)((int (__thiscall *)(TESForm *, UInt32, CHAR *, UInt32))v26->vtbl->GetEditorName)( /*0x4dfca9*/
                                v26,
                                v27->member.refID,
                                EmptyString,
                                v25);
          PrintError(
            "Errors were encountered during InitItem for reference:\n"
            "\n"
            "Base: '%s' (%08X)\n"
            "Ref: '%s' (%08X)\n"
            "Cell: NONE\n"
            "\n"
            "See Warnings file for more information.",
            v28,
            Xb,
            X_4b,
            v45);
        }
      }
    }
    v29 = sub_4D70E0((TESObjectREFR *)this, a2, a3); /*0x4dfcbb*/
    if ( TESObjectREFR_GetContainer((TESObjectREFR *)this) ) /*0x4dfcc2*/
    {
      ContainerExtraDataForRef = (float *)ContainerExtraData_GetContainerExtraDataForRef((TESObjectREFR *)this); /*0x4dfcd2*/
      ContainerExtraData_EvaluateOwnerLeveledItems(v46, v47, v48, v49, v50); /*0x4dfcd9*/
      ExtraContainerChanges_RunScripts(ContainerExtraDataForRef, v29, a2); /*0x4dfce0*/
      if ( !*(_QWORD *)*(_DWORD *)ContainerExtraDataForRef ) /*0x4dfced*/
        ExtraDataList_RemoveContainerExtraData(&this->members.super.super.baseExtraList.vtbl); /*0x4dfcf5*/
    }
    this->members.super.super.super.flags &= ~0x200000u; /*0x4dfcfa*/
  }
}
