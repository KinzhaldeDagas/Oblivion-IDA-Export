void __usercall TESObjectREFR_LinkForm(Actor *this@<ecx>, double a2@<st2>, double a3@<st1>, double a4@<st0>)
{
  int v5; // ecx
  char v6; // bl
  TESForm *baseForm; // eax
  int type; // eax
  UInt32 flags; // eax
  BSExtraDataVtbl *v10; // edi
  bool v11; // zf
  TESObjectCELL *parentCell; // ecx
  TESObjectCELL *v13; // edi
  TESForm *v14; // eax
  UInt32 refID; // ebp
  TESForm *v16; // ebx
  int v17; // eax
  const char *v18; // eax
  TESObjectCELL *v19; // ebx
  TESForm *v20; // eax
  TESObjectCELL *v21; // edi
  TESForm *v22; // ebp
  int XCoordinate; // eax
  int v24; // eax
  const char *v25; // eax
  UInt32 v26; // ebx
  TESForm *v27; // edi
  TESForm *v28; // eax
  const char *v29; // eax
  double v30; // st7
  float *ContainerExtraDataForRef; // edi
  int v32; // [esp-10h] [ebp-5Ch]
  const char *v33; // [esp-Ch] [ebp-58h]
  int v34; // [esp-8h] [ebp-54h]
  int v35; // [esp-8h] [ebp-54h]
  const char *v36; // [esp-4h] [ebp-50h]
  const char *v37; // [esp-4h] [ebp-50h]
  int X; // [esp+0h] [ebp-4Ch]
  int Xa; // [esp+0h] [ebp-4Ch]
  int Xb; // [esp+0h] [ebp-4Ch]
  const char *X_4; // [esp+4h] [ebp-48h]
  int X_4a; // [esp+4h] [ebp-48h]
  const char *X_4b; // [esp+4h] [ebp-48h]
  unsigned int v44; // [esp+8h] [ebp-44h]
  int v45; // [esp+8h] [ebp-44h]
  int v46; // [esp+8h] [ebp-44h]
  int v47; // [esp+Ch] [ebp-40h]
  int v48; // [esp+10h] [ebp-3Ch]
  int v49; // [esp+14h] [ebp-38h]
  int v50; // [esp+18h] [ebp-34h]
  int v51; // [esp+1Ch] [ebp-30h]
  char v52; // [esp+40h] [ebp-Ch]
  UInt32 v53; // [esp+40h] [ebp-Ch]
  UInt32 v54; // [esp+40h] [ebp-Ch]
  int v55; // [esp+44h] [ebp-8h]
  UInt32 v56; // [esp+44h] [ebp-8h]
  UInt32 v57; // [esp+44h] [ebp-8h]
  UInt32 v58; // [esp+48h] [ebp-4h]

  if ( (this->members.super.super.super.flags & 8) == 0 )
  {
    v5 = dword_B34D88;
    v6 = bDisableWarning_MESSAGES;
    bDisableWarning_MESSAGES = 1;
    dword_B34D88 = 0;
    baseForm = this->members.super.super.baseForm;
    v55 = v5;
    if ( baseForm )
    {
      if ( (baseForm->member.flags & 0x20) != 0 )
        ((void (__thiscall *)(Actor *, int))this->vtbl->super.super.super.Unk_23)(this, 1);
    }
    if ( !_finite(this->members.super.super.pos[0])
      || !_finite(this->members.super.super.pos[1])
      || !_finite(this->members.super.super.pos[2])
      || _isnan(this->members.super.super.pos[0])
      || _isnan(this->members.super.super.pos[1])
      || _isnan(this->members.super.super.pos[2]) )
    {
      PrintError("Corrupt location found on reference, setting to (0, 0, 0).");
      this->members.super.super.pos[0] = Vector3_InitValue_;
      this->members.super.super.pos[1] = *(&Vector3_InitValue_ + 1);
      this->members.super.super.pos[2] = dword_B3F9B0;
    }
    if ( !_finite(this->members.super.super.rot.x)
      || !_finite(this->members.super.super.rot.y)
      || !_finite(this->members.super.super.rot.z)
      || _isnan(this->members.super.super.rot.x)
      || _isnan(this->members.super.super.rot.y)
      || _isnan(this->members.super.super.rot.z) )
    {
      PrintError("Corrupt angle found on reference, setting to (0, 0, 0).");
      this->members.super.super.rot.x = Vector3_InitValue_;
      this->members.super.super.rot.y = *(&Vector3_InitValue_ + 1);
      this->members.super.super.rot.z = dword_B3F9B0;
    }
    ExtraDataList_Link_(&this->members.super.super.baseExtraList, (TESForm *)this);
    if ( this->vtbl->super.super.GetBaseForm(this) )
    {
      if ( this->vtbl->super.super.GetBaseForm(this)->member.type == kFormType_Door )
      {
        TESObjectREFR::AddToLowPathWorld((TESObjectREFR *)this);
        if ( this->vtbl->super.super.GetBaseForm(this) == (TESForm *)TESDataHandler_g_PrisonMarker )
          sub_65FD20(TESDataHandler_g_PlayerRef, (TESObjectREFR *)this);
      }
    }
    if ( this->vtbl->super.super.IsActor((TESObjectREFR *)this) )
    {
      if ( !sub_5E0260(this) )
        this->vtbl->Unk_DF(this);
      if ( !Actor_IsPlayer((TESObjectREFR *)this) )
      {
        if ( TESObjectREFR_IsDead((TESObjectREFR *)this, 0) )
        {
          Actor_HandleDeathSTate____(this, 2u);
          sub_674550((_BYTE)this + 0x44, a2, a3, a4, (int)this, 3);
        }
      }
    }
    else
    {
      type = this->vtbl->super.super.GetBaseForm(this)->member.type;
      if ( type != 0x1C && (type <= 0x1D || type > 0x20) )
        ((void (__thiscall *)(Actor *, _DWORD, _DWORD, _DWORD))this->vtbl->super.super.Unk_3E)(
          this,
          LODWORD(Vector3_InitValue_),
          *((_DWORD *)&Vector3_InitValue_ + 1),
          LODWORD(dword_B3F9B0));
    }
    flags = SaveLoad_CurrentSavegame->flags;
    if ( (flags & 0x800) == 0 || (flags & 0x40) != 0 )
    {
      v10 = sub_420260(&this->members.super.super.baseExtraList);
      if ( v10 )
      {
        v52 = sub_45A500(SaveLoad_CurrentSavegame);
        if ( (SaveLoad_CurrentSavegame->flags & 0x40) == 0 )
          sub_45A530(SaveLoad_CurrentSavegame, 0);
        if ( sub_420340(&this->members.super.super.baseExtraList) )
          LOBYTE(v44) = ((int)v10[1].Destructor & 0x800) == 0;
        else
          v44 = ((unsigned int)v10[1].Destructor >> 0xB) & 0xFFFFFF01;
        TESForm_SetEnabled_((TESForm *)this, v44);
        sub_45A530(SaveLoad_CurrentSavegame, v52);
      }
    }
    sub_4DBF90(this);
    TESForm_SetIsLinked((TESForm *)this, 1);
    v11 = dword_B34D88 == 0;
    bDisableWarning_MESSAGES = v6;
    dword_B34D88 = v55;
    if ( !v11 )
    {
      parentCell = this->members.super.super.parentCell;
      if ( parentCell && TESObjectCELL_IsInterior(parentCell) )
      {
        v13 = this->members.super.super.parentCell;
        v14 = this->vtbl->super.super.GetBaseForm(this);
        refID = this->members.super.super.parentCell->members.super.refID;
        v16 = v14;
        v56 = this->members.super.super.super.refID;
        v53 = this->vtbl->super.super.GetBaseForm(this)->member.refID;
        v17 = ((int (__thiscall *)(TESObjectCELL *, UInt32))v13->vtbl->GetEditorName)(v13, refID);
        v18 = (const char *)((int (__thiscall *)(TESForm *, UInt32, CHAR *, UInt32, int))v16->vtbl->GetEditorName)(
                              v16,
                              v53,
                              EmptyString,
                              v56,
                              v17);
        PrintError(
          "Errors were encountered during InitItem for reference:\n"
          "\n"
          "Base: '%s' (%08X)\n"
          "Ref: '%s' (%08X)\n"
          "Cell: '%s' (%08X)\n"
          "\n"
          "See Warnings file for more information.",
          v18,
          v34,
          v36,
          X,
          X_4,
          v45);
      }
      else
      {
        v19 = this->members.super.super.parentCell;
        v20 = this->vtbl->super.super.GetBaseForm(this);
        if ( v19 )
        {
          v21 = this->members.super.super.parentCell;
          v22 = v20;
          v57 = v21->members.super.refID;
          v54 = this->members.super.super.super.refID;
          v58 = this->vtbl->super.super.GetBaseForm(this)->member.refID;
          X_4a = TESObjectCELL_GetYCoordinate(v21);
          XCoordinate = TESObjectCELL_GetXCoordinate(v21);
          v24 = ((int (__thiscall *)(TESObjectCELL *, int))v19->vtbl->GetEditorName)(v19, XCoordinate);
          v25 = (const char *)((int (__thiscall *)(TESForm *, UInt32, CHAR *, UInt32, int))v22->vtbl->GetEditorName)(
                                v22,
                                v58,
                                EmptyString,
                                v54,
                                v24);
          PrintError(
            "Errors were encountered during InitItem for reference:\n"
            "\n"
            "Base: '%s' (%08X)\n"
            "Ref: '%s' (%08X)\n"
            "Cell: '%s' (%i, %i) (%08X)\n"
            "\n"
            "See Warnings file for more information.",
            v25,
            v32,
            v33,
            v35,
            v37,
            Xa,
            X_4a,
            v57);
        }
        else
        {
          v26 = this->members.super.super.super.refID;
          v27 = v20;
          v28 = this->vtbl->super.super.GetBaseForm(this);
          v29 = (const char *)((int (__thiscall *)(TESForm *, UInt32, CHAR *, UInt32))v27->vtbl->GetEditorName)(
                                v27,
                                v28->member.refID,
                                EmptyString,
                                v26);
          PrintError(
            "Errors were encountered during InitItem for reference:\n"
            "\n"
            "Base: '%s' (%08X)\n"
            "Ref: '%s' (%08X)\n"
            "Cell: NONE\n"
            "\n"
            "See Warnings file for more information.",
            v29,
            Xb,
            X_4b,
            v46);
        }
      }
    }
    v30 = sub_4D70E0((TESObjectREFR *)this, a3, a4);
    if ( TESObjectREFR_GetContainer((TESObjectREFR *)this) )
    {
      ContainerExtraDataForRef = (float *)ContainerExtraData_GetContainerExtraDataForRef((TESObjectREFR *)this);
      ContainerExtraData_EvaluateOwnerLeveledItems(v47, v48, v49, v50, v51);
      ExtraContainerChanges_RunScripts(ContainerExtraDataForRef, v30, a3);
      if ( !*(_QWORD *)*(_DWORD *)ContainerExtraDataForRef )
        ExtraDataList_RemoveContainerExtraData(&this->members.super.super.baseExtraList.vtbl);
    }
    this->members.super.super.super.flags &= ~0x200000u;
  }
}
