int __userpurge Player_LinkModifiedForm@<eax>(
        Concurrency::details::SchedulerBase *a1@<ecx>,
        char *a2@<ebp>,
        double a3@<st2>,
        double a4@<st1>,
        double a5@<st3>,
        int a6,
        float a7)
{
  UInt32 v9; // eax
  int *v10; // ebx
  TESForm *v11; // eax
  UInt32 v12; // eax
  TESForm *v13; // eax
  TESForm *v14; // eax
  UInt32 v15; // eax
  TESForm *v16; // edi
  char *v17; // eax
  UInt32 v18; // eax
  TESForm *v19; // eax
  UInt32 v20; // eax
  TESForm *v21; // eax
  void *v22; // eax
  UInt32 v23; // eax
  TESForm *v24; // eax
  UInt32 v25; // eax
  TESForm *v26; // eax
  UInt32 v27; // eax
  TESForm *v28; // eax
  TESForm *v29; // eax
  int *v30; // edi
  TESForm *v31; // eax
  void *v32; // eax
  int *v33; // edi
  int *v34; // ebx
  TESForm *v35; // eax
  void *v36; // eax
  bool v37; // zf
  void (__stdcall *v38)(int); // eax
  int *v39; // eax
  int *v40; // eax
  double (__stdcall *v41)(int); // eax
  double v42; // st7
  double v43; // st7
  double v44; // st6
  double v45; // st7
  TESForm *ActorBaseForm; // eax
  int v47; // eax
  TESForm *v48; // eax
  double v49; // st7
  double v50; // st6
  double v51; // st7
  TESForm *v52; // eax
  int v53; // eax
  TESForm *v54; // eax
  double v55; // st7
  double v56; // st6
  double v57; // st7
  TESForm *v58; // eax
  int v59; // eax
  TESForm *v60; // eax
  int i; // edi
  int AVFromGroupOffset; // eax
  int result; // eax
  float v64; // [esp+38h] [ebp-Ch] BYREF
  double v65; // [esp+3Ch] [ebp-8h]

  sub_60E390(a1, a3, a4, a6, SLODWORD(a7));
  v9 = *((_DWORD *)a1 + 0x46);
  v10 = 0;
  if ( v9 )
  {
    v11 = TESForm_LookupByFormID(v9);
    *((_DWORD *)a1 + 0x46) = OblivionDynamicCast(
                               v11,
                               0,
                               (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                               &DialoguePackage `RTTI Type Descriptor',
                               0);
  }
  v12 = *((_DWORD *)a1 + 0x191);
  if ( v12 )
  {
    v13 = TESForm_LookupByFormID(v12);
    *((_DWORD *)a1 + 0x191) = OblivionDynamicCast(
                                v13,
                                0,
                                (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                &BirthSign `RTTI Type Descriptor',
                                0);
  }
  if ( FormID )
  {
    v14 = TESForm_LookupByFormID((UInt32)FormID);
    FormID = (TESChildCELL *)OblivionDynamicCast(
                               v14,
                               0,
                               (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                               (struct TypeDescriptor *)&TESObjectREFR `RTTI Type Descriptor',
                               0);
  }
  v15 = *((_DWORD *)a1 + 0x189);
  *((_DWORD *)a1 + 0x189) = 0;
  if ( v15 )
  {
    v16 = TESForm_LookupByFormID(v15);
    a2 = (char *)OblivionDynamicCast(
                   v16,
                   0,
                   (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                   &MagicItemForm `RTTI Type Descriptor',
                   0);
    v17 = (char *)OblivionDynamicCast(
                    v16,
                    0,
                    (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                    &MagicItemObject `RTTI Type Descriptor',
                    0);
    if ( a2 )
    {
      a2 += 0x18;
      PlayerCharacter_SetCurrentMagicItem(a1, a2);
    }
    else if ( v17 )
    {
      PlayerCharacter_SetCurrentMagicItem(a1, v17 + 0x24);
    }
  }
  if ( *((_DWORD *)a1 + 0x7A) )
    *((_DWORD *)a1 + 0x7A) = MagicItem_LookupByFormID(*((_DWORD *)a1 + 0x7A));
  if ( *((_DWORD *)a1 + 0x7B) )
    *((_DWORD *)a1 + 0x7B) = MagicTarget_LookupByFormID(*((_DWORD *)a1 + 0x7B));
  v18 = *((_DWORD *)a1 + 0x78);
  if ( v18 )
  {
    v19 = TESForm_LookupByFormID(v18);
    *((_DWORD *)a1 + 0x78) = OblivionDynamicCast(
                               v19,
                               0,
                               (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                               &Creature `RTTI Type Descriptor',
                               0);
  }
  v20 = *((_DWORD *)a1 + 0x18A);
  if ( v20 )
  {
    v21 = TESForm_LookupByFormID(v20);
    v22 = OblivionDynamicCast(
            v21,
            0,
            (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
            &TESObjectBOOK `RTTI Type Descriptor',
            0);
    sub_664850(a1, (int)v22);
  }
  v23 = *((_DWORD *)a1 + 0x194);
  if ( v23 )
  {
    v24 = TESForm_LookupByFormID(v23);
    *((_DWORD *)a1 + 0x194) = OblivionDynamicCast(
                                v24,
                                0,
                                (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                &TESClass `RTTI Type Descriptor',
                                0);
  }
  v25 = *((_DWORD *)a1 + 0x1B8);
  if ( v25 )
  {
    v26 = TESForm_LookupByFormID(v25);
    *((_DWORD *)a1 + 0x1B8) = OblivionDynamicCast(
                                v26,
                                0,
                                (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                &AlchemyItem `RTTI Type Descriptor',
                                0);
  }
  if ( LOBYTE(SaveLoad_CurrentSavegame[1].createdObjectList.next) >= 0x40u )
  {
    v27 = *((_DWORD *)a1 + 0x15E);
    if ( v27 )
    {
      v28 = TESForm_LookupByFormID(v27);
      *((_DWORD *)a1 + 0x15E) = OblivionDynamicCast(
                                  v28,
                                  0,
                                  (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                  (struct TypeDescriptor *)&TESObjectREFR `RTTI Type Descriptor',
                                  0);
    }
  }
  if ( LOBYTE(SaveLoad_CurrentSavegame[1].createdObjectList.next) >= 0x42u )
  {
    if ( ObjectRef )
    {
      v29 = TESForm_LookupByFormID(ObjectRef);
      ObjectRef = (int)OblivionDynamicCast(
                         v29,
                         0,
                         (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                         (struct TypeDescriptor *)&TESObjectREFR `RTTI Type Descriptor',
                         0);
    }
  }
  if ( LOBYTE(SaveLoad_CurrentSavegame[1].createdObjectList.next) >= 0x63u )
  {
    v30 = *((int **)a1 + 0x16B);
    while ( v30 )
    {
      if ( !v30[1] && !*v30 )
        break;
      a2 = (char *)*v30;
      if ( *v30
        && (v31 = TESForm_LookupByFormID((UInt32)a2),
            (v32 = OblivionDynamicCast(
                     v31,
                     0,
                     (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                     (struct TypeDescriptor *)&TESObjectREFR `RTTI Type Descriptor',
                     0)) != 0) )
      {
        *v30 = (int)v32;
        v10 = v30;
        v30 = (int *)v30[1];
      }
      else if ( v10 )
      {
        BSSimpleList_Remove(v10, (int)a2);
        v30 = (int *)v10[1];
      }
      else
      {
        v39 = (int *)v30[1];
        if ( v39 )
        {
          v30[1] = v39[1];
          *v30 = *v39;
          FormHeapFree((unsigned int)v39);
        }
        else
        {
          *v30 = 0;
        }
      }
    }
  }
  if ( LOBYTE(SaveLoad_CurrentSavegame[1].createdObjectList.next) >= 0x73u )
  {
    v33 = &dword_B3BB44;
    v34 = 0;
    do
    {
      if ( !v33[1] && !*v33 )
        break;
      a2 = (char *)*v33;
      if ( *v33
        && (v35 = TESForm_LookupByFormID((UInt32)a2),
            (v36 = OblivionDynamicCast(
                     v35,
                     0,
                     (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                     (struct TypeDescriptor *)&TESObjectREFR `RTTI Type Descriptor',
                     0)) != 0) )
      {
        *v33 = (int)v36;
        v34 = v33;
        v33 = (int *)v33[1];
      }
      else if ( v34 )
      {
        BSSimpleList_Remove(v34, (int)a2);
        v33 = (int *)v34[1];
      }
      else
      {
        v40 = (int *)v33[1];
        if ( v40 )
        {
          v33[1] = v40[1];
          *v33 = *v40;
          FormHeapFree((unsigned int)v40);
        }
        else
        {
          *v33 = 0;
        }
      }
    }
    while ( v33 );
  }
  ActiveEffect_Base_LinkAEList(*((_DWORD **)a1 + 0x79), (int)a1);
  (*(void (__thiscall **)(_DWORD))(**((_DWORD **)a1 + 0x16) + 0x5C))(*((_DWORD *)a1 + 0x16));
  (*(void (__thiscall **)(Concurrency::details::SchedulerBase *))(*(_DWORD *)a1 + 0x170))(a1);
  sub_525400((PlayerCharacter *)a1);
  v37 = *((_BYTE *)a1 + 0x71D) == 0;
  v38 = *(void (__stdcall **)(int))(*(_DWORD *)a1 + 0x1BC);
  *((_BYTE *)a1 + 0x71C) = 0;
  if ( v37 )
    v38(1);
  else
    v38(0);
  v37 = *((_BYTE *)a1 + 0x71C) == 0;
  v41 = *(double (__stdcall **)(int))(*(_DWORD *)a1 + 0x1BC);
  *((_BYTE *)a1 + 0x71D) = 0;
  if ( v37 )
    v42 = v41(1);
  else
    v42 = v41(0);
  sub_663070((int)a1, (char)a2, a3, a4, a5, v42, *((_BYTE *)a1 + 0x5C0));
  if ( LOBYTE(SaveLoad_CurrentSavegame[1].createdObjectList.next) < 0x5Cu )
  {
    v64 = 0.0;
    *(float *)&a6 = 1.0;
    Actor_GetBaseAVCalcFactors((int *)a1, 8, &v64, (float *)&a6);
    a7 = *(float *)&a6 * v64;
    v43 = a7;
    a7 = (float)Double_To_SInt32(a7);
    v44 = v43 - a7;
    v45 = a7;
    if ( v44 < dbl_A2FC68 )
      v45 = v45 - dbl_A2F928;
    v65 = v45;
    ActorBaseForm = Actor_GetActorBaseForm((Actor *)a1, 0);
    v47 = ActorBaseForm->vtbl[1].GetSaveSize(ActorBaseForm, 8);
    a7 = v65;
    a7 = (double)v47 - a7;
    if ( a7 < 0.0 )
      a7 = 0.0;
    v48 = Actor_GetActorBaseForm((Actor *)a1, 0);
    ((void (__thiscall *)(TESForm *, int, float))v48->vtbl[1].LoadGame)(v48, 8, COERCE_FLOAT(LODWORD(a7)));
    Actor_GetBaseAVCalcFactors((int *)a1, 0xA, &v64, (float *)&a6);
    a7 = *(float *)&a6 * v64;
    v49 = a7;
    a7 = (float)Double_To_SInt32(a7);
    v50 = v49 - a7;
    v51 = a7;
    if ( v50 < dbl_A2FC68 )
      v51 = v51 - dbl_A2F928;
    v65 = v51;
    v52 = Actor_GetActorBaseForm((Actor *)a1, 0);
    v53 = v52->vtbl[1].GetSaveSize(v52, 0xA);
    a7 = v65;
    a7 = (double)v53 - a7;
    if ( a7 < 0.0 )
      a7 = 0.0;
    v54 = Actor_GetActorBaseForm((Actor *)a1, 0);
    ((void (__thiscall *)(TESForm *, int, float))v54->vtbl[1].LoadGame)(v54, 0xA, COERCE_FLOAT(LODWORD(a7)));
    Actor_GetBaseAVCalcFactors((int *)a1, 0xB, &v64, (float *)&a6);
    a7 = *(float *)&a6 * v64;
    v55 = a7;
    a7 = (float)Double_To_SInt32(a7);
    v56 = v55 - a7;
    v57 = a7;
    if ( v56 < dbl_A2FC68 )
      v57 = v57 - dbl_A2F928;
    v65 = v57;
    v58 = Actor_GetActorBaseForm((Actor *)a1, 0);
    v59 = v58->vtbl[1].GetSaveSize(v58, 0xB);
    a7 = v65;
    a7 = (double)v59 - a7;
    if ( a7 < 0.0 )
      a7 = 0.0;
    v60 = Actor_GetActorBaseForm((Actor *)a1, 0);
    ((void (__thiscall *)(TESForm *, int, float))v60->vtbl[1].LoadGame)(v60, 0xB, COERCE_FLOAT(LODWORD(a7)));
  }
  for ( i = 0; i < 0x15; ++i )
  {
    AVFromGroupOffset = ActorValue_GetAVFromGroupOffset(2, i);
    result = sub_663C50((Actor *)a1, *(float *)&AVFromGroupOffset);
  }
  return result;
}
