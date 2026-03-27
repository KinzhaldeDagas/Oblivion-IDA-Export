void __thiscall sub_425040(ExtraDataList *this, int arg0, int a3, void *a4, TESForm *a5)
{
  BSExtraData *ExtraData; // edi
  _DWORD *p_member; // esi
  TESForm *ActorBaseForm; // eax
  BSExtraDataVtbl *vtbl; // eax
  bool (__thiscall *CompareTo)(BSExtraData *, BSExtraData *); // ecx
  int v11; // eax
  BSExtraData *v12; // eax
  BSExtraData *v13; // esi
  TESForm *v14; // eax
  BSExtraDataVtbl *v15; // eax
  BSExtraData *v16; // eax
  BSExtraData *v17; // eax
  TESForm *v18; // eax
  BSExtraDataVtbl *v19; // eax
  BSExtraData *v20; // esi
  UInt32 next; // eax
  TESForm *v22; // eax
  BSExtraData *v23; // eax
  BSExtraData *v24; // eax
  UInt32 *v25; // esi
  TESForm *v26; // eax
  void *v27; // eax
  UInt32 *v28; // eax
  BSExtraData *v29; // esi
  UInt32 v30; // eax
  TESForm *v31; // eax
  BSExtraData *v32; // eax
  _DWORD *v33; // eax
  _DWORD *v34; // ebx
  _DWORD *v35; // esi
  UInt32 v36; // edi
  int v37; // ebp
  void (__thiscall **v38)(int, int); // ebp
  int v39; // eax
  void (__thiscall **v40)(int, int); // edi
  int v41; // eax
  TESForm *v42; // eax
  void *v43; // eax
  BSExtraData *v44; // eax
  _DWORD *v45; // eax
  _DWORD *v46; // esi
  char *v47; // edi
  UInt32 v48; // eax
  TESForm *v49; // eax
  void *v50; // eax
  _DWORD *v51; // eax
  BSExtraData *v52; // eax
  int *v53; // eax
  UInt32 *v54; // esi
  BSExtraData *v55; // eax
  UInt32 *v56; // ebp
  int v57; // edi
  TESForm *v58; // eax
  char *v59; // eax
  UInt32 *v60; // eax
  BSExtraData *v61; // eax
  UInt32 v62; // eax
  TESForm *v63; // eax
  char *v64; // esi
  BSExtraData *v65; // eax
  _DWORD *v66; // eax
  int v67; // esi
  _DWORD *v68; // edi
  TESForm *v69; // eax
  void *v70; // eax
  _DWORD *v71; // eax
  BSExtraData *v72; // eax
  UInt32 v73; // eax
  TESForm *v74; // eax
  BSExtraDataVtbl *v75; // eax
  bool v76; // [esp+13h] [ebp-9h]
  UInt32 a1; // [esp+18h] [ebp-4h]
  TESForm *v79; // [esp+2Ch] [ebp+10h]

  v76 = 0;
  if ( a4 )
    v76 = (*(unsigned __int8 (__thiscall **)(void *))(*(_DWORD *)a4 + 0x190))(a4) != 0;
  if ( (arg0 & 0x4000020) != 0 )
  {
    ExtraData = BaseExtraList_GetExtraData(this, kExtraData_Script);
    if ( ExtraData )
    {
      if ( a5 )
      {
        p_member = OblivionDynamicCast(
                     a5,
                     0,
                     (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                     &TESScriptableForm `RTTI Type Descriptor',
                     0);
        if ( v76 )
        {
          ActorBaseForm = Actor_GetActorBaseForm((Actor *)a4, 1);
          if ( ActorBaseForm )
            p_member = &ActorBaseForm[8].member;
        }
        vtbl = ExtraData[1].vtbl;
        CompareTo = 0;
        if ( vtbl )
          CompareTo = vtbl[1].CompareTo;
        if ( p_member )
        {
          v11 = p_member[1];
          if ( !v11 || *(bool (__thiscall **)(BSExtraData *, BSExtraData *))(v11 + 0xC) != CompareTo )
            BaseExtraList_RemoveExtraByType(this, 0x12u);
        }
      }
    }
  }
  if ( (arg0 & 0x20) != 0 )
  {
    v12 = BaseExtraList_GetExtraData(this, kExtraData_ReferencePointer);
    v13 = v12;
    if ( v12 )
    {
      v14 = TESForm_LookupByFormID((UInt32)v12[1].vtbl);
      v15 = (BSExtraDataVtbl *)OblivionDynamicCast(
                                 v14,
                                 0,
                                 (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                 (struct TypeDescriptor *)&TESObjectREFR `RTTI Type Descriptor',
                                 0);
      v13[1].vtbl = v15;
      if ( !v15 )
      {
        v16 = BaseExtraList_GetExtraData(this, kExtraData_ReferencePointer);
        if ( v16 )
          BaseExtraList_RemoveExtraByPtr(this, (int)v16, 1);
      }
    }
  }
  if ( (arg0 & 0x20) != 0 )
  {
    v17 = BaseExtraList_GetExtraData(this, kExtraData_Poison);
    if ( v17 )
    {
      v18 = TESForm_LookupByFormID((UInt32)v17[1].vtbl);
      v19 = (BSExtraDataVtbl *)OblivionDynamicCast(
                                 v18,
                                 0,
                                 (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                 &AlchemyItem `RTTI Type Descriptor',
                                 0);
      if ( v19 )
        sub_41EFD0(this, v19);
    }
  }
  if ( v76 )
  {
    v20 = BaseExtraList_GetExtraData(this, kExtraData_Package);
    if ( v20 )
    {
      if ( TESDataHandler_IsFormIDCreated_(v20[1].vtbl[1].CompareTo) )
        (*((void (__thiscall **)(BSExtraDataVtbl *))v20[1].vtbl->Destructor + 0x3A))(v20[1].vtbl);
      sub_5672A0((TESPackage *)v20[1].vtbl);
      next = (UInt32)v20[1].members.next;
      if ( next )
      {
        v22 = TESForm_LookupByFormID(next);
        v20[1].members.next = (BSExtraData *)OblivionDynamicCast(
                                               v22,
                                               0,
                                               (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                               (struct TypeDescriptor *)&TESObjectREFR `RTTI Type Descriptor',
                                               0);
      }
    }
    if ( (arg0 & 0x40000) != 0 )
    {
      v23 = BaseExtraList_GetExtraData(this, kExtraData_TresPassPackage);
      if ( v23 )
      {
        if ( v23[1].vtbl )
          (*((void (__thiscall **)(BSExtraDataVtbl *))v23[1].vtbl->Destructor + 0x3A))(v23[1].vtbl);
      }
    }
    v24 = BaseExtraList_GetExtraData(this, kExtraData_Follower);
    if ( v24 )
    {
      v25 = (UInt32 *)v24[1].vtbl;
      while ( v25 )
      {
        if ( !v25[1] && !*v25 )
          break;
        if ( *v25
          && (v26 = TESForm_LookupByFormID(*v25),
              (v27 = OblivionDynamicCast(
                       v26,
                       0,
                       (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                       &Actor `RTTI Type Descriptor',
                       0)) != 0) )
        {
          *v25 = (UInt32)v27;
          v25 = (UInt32 *)v25[1];
        }
        else
        {
          v28 = (UInt32 *)v25[1];
          if ( v28 )
          {
            v25[1] = v28[1];
            *v25 = *v28;
            FormHeapFree((unsigned int)v28);
          }
          else
          {
            *v25 = 0;
          }
        }
      }
    }
    if ( (arg0 & 0x4000) != 0 )
    {
      v29 = BaseExtraList_GetExtraData(this, kExtraData_OblivionEntry);
      v30 = (UInt32)v29[2].vtbl;
      if ( v30 )
      {
        v31 = TESForm_LookupByFormID(v30);
        v29[2].vtbl = (BSExtraDataVtbl *)OblivionDynamicCast(
                                           v31,
                                           0,
                                           (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                           (struct TypeDescriptor *)&TESObjectREFR `RTTI Type Descriptor',
                                           0);
      }
    }
  }
  else
  {
    if ( (arg0 & 0x200000) != 0 )
    {
      v32 = BaseExtraList_GetExtraData(this, kExtraData_NonActorMagicCaster);
      v33 = OblivionDynamicCast(
              v32,
              0,
              (struct _s_RTTICompleteObjectLocator *)&BSExtraData `RTTI Type Descriptor',
              &NonActorMagicCaster `RTTI Type Descriptor',
              0);
      v34 = v33;
      if ( v33 )
      {
        v35 = v33 + 3;
        v36 = (*(int (__thiscall **)(_DWORD *))(v33[3] + 0x30))(v33 + 3);
        v37 = (*(int (__thiscall **)(_DWORD *))(v34[3] + 0x38))(v34 + 3);
        v79 = (TESForm *)v37;
        a1 = (*(int (__thiscall **)(_DWORD *))(v34[3] + 0x20))(v34 + 3);
        if ( v36 )
        {
          v38 = (void (__thiscall **)(int, int))(*v35 + 0x34);
          v39 = MagicItem_LookupByFormID(v36);
          (*v38)((int)(v34 + 3), v39);
          v37 = (int)v79;
        }
        if ( v37 )
        {
          v40 = (void (__thiscall **)(int, int))(*v35 + 0x3C);
          v41 = MagicTarget_LookupByFormID(v37);
          (*v40)((int)(v34 + 3), v41);
        }
        if ( a1 )
        {
          v42 = TESForm_LookupByFormID(a1);
          v43 = OblivionDynamicCast(
                  v42,
                  0,
                  (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                  (struct TypeDescriptor *)&TESObjectREFR `RTTI Type Descriptor',
                  0);
          sub_4A6D70(v34, (int)v43);
        }
      }
      v44 = BaseExtraList_GetExtraData(this, kExtraData_Seed|kExtraData_Havok);
      v45 = OblivionDynamicCast(
              v44,
              0,
              (struct _s_RTTICompleteObjectLocator *)&BSExtraData `RTTI Type Descriptor',
              &NonActorMagicTarget `RTTI Type Descriptor',
              0);
      v46 = v45;
      if ( v45 )
      {
        v47 = (char *)(v45 + 3);
        v48 = (*(int (__thiscall **)(_DWORD *))(v45[3] + 4))(v45 + 3);
        if ( v48 )
        {
          v49 = TESForm_LookupByFormID(v48);
          v50 = OblivionDynamicCast(
                  v49,
                  0,
                  (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                  (struct TypeDescriptor *)&TESObjectREFR `RTTI Type Descriptor',
                  0);
          sub_6A32C0(v46, (int)v50);
        }
        v51 = (_DWORD *)(*(int (__thiscall **)(_DWORD *))(*(_DWORD *)v47 + 8))(v46 + 3);
        ActiveEffect_Base_LinkAEList(v51, 0);
      }
    }
    if ( (arg0 & 0x100000) != 0 )
    {
      v52 = BaseExtraList_GetExtraData(this, kExtraData_Teleport);
      if ( v52 )
        v53 = (int *)v52[1].vtbl;
      else
        v53 = 0;
      sub_42B550(v53);
    }
  }
  if ( LOBYTE(SaveLoad_CurrentSavegame[1].createdObjectList.next) < 0x46u )
  {
    v54 = 0;
    v55 = BaseExtraList_GetExtraData(this, kExtraData_DroppedItemList);
    if ( v55 )
      v54 = (UInt32 *)&v55[1];
    v56 = 0;
    if ( v54 )
    {
      while ( v54[1] || *v54 )
      {
        v57 = *v54;
        if ( *v54
          && (v58 = TESForm_LookupByFormID(*v54),
              (v59 = (char *)OblivionDynamicCast(
                               v58,
                               0,
                               (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                               (struct TypeDescriptor *)&TESObjectREFR `RTTI Type Descriptor',
                               0)) != 0) )
        {
          *v54 = (UInt32)v59;
          sub_4203E0((ExtraDataList *)(v59 + 0x44), (BSExtraDataVtbl *)a4);
          v56 = v54;
          v54 = (UInt32 *)v54[1];
        }
        else if ( v56 )
        {
          BSSimpleList_Remove(v56, v57);
          v54 = (UInt32 *)v56[1];
        }
        else
        {
          v60 = (UInt32 *)v54[1];
          if ( v60 )
          {
            v54[1] = v60[1];
            *v54 = *v60;
            FormHeapFree((unsigned int)v60);
          }
          else
          {
            *v54 = 0;
          }
          if ( !v54[1] && !*v54 )
            break;
        }
        if ( !v54 )
          break;
      }
    }
  }
  if ( LOBYTE(SaveLoad_CurrentSavegame[1].createdObjectList.next) >= 0x46u )
  {
    v61 = BaseExtraList_GetExtraData(this, kExtraData_ItemDropper);
    if ( v61 )
    {
      v62 = (UInt32)v61[1].vtbl;
      if ( v62 )
      {
        v63 = TESForm_LookupByFormID(v62);
        v64 = (char *)OblivionDynamicCast(
                        v63,
                        0,
                        (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                        (struct TypeDescriptor *)&TESObjectREFR `RTTI Type Descriptor',
                        0);
        sub_4203E0(this, (BSExtraDataVtbl *)v64);
        if ( v64 )
          sub_424B60((ExtraDataList *)(v64 + 0x44), (int)a4);
      }
    }
  }
  v65 = BaseExtraList_GetExtraData(this, kExtraData_FriendHitList);
  v66 = OblivionDynamicCast(
          v65,
          0,
          (struct _s_RTTICompleteObjectLocator *)&BSExtraData `RTTI Type Descriptor',
          &ExtraFriendHitList `RTTI Type Descriptor',
          0);
  if ( v66 )
  {
    v67 = v66[3];
    while ( v67 )
    {
      v68 = *(_DWORD **)v67;
      if ( !*(_DWORD *)v67
        || (v69 = TESForm_LookupByFormID(*v68),
            v70 = OblivionDynamicCast(
                    v69,
                    0,
                    (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                    (struct TypeDescriptor *)&TESObjectREFR `RTTI Type Descriptor',
                    0),
            (*v68 = v70) != 0) )
      {
        v67 = *(_DWORD *)(v67 + 4);
      }
      else
      {
        v71 = *(_DWORD **)(v67 + 4);
        if ( v71 )
        {
          *(_DWORD *)(v67 + 4) = v71[1];
          *(_DWORD *)v67 = *v71;
          FormHeapFree((unsigned int)v71);
        }
        else
        {
          *(_DWORD *)v67 = 0;
        }
        TESTexture::ClearComponentReferences(v68);
        FormHeapFree((unsigned int)v68);
      }
    }
  }
  v72 = BaseExtraList_GetExtraData(this, kExtraData_HeadingTarget);
  if ( v72 )
  {
    v73 = (UInt32)v72[1].vtbl;
    if ( v73 )
    {
      v74 = TESForm_LookupByFormID(v73);
      v75 = (BSExtraDataVtbl *)OblivionDynamicCast(
                                 v74,
                                 0,
                                 (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                 (struct TypeDescriptor *)&TESObjectREFR `RTTI Type Descriptor',
                                 0);
      sub_423970(this, v75);
    }
  }
}
