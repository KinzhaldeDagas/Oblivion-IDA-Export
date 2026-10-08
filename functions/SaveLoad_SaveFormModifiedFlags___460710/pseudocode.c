TESObjectCELL *__thiscall SaveLoad_SaveFormModifiedFlags__(TESSaveLoadGame_SerializationView *this, void *a2, int Src)
{
  int v3; // edi
  TESObjectREFR *v5; // eax
  TESObjectREFR *v6; // ebx
  TESObjectCELL *result; // eax
  TESObjectCELL *v8; // esi
  TESWorldSpace *v9; // eax
  TESWorldSpace *v10; // eax
  TESObjectCELL *DwordAtOffset40; // eax
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
  TESObjectCELL *PersistentCell; // eax
  TESWorldSpace *v26; // eax
  _DWORD *v27; // ecx
  unsigned int ProjectileType; // eax
  bool (__thiscall *IsActor)(TESObjectREFR *); // edx
  UInt32 v30; // esi
  unsigned int *v31; // eax
  unsigned int v32; // ecx
  unsigned int v33; // edx
  unsigned int v34; // eax
  TESObjectCELL *v35; // eax
  unsigned int v36; // eax
  TESObjectCELL *v37; // eax
  TESObjectCELL *v38; // eax
  unsigned int *v39; // eax
  unsigned int v40; // ecx
  unsigned int v41; // edx
  unsigned int v42; // eax
  UInt32 v43; // esi
  TESWorldSpace *v44; // eax
  const char *v45; // eax
  unsigned int v46; // [esp-4h] [ebp-68h]
  UInt32 refID; // [esp-4h] [ebp-68h]
  int v48; // [esp-4h] [ebp-68h]
  _WORD v49[6]; // [esp+10h] [ebp-54h] BYREF
  _DWORD v50[7]; // [esp+1Ch] [ebp-48h] BYREF
  int v51; // [esp+38h] [ebp-2Ch] BYREF
  unsigned int FormIDToIRef; // [esp+3Ch] [ebp-28h]
  _BYTE v53[36]; // [esp+40h] [ebp-24h] BYREF

  v3 = 0; /*0x46071b*/
  v5 = (TESObjectREFR *)OblivionDynamicCast( /*0x46072c*/
                          a2,
                          0,
                          (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                          (struct TypeDescriptor *)&TESObjectREFR `RTTI Type Descriptor',
                          0);
  v6 = v5; /*0x460731*/
  if ( v5 )
  {
    v50[0] = 0; /*0x4607e2*/
    DwordAtOffset40 = (TESObjectCELL *)Shared_GetDwordAtOffset40(v5); /*0x4607e6*/
    v12 = DwordAtOffset40; /*0x4607eb*/
    if ( DwordAtOffset40 )
    {
      WorldSpace = TESObjectCELL_GetWorldSpace(DwordAtOffset40); /*0x4607f3*/
      if ( WorldSpace ) /*0x4607fc*/
        v50[0] = SaveLoad_FormIDToIRef(this, WorldSpace->super.refID); /*0x460807*/
      else
        v50[0] = SaveLoad_FormIDToIRef(this, v12->members.super.refID); /*0x460819*/
    }
    else
    {
      if ( !TESObjectREFR_IsPersistent(v6) )
        PrintError("Error saving reference %08X: Non-persistent reference has no parent cell", v6->member.super.refID);
      if ( TESObjectREFR_IsPersistent(v6) && !ExtraDataList_GetPersistentCell(&v6->member.baseExtraList) ) /*0x46084c*/
        PrintError( /*0x46085e*/
          "Error saving reference %08X:Persistent reference has no parent cell and no persistent cell extra data",
          v6->member.super.refID);
      v14 = OblivionDynamicCast( /*0x460873*/
              v6,
              0,
              (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
              &MobileObject `RTTI Type Descriptor',
              0);
      v15 = v14; /*0x460878*/
      if ( v14 )
      {
        v16 = v14[0x16]; /*0x460881*/
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
    v17 = v6->member.pos[0]; /*0x4608c3*/
    v18 = v6->member.pos[2]; /*0x4608c6*/
    v50[2] = LODWORD(v6->member.pos[1]); /*0x4608c9*/
    v50[5] = LODWORD(v6->member.rot.y); /*0x4608d0*/
    result = (TESObjectCELL *)Src; /*0x4608d4*/
    *(float *)&v50[1] = v17; /*0x4608da*/
    x = v6->member.rot.x; /*0x4608de*/
    *(float *)&v50[3] = v18; /*0x4608e1*/
    z = v6->member.rot.z; /*0x4608e5*/
    *(float *)&v50[4] = x; /*0x4608e8*/
    *(float *)&v50[6] = z; /*0x4608ec*/
    if ( (Src & 2) != 0 ) /*0x4608f0*/
    {
      GetBaseForm = v6->vtbl->GetBaseForm; /*0x4608f8*/
      v51 = 0; /*0x460900*/
      FormIDToIRef = 0; /*0x460904*/
      if ( GetBaseForm(v6) ) /*0x460908*/
      {
        v22 = (int)v6->vtbl->GetBaseForm(v6); /*0x460918*/
        FormIDToIRef = SaveLoad_FormIDToIRef(this, *(_DWORD *)(v22 + 0xC)); /*0x460925*/
      }
      qmemcpy(v53, v50, 0x1Cu); /*0x460945*/
      v23 = OblivionDynamicCast( /*0x46095b*/
              v6,
              0,
              (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
              &ArrowProjectile `RTTI Type Descriptor',
              0);
      v24 = OblivionDynamicCast( /*0x460967*/
              v6,
              0,
              (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
              &MagicProjectile `RTTI Type Descriptor',
              0);
      if ( TESObjectREFR_IsPersistent(v6) ) /*0x460969*/
      {
        v51 = 3; /*0x460977*/
        if ( !v50[0] ) /*0x46097f*/
        {
          PersistentCell = (TESObjectCELL *)ExtraDataList_GetPersistentCell(&v6->member.baseExtraList); /*0x460984*/
          v26 = TESObjectCELL_GetWorldSpace(PersistentCell); /*0x46098b*/
          *(_DWORD *)v53 = SaveLoad_FormIDToIRef(this, v26->super.refID); /*0x4609a1*/
          return (TESObjectCELL *)SaveLoad_SaveData(g_TESSaveLoadGame, &v51, 0x24u);// Save-side movement block writer reached by created refs (0x24), move/havok (0x1C/0x2C), and Oblivion marker (4). /*0x4609a6*/
        }
      }
      else
      {
        if ( v23 ) /*0x4609ad*/
        {
          v51 = 1; /*0x4609b5*/
          return (TESObjectCELL *)SaveLoad_SaveData(g_TESSaveLoadGame, &v51, 0x24u); /*0x4609be*/
        }
        if ( v24 ) /*0x4609c5*/
        {
          v27 = *(_DWORD **)(v24[0x1C] + 0x1C); /*0x4609ca*/
          v51 = 2; /*0x4609cd*/
          ProjectileType = EffectSetting_GetProjectileType(v27); /*0x4609d5*/
          FormIDToIRef = SaveLoad_FormIDToIRef(this, ProjectileType); /*0x4609e2*/
        }
      }
      return (TESObjectCELL *)SaveLoad_SaveData(g_TESSaveLoadGame, &v51, 0x24u); /*0x4609ed*/
    }
    if ( (Src & 0xC) == 0 ) /*0x4609f4*/
    {
      if ( ((unsigned int)&loc_800000 & Src) == 0 ) /*0x460b41*/
        return result; /*0x460b41*/
      v43 = Shared_GetDwordAtOffset40(v6); /*0x460b4c*/
      v44 = TESObjectREFR_GetWorldSpace(v6); /*0x460b4e*/
      if ( v44 ) /*0x460b55*/
      {
        Src = SaveLoad_FormIDToIRef(this, v44->super.refID); /*0x460b62*/
      }
      else if ( v43 ) /*0x460b6a*/
      {
        Src = SaveLoad_FormIDToIRef(this, *(_DWORD *)(v43 + 0xC)); /*0x460b77*/
      }
      else
      {
        v45 = (const char *)((int (__thiscall *)(TESObjectREFR *, UInt32))v6->vtbl->super.GetEditorName)( /*0x460b8b*/
                              v6,
                              v6->member.super.refID);
        PrintError("Reference %s ( %08X ) in an oblivion plane has no worldspace or parent cell.", v45, v48); /*0x460b93*/
      }
      return (TESObjectCELL *)SaveLoad_SaveData(g_TESSaveLoadGame, &Src, 4u); /*0x460b66*/
    }
    if ( Src >= 0 ) /*0x4609fc*/
      return (TESObjectCELL *)SaveLoad_SaveData(g_TESSaveLoadGame, v50, 0x1Cu); /*0x460b3a*/
    IsActor = v6->vtbl->IsActor; /*0x460a04*/
    v51 = 0; /*0x460a0c*/
    if ( IsActor(v6) && ((v3 = sub_5E1F60(v6), (v30 = sub_5E1F40((Actor *)v6)) != 0) || v3) ) /*0x460a32*/
    {
      v39 = (unsigned int *)((int (__thiscall *)(TESObjectREFR *, _WORD *))v6->vtbl->GetStartingPos)(v6, v49); /*0x460ae8*/
      v40 = *v39; /*0x460aec*/
      v41 = v39[1]; /*0x460aee*/
      v42 = v39[2]; /*0x460af1*/
      FormIDToIRef = v40; /*0x460af4*/
      *(_DWORD *)v53 = v41; /*0x460af8*/
      *(_DWORD *)&v53[4] = v42; /*0x460afc*/
      if ( v30 ) /*0x460b00*/
      {
        v36 = SaveLoad_FormIDToIRef(this, *(_DWORD *)(v30 + 0xC)); /*0x460b06*/
        goto LABEL_49; /*0x460b06*/
      }
      if ( v3 ) /*0x460b0a*/
      {
        v36 = SaveLoad_FormIDToIRef(this, *(_DWORD *)(v3 + 0xC)); /*0x460b12*/
        goto LABEL_49; /*0x460b12*/
      }
    }
    else
    {
      if ( OblivionDynamicCast( /*0x460a45*/
             v6,
             v3,
             (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
             &Actor `RTTI Type Descriptor',
             v3) )
      {
        PrintError("Actor does not have an editor location.  This should never happen."); /*0x460a56*/
      }
      v31 = (unsigned int *)((int (__thiscall *)(TESObjectREFR *, _WORD *))v6->vtbl->GetStartingPos)(v6, v49); /*0x460a6d*/
      v32 = *v31; /*0x460a6f*/
      v33 = v31[1]; /*0x460a71*/
      v34 = v31[2]; /*0x460a74*/
      FormIDToIRef = v32; /*0x460a77*/
      *(_DWORD *)v53 = v33; /*0x460a7d*/
      *(_DWORD *)&v53[4] = v34; /*0x460a81*/
      v51 = v3; /*0x460a85*/
      if ( !Shared_GetDwordAtOffset40(v6) ) /*0x460a90*/
        goto LABEL_50; /*0x460a90*/
      v35 = (TESObjectCELL *)Shared_GetDwordAtOffset40(v6); /*0x460a98*/
      if ( TESObjectCELL_IsInterior(v35) ) /*0x460a9f*/
      {
        v46 = *(_DWORD *)(Shared_GetDwordAtOffset40(v6) + 0xC); /*0x460ab2*/
        v36 = SaveLoad_FormIDToIRef(this, v46); /*0x460ab3*/
LABEL_49:
        v51 = v36; /*0x460b17*/
        goto LABEL_50; /*0x460b17*/
      }
      v37 = (TESObjectCELL *)Shared_GetDwordAtOffset40(v6); /*0x460ab5*/
      if ( TESObjectCELL_GetWorldSpace(v37) ) /*0x460abc*/
      {
        v38 = (TESObjectCELL *)Shared_GetDwordAtOffset40(v6); /*0x460ac7*/
        refID = TESObjectCELL_GetWorldSpace(v38)->super.refID; /*0x460ad6*/
        v36 = SaveLoad_FormIDToIRef(this, refID); /*0x460ad7*/
        goto LABEL_49; /*0x460ad7*/
      }
    }
LABEL_50:
    qmemcpy(&v53[8], v50, 0x1Cu); /*0x460b28*/
    return (TESObjectCELL *)SaveLoad_SaveData(g_TESSaveLoadGame, &v51, 0x2Cu); /*0x460b31*/
  }
  result = (TESObjectCELL *)OblivionDynamicCast( /*0x46074b*/
                              a2,
                              0,
                              (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                              &TESObjectCELL `RTTI Type Descriptor',
                              0);
  v8 = result; /*0x460750*/
  if ( !result ) /*0x460757*/
    return result; /*0x460757*/
  result = (TESObjectCELL *)Src; /*0x46075d*/
  if ( (Src & 0x4000000) != 0 ) /*0x460766*/
  {
    v9 = TESObjectCELL_GetWorldSpace(v8); /*0x46076a*/
    LOWORD(Src) = SaveLoad_WorldspaceFormIDToIndex(this, v9->super.refID); /*0x46077c*/
    BYTE2(Src) = TESObjectCELL_GetXCoordinate(v8); /*0x460788*/
    HIBYTE(Src) = TESObjectCELL_GetYCoordinate(v8); /*0x460791*/
    return (TESObjectCELL *)SaveLoad_SaveData(g_TESSaveLoadGame, &Src, 4u); /*0x460ba8*/
  }
  if ( (Src & 0x2000000) != 0 ) /*0x46079f*/
  {
    v10 = TESObjectCELL_GetWorldSpace(v8); /*0x4607a7*/
    v49[0] = SaveLoad_WorldspaceFormIDToIndex(this, v10->super.refID); /*0x4607b9*/
    v49[1] = TESObjectCELL_GetXCoordinate(v8); /*0x4607c5*/
    v49[2] = TESObjectCELL_GetYCoordinate(v8); /*0x4607d5*/
    return (TESObjectCELL *)SaveLoad_SaveData(g_TESSaveLoadGame, v49, 6u); /*0x4607db*/
  }
  return result; /*0x460bad*/
}
