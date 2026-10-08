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
  UInt32 v37; // ebp
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
  void **p_Destructor; // eax
  UInt32 *v54; // esi
  BSExtraData *v55; // eax
  int *v56; // ebp
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

  v76 = 0; /*0x425053*/
  if ( a4 ) /*0x425058*/
    v76 = (*(unsigned __int8 (__thiscall **)(void *))(*(_DWORD *)a4 + 0x190))(a4) != 0; /*0x42506a*/
  if ( (arg0 & 0x4000020) != 0 ) /*0x425077*/
  {
    ExtraData = BaseExtraList_GetExtraData(this, kExtraData_Script); /*0x425082*/
    if ( ExtraData ) /*0x425086*/
    {
      if ( a5 ) /*0x42508e*/
      {
        p_member = OblivionDynamicCast( /*0x4250ac*/
                     a5,
                     0,
                     (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                     &TESScriptableForm `RTTI Type Descriptor',
                     0);
        if ( v76 ) /*0x4250ae*/
        {
          ActorBaseForm = Actor_GetActorBaseForm((Actor *)a4, 1); /*0x4250b4*/
          if ( ActorBaseForm ) /*0x4250bb*/
            p_member = &ActorBaseForm[8].member; /*0x4250bd*/
        }
        vtbl = ExtraData[1].vtbl; /*0x4250c3*/
        CompareTo = 0; /*0x4250c6*/
        if ( vtbl ) /*0x4250ca*/
          CompareTo = vtbl[1].CompareTo; /*0x4250cc*/
        if ( p_member ) /*0x4250d1*/
        {
          v11 = p_member[1]; /*0x4250d3*/
          if ( !v11 || *(bool (__thiscall **)(BSExtraData *, BSExtraData *))(v11 + 0xC) != CompareTo ) /*0x4250dd*/
            BaseExtraList_RemoveExtraByType(this, 0x12u); /*0x4250e3*/
        }
      }
    }
  }
  if ( (arg0 & 0x20) != 0 ) /*0x4250f1*/
  {
    v12 = BaseExtraList_GetExtraData(this, kExtraData_ReferencePointer); /*0x4250f7*/
    v13 = v12; /*0x4250fc*/
    if ( v12 ) /*0x425100*/
    {
      v14 = TESForm_LookupByFormID((UInt32)v12[1].vtbl); /*0x425114*/
      v15 = (BSExtraDataVtbl *)OblivionDynamicCast( /*0x42511d*/
                                 v14,
                                 0,
                                 (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                 (struct TypeDescriptor *)&TESObjectREFR `RTTI Type Descriptor',
                                 0);
      v13[1].vtbl = v15; /*0x425127*/
      if ( !v15 ) /*0x42512a*/
      {
        v16 = BaseExtraList_GetExtraData(this, kExtraData_ReferencePointer); /*0x425130*/
        if ( v16 ) /*0x425137*/
          BaseExtraList_RemoveExtraByPtr(this, (int)v16, 1); /*0x42513e*/
      }
    }
  }
  if ( (arg0 & 0x20) != 0 ) /*0x425145*/
  {
    v17 = BaseExtraList_GetExtraData(this, kExtraData_Poison); /*0x42514b*/
    if ( v17 ) /*0x425152*/
    {
      v18 = TESForm_LookupByFormID((UInt32)v17[1].vtbl); /*0x425166*/
      v19 = (BSExtraDataVtbl *)OblivionDynamicCast( /*0x42516f*/
                                 v18,
                                 0,
                                 (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                 &AlchemyItem `RTTI Type Descriptor',
                                 0);
      if ( v19 ) /*0x425179*/
        ExtraDataList_SetPoison(this, v19); /*0x42517e*/
    }
  }
  if ( v76 ) /*0x425188*/
  {
    v20 = BaseExtraList_GetExtraData(this, kExtraData_Package); /*0x425197*/
    if ( v20 ) /*0x42519b*/
    {
      if ( TESDataHandler_IsFormIDCreated_(v20[1].vtbl[1].CompareTo) ) /*0x4251aa*/
        (*((void (__thiscall **)(BSExtraDataVtbl *))v20[1].vtbl->Destructor + 0x3A))(v20[1].vtbl); /*0x4251be*/
      sub_5672A0((TESPackage *)v20[1].vtbl); /*0x4251c3*/
      next = (UInt32)v20[1].members.next; /*0x4251c8*/
      if ( next ) /*0x4251cd*/
      {
        v22 = TESForm_LookupByFormID(next); /*0x4251de*/
        v20[1].members.next = (BSExtraData *)OblivionDynamicCast( /*0x4251ef*/
                                               v22,
                                               0,
                                               (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                               (struct TypeDescriptor *)&TESObjectREFR `RTTI Type Descriptor',
                                               0);
      }
    }
    if ( (arg0 & 0x40000) != 0 ) /*0x4251f8*/
    {
      v23 = BaseExtraList_GetExtraData(this, kExtraData_TresPassPackage); /*0x4251fe*/
      if ( v23 ) /*0x425205*/
      {
        if ( v23[1].vtbl ) /*0x425207*/
          (*((void (__thiscall **)(BSExtraDataVtbl *))v23[1].vtbl->Destructor + 0x3A))(v23[1].vtbl); /*0x42521a*/
      }
    }
    v24 = BaseExtraList_GetExtraData(this, kExtraData_Follower); /*0x425220*/
    if ( v24 ) /*0x425227*/
    {
      v25 = (UInt32 *)v24[1].vtbl; /*0x425229*/
      while ( v25 ) /*0x42522e*/
      {
        if ( !v25[1] && !*v25 ) /*0x425236*/
          break; /*0x425239*/
        if ( *v25 /*0x425263*/
          && (v26 = TESForm_LookupByFormID(*v25),
              (v27 = OblivionDynamicCast(
                       v26,
                       0,
                       (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                       &Actor `RTTI Type Descriptor',
                       0)) != 0) )
        {
          *v25 = (UInt32)v27; /*0x425289*/
          v25 = (UInt32 *)v25[1]; /*0x42528b*/
        }
        else
        {
          v28 = (UInt32 *)v25[1]; /*0x425265*/
          if ( v28 ) /*0x42526a*/
          {
            v25[1] = v28[1]; /*0x42526f*/
            *v25 = *v28; /*0x425275*/
            FormHeapFree((unsigned int)v28); /*0x425277*/
          }
          else
          {
            *v25 = 0; /*0x425281*/
          }
        }
      }
    }
    if ( (arg0 & 0x4000) != 0 ) /*0x425298*/
    {
      v29 = BaseExtraList_GetExtraData(this, kExtraData_OblivionEntry); /*0x4252a7*/
      v30 = (UInt32)v29[2].vtbl; /*0x4252a9*/
      if ( v30 ) /*0x4252ae*/
      {
        v31 = TESForm_LookupByFormID(v30); /*0x4252c3*/
        v29[2].vtbl = (BSExtraDataVtbl *)OblivionDynamicCast( /*0x4252d4*/
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
    if ( (arg0 & 0x200000) != 0 ) /*0x4252e2*/
    {
      v32 = BaseExtraList_GetExtraData(this, kExtraData_NonActorMagicCaster); /*0x4252fa*/
      v33 = OblivionDynamicCast( /*0x425300*/
              v32,
              0,
              (struct _s_RTTICompleteObjectLocator *)&BSExtraData `RTTI Type Descriptor',
              &NonActorMagicCaster `RTTI Type Descriptor',
              0);
      v34 = v33; /*0x425305*/
      if ( v33 ) /*0x42530c*/
      {
        v35 = v33 + 3; /*0x425318*/
        v36 = (*(int (__thiscall **)(_DWORD *))(v33[3] + 0x30))(v33 + 3); /*0x42531f*/
        v37 = (*(int (__thiscall **)(_DWORD *))(v34[3] + 0x38))(v34 + 3); /*0x42532a*/
        v79 = (TESForm *)v37; /*0x425333*/
        a1 = (*(int (__thiscall **)(_DWORD *))(v34[3] + 0x20))(v34 + 3); /*0x42533b*/
        if ( v36 ) /*0x42533f*/
        {
          v38 = (void (__thiscall **)(int, int))(*v35 + 0x34); /*0x425344*/
          v39 = MagicItem_LookupByFormID(v36); /*0x425347*/
          (*v38)((int)(v34 + 3), v39); /*0x425355*/
          v37 = (UInt32)v79; /*0x425357*/
        }
        if ( v37 ) /*0x42535d*/
        {
          v40 = (void (__thiscall **)(int, int))(*v35 + 0x3C); /*0x425362*/
          v41 = MagicTarget_LookupByFormID(v37); /*0x425365*/
          (*v40)((int)(v34 + 3), v41); /*0x425372*/
        }
        if ( a1 ) /*0x42537a*/
        {
          v42 = TESForm_LookupByFormID(a1); /*0x42538b*/
          v43 = OblivionDynamicCast( /*0x425394*/
                  v42,
                  0,
                  (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                  (struct TypeDescriptor *)&TESObjectREFR `RTTI Type Descriptor',
                  0);
          sub_4A6D70(v34, (int)v43); /*0x42539f*/
        }
      }
      v44 = BaseExtraList_GetExtraData(this, kExtraData_Seed|kExtraData_Havok); /*0x4253b8*/
      v45 = OblivionDynamicCast( /*0x4253be*/
              v44,
              0,
              (struct _s_RTTICompleteObjectLocator *)&BSExtraData `RTTI Type Descriptor',
              &NonActorMagicTarget `RTTI Type Descriptor',
              0);
      v46 = v45; /*0x4253c3*/
      if ( v45 ) /*0x4253ca*/
      {
        v47 = (char *)(v45 + 3); /*0x4253d2*/
        v48 = (*(int (__thiscall **)(_DWORD *))(v45[3] + 4))(v45 + 3); /*0x4253d7*/
        if ( v48 ) /*0x4253db*/
        {
          v49 = TESForm_LookupByFormID(v48); /*0x4253ec*/
          v50 = OblivionDynamicCast( /*0x4253f5*/
                  v49,
                  0,
                  (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                  (struct TypeDescriptor *)&TESObjectREFR `RTTI Type Descriptor',
                  0);
          NonActorMagicTarget_SetParentReference(v46, (int)v50); /*0x425400*/
        }
        v51 = (_DWORD *)(*(int (__thiscall **)(_DWORD *))(*(_DWORD *)v47 + 8))(v46 + 3); /*0x42540e*/
        ActiveEffect_Base_LinkAEList(v51, 0);   // Verified earlier modified-extra Link phase calls ActiveEffect_Base_LinkAEList on NonActorMagicTarget's active-effect list with null explicit context while EBX still carries the owning reference. TESObjectREFR_PostLinkModifiedExtraList later performs the post-link pass at 0x422B8B. /*0x425411*/
      }
    }
    if ( (arg0 & 0x100000) != 0 ) /*0x425421*/
    {
      v52 = BaseExtraList_GetExtraData(this, kExtraData_Teleport); /*0x425429*/
      if ( v52 ) /*0x425430*/
        p_Destructor = (void **)&v52[1].vtbl->Destructor; /*0x425432*/
      else
        p_Destructor = 0; /*0x425437*/
      sub_42B550(p_Destructor); /*0x42543b*/
    }
  }
  if ( g_TESSaveLoadGame->currentVersion < 0x46u ) /*0x42544d*/
  {
    v54 = 0; /*0x425457*/
    v55 = BaseExtraList_GetExtraData(this, kExtraData_DroppedItemList); /*0x425459*/
    if ( v55 ) /*0x425460*/
      v54 = (UInt32 *)&v55[1]; /*0x425462*/
    v56 = 0; /*0x425465*/
    if ( v54 ) /*0x425469*/
    {
      while ( v54[1] || *v54 ) /*0x425479*/
      {
        v57 = *v54; /*0x425483*/
        if ( *v54 /*0x4254a9*/
          && (v58 = TESForm_LookupByFormID(*v54),
              (v59 = (char *)OblivionDynamicCast(
                               v58,
                               0,
                               (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                               (struct TypeDescriptor *)&TESObjectREFR `RTTI Type Descriptor',
                               0)) != 0) )
        {
          *v54 = (UInt32)v59; /*0x4254f3*/
          ExtraDataList_SetItemDropper((ExtraDataList *)(v59 + 0x44), (BSExtraDataVtbl *)a4); /*0x4254f5*/
          v56 = (int *)v54; /*0x4254fa*/
          v54 = (UInt32 *)v54[1]; /*0x4254fc*/
        }
        else if ( v56 ) /*0x4254ad*/
        {
          BSSimpleList_Remove(v56, v57); /*0x4254e1*/
          v54 = (UInt32 *)v56[1]; /*0x4254e6*/
        }
        else
        {
          v60 = (UInt32 *)v54[1]; /*0x4254af*/
          if ( v60 ) /*0x4254b4*/
          {
            v54[1] = v60[1]; /*0x4254b9*/
            *v54 = *v60; /*0x4254bf*/
            FormHeapFree((unsigned int)v60); /*0x4254c1*/
          }
          else
          {
            *v54 = 0; /*0x4254cb*/
          }
          if ( !v54[1] && !*v54 ) /*0x4254da*/
            break; /*0x4254da*/
        }
        if ( !v54 ) /*0x425501*/
          break; /*0x425501*/
      }
    }
  }
  if ( g_TESSaveLoadGame->currentVersion >= 0x46u ) /*0x425511*/
  {
    v61 = BaseExtraList_GetExtraData(this, kExtraData_ItemDropper); /*0x425517*/
    if ( v61 ) /*0x42551e*/
    {
      v62 = (UInt32)v61[1].vtbl; /*0x425520*/
      if ( v62 ) /*0x425525*/
      {
        v63 = TESForm_LookupByFormID(v62); /*0x425536*/
        v64 = (char *)OblivionDynamicCast( /*0x425547*/
                        v63,
                        0,
                        (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                        (struct TypeDescriptor *)&TESObjectREFR `RTTI Type Descriptor',
                        0);
        ExtraDataList_SetItemDropper(this, (BSExtraDataVtbl *)v64); /*0x42554c*/
        if ( v64 ) /*0x425553*/
          sub_424B60((ExtraDataList *)(v64 + 0x44), (int)a4); /*0x42555d*/
      }
    }
  }
  v65 = BaseExtraList_GetExtraData(this, kExtraData_FriendHitList); /*0x425574*/
  v66 = OblivionDynamicCast( /*0x42557a*/
          v65,
          0,
          (struct _s_RTTICompleteObjectLocator *)&BSExtraData `RTTI Type Descriptor',
          &ExtraFriendHitList `RTTI Type Descriptor',
          0);
  if ( v66 ) /*0x425584*/
  {
    v67 = v66[3]; /*0x425586*/
    while ( v67 ) /*0x42558b*/
    {
      v68 = *(_DWORD **)v67; /*0x425590*/
      if ( !*(_DWORD *)v67 /*0x4255bc*/
        || (v69 = TESForm_LookupByFormID(*v68),
            v70 = OblivionDynamicCast(
                    v69,
                    0,
                    (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                    (struct TypeDescriptor *)&TESObjectREFR `RTTI Type Descriptor',
                    0),
            (*v68 = v70) != 0) )
      {
        v67 = *(_DWORD *)(v67 + 4); /*0x4255f2*/
      }
      else
      {
        v71 = *(_DWORD **)(v67 + 4); /*0x4255be*/
        if ( v71 ) /*0x4255c3*/
        {
          *(_DWORD *)(v67 + 4) = v71[1]; /*0x4255c8*/
          *(_DWORD *)v67 = *v71; /*0x4255ce*/
          FormHeapFree((unsigned int)v71); /*0x4255d0*/
        }
        else
        {
          *(_DWORD *)v67 = 0; /*0x4255da*/
        }
        Shared_NoOpVirtual_60D0A0(v68); /*0x4255e2*/
        FormHeapFree((unsigned int)v68); /*0x4255e8*/
      }
    }
  }
  v72 = BaseExtraList_GetExtraData(this, kExtraData_HeadingTarget); /*0x425601*/
  if ( v72 ) /*0x425608*/
  {
    v73 = (UInt32)v72[1].vtbl; /*0x42560a*/
    if ( v73 ) /*0x42560f*/
    {
      v74 = TESForm_LookupByFormID(v73); /*0x425620*/
      v75 = (BSExtraDataVtbl *)OblivionDynamicCast( /*0x425629*/
                                 v74,
                                 0,
                                 (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                 (struct TypeDescriptor *)&TESObjectREFR `RTTI Type Descriptor',
                                 0);
      sub_423970(this, v75); /*0x425634*/
    }
  }
}
