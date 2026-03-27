TESObjectCELL *__thiscall SaveLoad_SaveFormModifiedFlags__(unsigned int **this, void *a2, int Src)
{
  int v3; // edi
  TESObjectREFR *v5; // eax
  TESObjectREFR *v6; // ebx
  TESObjectCELL *result; // eax
  TESObjectCELL *v8; // esi
  TESWorldSpace *v9; // eax
  TESWorldSpace *v10; // eax
  TESObjectCELL *ParentCell; // eax
  TESObjectCELL *v12; // esi
  TESWorldSpace *WorldSpace; // eax
  _DWORD *v14; // eax
  _DWORD *v15; // esi
  int v16; // ecx
  float v17; // edx
  float v18; // ecx
  float x; // edx
  float z; // ecx
  TESForm *(__thiscall *GetBaseForm)(TESObjectREFR *); // eax
  int v22; // eax
  void *v23; // edi
  _DWORD *v24; // esi
  TESObjectCELL *v25; // eax
  TESWorldSpace *v26; // eax
  unsigned int v27; // eax
  _DWORD *v28; // ecx
  unsigned int ProjectileType; // eax
  bool (__thiscall *IsActor)(TESObjectREFR *); // edx
  UInt32 v31; // esi
  unsigned int *v32; // eax
  unsigned int v33; // ecx
  unsigned int v34; // edx
  unsigned int v35; // eax
  TESObjectCELL *v36; // eax
  unsigned int v37; // eax
  TESObjectCELL *v38; // eax
  TESObjectCELL *v39; // eax
  unsigned int *v40; // eax
  unsigned int v41; // ecx
  unsigned int v42; // edx
  unsigned int v43; // eax
  TESObjectCELL *v44; // esi
  int v45; // eax
  const char *v46; // eax
  size_t v47; // [esp-4h] [ebp-68h]
  UInt32 refID; // [esp-4h] [ebp-68h]
  UInt32 v49; // [esp-4h] [ebp-68h]
  int v50; // [esp-4h] [ebp-68h]
  _WORD v51[6]; // [esp+10h] [ebp-54h] BYREF
  _DWORD v52[7]; // [esp+1Ch] [ebp-48h] BYREF
  int v53; // [esp+38h] [ebp-2Ch] BYREF
  unsigned int IRefToFormID; // [esp+3Ch] [ebp-28h]
  _BYTE v55[36]; // [esp+40h] [ebp-24h] BYREF

  v3 = 0;
  v5 = (TESObjectREFR *)OblivionDynamicCast(
                          a2,
                          0,
                          (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                          (struct TypeDescriptor *)&TESObjectREFR `RTTI Type Descriptor',
                          0);
  v6 = v5;
  if ( v5 )
  {
    v52[0] = 0;
    ParentCell = TESObjectREFR_GetParentCell(v5);
    v12 = ParentCell;
    if ( ParentCell )
    {
      WorldSpace = TESObjectCELL_GetWorldSpace(ParentCell);
      if ( WorldSpace )
        v52[0] = SaveLoad_IRefToFormID_(this, WorldSpace->super.refID);
      else
        v52[0] = SaveLoad_IRefToFormID_(this, v12->members.super.refID);
    }
    else
    {
      if ( !TESObjectREFR_IsPersistent_(v6) )
        PrintError("Error saving reference %08X: Non-persistent reference has no parent cell", v6->member.super.refID);
      if ( TESObjectREFR_IsPersistent_(v6) && !sub_41FF80(&v6->member.baseExtraList) )
        PrintError(
          "Error saving reference %08X:Persistent reference has no parent cell and no persistent cell extra data",
          v6->member.super.refID);
      v14 = OblivionDynamicCast(
              v6,
              0,
              (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
              &MobileObject `RTTI Type Descriptor',
              0);
      v15 = v14;
      if ( v14 )
      {
        v16 = v14[0x16];
        if ( v16 )
        {
          if ( (*(int (__thiscall **)(int))(*(_DWORD *)v16 + 8))(v16) )
          {
            if ( (*(int (__thiscall **)(_DWORD))(*(_DWORD *)v15[0x16] + 8))(v15[0x16]) == 1 )
              PrintError(
                "Error saving actor %08X: Actor has a middle high process but no parent cell",
                v6->member.super.refID);
          }
          else
          {
            PrintError("Error saving actor %08X: Actor has a high process but no parent cell", v6->member.super.refID);
          }
        }
      }
    }
    v17 = v6->member.pos[0];
    v18 = v6->member.pos[2];
    v52[2] = LODWORD(v6->member.pos[1]);
    v52[5] = LODWORD(v6->member.rot.y);
    result = (TESObjectCELL *)Src;
    *(float *)&v52[1] = v17;
    x = v6->member.rot.x;
    *(float *)&v52[3] = v18;
    z = v6->member.rot.z;
    *(float *)&v52[4] = x;
    *(float *)&v52[6] = z;
    if ( (Src & 2) != 0 )
    {
      GetBaseForm = v6->vtbl->GetBaseForm;
      v53 = 0;
      IRefToFormID = 0;
      if ( GetBaseForm(v6) )
      {
        v22 = (int)v6->vtbl->GetBaseForm(v6);
        IRefToFormID = SaveLoad_IRefToFormID_(this, *(_DWORD *)(v22 + 0xC));
      }
      qmemcpy(v55, v52, 0x1Cu);
      v23 = OblivionDynamicCast(
              v6,
              0,
              (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
              &ArrowProjectile `RTTI Type Descriptor',
              0);
      v24 = OblivionDynamicCast(
              v6,
              0,
              (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
              &MagicProjectile `RTTI Type Descriptor',
              0);
      if ( TESObjectREFR_IsPersistent_(v6) )
      {
        v53 = 3;
        if ( !v52[0] )
        {
          v25 = (TESObjectCELL *)sub_41FF80(&v6->member.baseExtraList);
          v26 = TESObjectCELL_GetWorldSpace(v25);
          v27 = SaveLoad_IRefToFormID_(this, v26->super.refID);
          LODWORD(v47) = 0x24;
          *(_DWORD *)v55 = v27;
          return (TESObjectCELL *)SaveLoad_SaveData((int)SaveLoad_CurrentSavegame, &v53, v47);
        }
      }
      else
      {
        if ( v23 )
        {
          LODWORD(v47) = 0x24;
          v53 = 1;
          return (TESObjectCELL *)SaveLoad_SaveData((int)SaveLoad_CurrentSavegame, &v53, v47);
        }
        if ( v24 )
        {
          v28 = *(_DWORD **)(v24[0x1C] + 0x1C);
          v53 = 2;
          ProjectileType = EffectSetting_GetProjectileType(v28);
          IRefToFormID = SaveLoad_IRefToFormID_(this, ProjectileType);
        }
      }
      LODWORD(v47) = 0x24;
      return (TESObjectCELL *)SaveLoad_SaveData((int)SaveLoad_CurrentSavegame, &v53, v47);
    }
    if ( (Src & 0xC) == 0 )
    {
      if ( ((unsigned int)&loc_800000 & Src) == 0 )
        return result;
      v44 = TESObjectREFR_GetParentCell(v6);
      v45 = TESObjectREFR_GetWorldSpace(v6);
      if ( v45 )
      {
        Src = SaveLoad_IRefToFormID_(this, *(_DWORD *)(v45 + 0xC));
      }
      else if ( v44 )
      {
        Src = SaveLoad_IRefToFormID_(this, v44->members.super.refID);
      }
      else
      {
        v46 = (const char *)((int (__thiscall *)(TESObjectREFR *, UInt32))v6->vtbl->super.GetEditorName)(
                              v6,
                              v6->member.super.refID);
        PrintError("Reference %s ( %08X ) in an oblivion plane has no worldspace or parent cell.", v46, v50);
      }
      goto LABEL_58;
    }
    if ( Src >= 0 )
    {
      LODWORD(v47) = 0x1C;
      return (TESObjectCELL *)SaveLoad_SaveData((int)SaveLoad_CurrentSavegame, v52, v47);
    }
    IsActor = v6->vtbl->IsActor;
    v53 = 0;
    if ( IsActor(v6) && ((v3 = sub_5E1F60(v6), (v31 = sub_5E1F40((Actor *)v6)) != 0) || v3) )
    {
      v40 = (unsigned int *)((int (__thiscall *)(TESObjectREFR *, _WORD *))v6->vtbl->GetStartingPos)(v6, v51);
      v41 = *v40;
      v42 = v40[1];
      v43 = v40[2];
      IRefToFormID = v41;
      *(_DWORD *)v55 = v42;
      *(_DWORD *)&v55[4] = v43;
      if ( v31 )
      {
        v37 = SaveLoad_IRefToFormID_(this, *(_DWORD *)(v31 + 0xC));
        goto LABEL_49;
      }
      if ( v3 )
      {
        v37 = SaveLoad_IRefToFormID_(this, *(_DWORD *)(v3 + 0xC));
        goto LABEL_49;
      }
    }
    else
    {
      if ( OblivionDynamicCast(
             v6,
             v3,
             (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
             &Actor `RTTI Type Descriptor',
             v3) )
      {
        PrintError("Actor does not have an editor location.  This should never happen.");
      }
      v32 = (unsigned int *)((int (__thiscall *)(TESObjectREFR *, _WORD *))v6->vtbl->GetStartingPos)(v6, v51);
      v33 = *v32;
      v34 = v32[1];
      v35 = v32[2];
      IRefToFormID = v33;
      *(_DWORD *)v55 = v34;
      *(_DWORD *)&v55[4] = v35;
      v53 = v3;
      if ( !TESObjectREFR_GetParentCell(v6) )
        goto LABEL_50;
      v36 = TESObjectREFR_GetParentCell(v6);
      if ( TESObjectCELL_IsInterior(v36) )
      {
        refID = TESObjectREFR_GetParentCell(v6)->members.super.refID;
        v37 = SaveLoad_IRefToFormID_(this, refID);
LABEL_49:
        v53 = v37;
        goto LABEL_50;
      }
      v38 = TESObjectREFR_GetParentCell(v6);
      if ( TESObjectCELL_GetWorldSpace(v38) )
      {
        v39 = TESObjectREFR_GetParentCell(v6);
        v49 = TESObjectCELL_GetWorldSpace(v39)->super.refID;
        v37 = SaveLoad_IRefToFormID_(this, v49);
        goto LABEL_49;
      }
    }
LABEL_50:
    qmemcpy(&v55[8], v52, 0x1Cu);
    LODWORD(v47) = 0x2C;
    return (TESObjectCELL *)SaveLoad_SaveData((int)SaveLoad_CurrentSavegame, &v53, v47);
  }
  result = (TESObjectCELL *)OblivionDynamicCast(
                              a2,
                              0,
                              (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                              &TESObjectCELL `RTTI Type Descriptor',
                              0);
  v8 = result;
  if ( !result )
    return result;
  result = (TESObjectCELL *)Src;
  if ( (Src & 0x4000000) != 0 )
  {
    v9 = TESObjectCELL_GetWorldSpace(v8);
    LOWORD(Src) = sub_45E180(this, v9->super.refID);
    BYTE2(Src) = TESObjectCELL_GetXCoordinate(v8);
    HIBYTE(Src) = TESObjectCELL_GetYCoordinate(v8);
LABEL_58:
    LODWORD(v47) = 4;
    return (TESObjectCELL *)SaveLoad_SaveData((int)SaveLoad_CurrentSavegame, &Src, v47);
  }
  if ( (Src & 0x2000000) != 0 )
  {
    v10 = TESObjectCELL_GetWorldSpace(v8);
    v51[0] = sub_45E180(this, v10->super.refID);
    v51[1] = TESObjectCELL_GetXCoordinate(v8);
    LODWORD(v47) = 6;
    v51[2] = TESObjectCELL_GetYCoordinate(v8);
    return (TESObjectCELL *)SaveLoad_SaveData((int)SaveLoad_CurrentSavegame, v51, v47);
  }
  return result;
}
